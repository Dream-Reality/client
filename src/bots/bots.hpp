
#include "websocket/WSListener.hpp"

#include "oatpp/parser/json/mapping/ObjectMapper.hpp"
#include "oatpp-websocket/WebSocket.hpp"
#include "oatpp-websocket/Connector.hpp"

#include "oatpp/web/client/ApiClient.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/network/tcp/client/ConnectionProvider.hpp"

#include <string>
#include <thread>
#include <chrono>
#include <iostream>

#include "AppComponent.hpp"
#include "util/util.hpp"
#include "dto/user_dto.hpp"
#include "interface/interface.hpp"
#include "api_client/api_client.hpp"
#include "bots/bots.hpp"

namespace {
    const char* TAG = "websocket-client";
    bool finished = false;
    void socketTask(const std::shared_ptr<oatpp::websocket::WebSocket>& websocket) {
        websocket->listen();
        OATPP_LOGD(TAG, "SOCKET CLOSED!!!");
        finished = true;
    }

}

void run() {
    OATPP_LOGI(TAG, "Application Started");
    INTERFACE_SPACE::init();
    auto jsonObjectMapper = oatpp::parser::json::mapping::ObjectMapper::createShared();
    auto bot = BOTS_SPACE::BotsDemoClass("UBIQ_USER", "123456");
    bot.login();
    bot.init();
    for (int i = 0;i < 1; i++){
        while (true){
            auto t = UTIL_SPACE::ConvertToSimTime_us(bot.start_time, bot.time_ratio, bot.day, bot.running_time);
            if (t > -900)break;
        }
        bot.bod();
        for (double s = 0.; s < 14400; s += 1.){
            while (true){
                auto t = UTIL_SPACE::ConvertToSimTime_us(bot.start_time, bot.time_ratio, bot.day, bot.running_time);
                if (t >= s){
                    break;
                }
            }
            bot.work();
        }
        bot.eod();
    }
}

int main() {
    oatpp::base::Environment::init();
    run();
    oatpp::base::Environment::destroy();
    return 0;
}
