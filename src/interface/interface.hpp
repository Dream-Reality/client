#ifndef INTERFACE_HH
#define INTERFACE_HH

#include "dto/user_dto.hpp"
#include "api_client/api_client.hpp"
#include "oatpp/core/async/Executor.hpp"
#include "AppComponent.hpp"

namespace INTERFACE_SPACE{
    constexpr static const char* TAG = "INTERFACE";
    std::shared_ptr<oatpp::data::mapping::ObjectMapper> objectMapper;
    std::shared_ptr<oatpp::consul::rest::MessageClient> client;
    void init(){
        AppComponent components;
        std::shared_ptr<oatpp::parser::json::mapping::ObjectMapper> objectMapper_ = oatpp::parser::json::mapping::ObjectMapper::createShared();
        std::shared_ptr<oatpp::network::tcp::client::ConnectionProvider> connectionProvider = oatpp::network::tcp::client::ConnectionProvider::createShared({"39.105.124.7", 30010});
        std::shared_ptr<oatpp::web::client::HttpRequestExecutor> requestExecutor = oatpp::web::client::HttpRequestExecutor::createShared(connectionProvider);
        client = oatpp::consul::rest::MessageClient::createShared(requestExecutor, objectMapper_);
        objectMapper = components.apiObjectMapper.getObject();
    }

    DTO_SPACE::LoginResponseDTO::Wrapper sendLogin(
        std::string user,
        std::string password
    ){
        auto login = DTO_SPACE::LoginDTO::createShared();
        login->user = user;
        login->password = password;
        auto response = client->sendLogin(login)->readBodyToDto<oatpp::Object<DTO_SPACE::LoginResponseDTO>>(objectMapper);
        return response;
    }
    DTO_SPACE::OrderResponseDTO::Wrapper sendOrder(
        std::string token_ub,
        std::string instrument, 
        long long localtime, 
        std::string direction, 
        double price, 
        int volume
    ){
        auto order = DTO_SPACE::OrderDTO::createShared();
        order->token_ub = token_ub;
        order->instrument = instrument;
        order->localtime = localtime;
        order->direction = direction;
        order->price = price;
        order->volume = volume;
        auto response = client->sendOrder(order)->readBodyToDto<oatpp::Object<DTO_SPACE::OrderResponseDTO>>(objectMapper);
        return response;
    }
    DTO_SPACE::CancelResponseDTO::Wrapper sendCancel(
        std::string token_ub,
        std::string instrument, 
        long long localtime,
        int index
    ){
        auto cancel = DTO_SPACE::CancelDTO::createShared();
        cancel->token_ub = token_ub;
        cancel->instrument = instrument;
        cancel->localtime = localtime;
        cancel->index = index;
        auto response = client->sendCancel(cancel)->readBodyToDto<oatpp::Object<DTO_SPACE::CancelResponseDTO>>(objectMapper);
        return response;
    }
    DTO_SPACE::GetLOBResponseDTO::Wrapper sendGetLimitOrderBook(
        std::string token_ub,
        std::string instrument
    ){
        auto getlob = DTO_SPACE::GetLOBDTO::createShared();
        getlob->token_ub = token_ub;
        getlob->instrument = instrument;
        auto response = client->sendGetLimitOrderBook(getlob)->readBodyToDto<oatpp::Object<DTO_SPACE::GetLOBResponseDTO>>(objectMapper);
        return response;
    }
    DTO_SPACE::GetUserInfoResponseDTO::Wrapper sendGetUserInfo(
        std::string token_ub
    ){
        auto getuserinfo = DTO_SPACE::GetUserInfoDTO::createShared();
        getuserinfo->token_ub = token_ub;
        auto response = client->sendGetUserInfo(getuserinfo)->readBodyToDto<oatpp::Object<DTO_SPACE::GetUserInfoResponseDTO>>(objectMapper);
        return response;
    }
    DTO_SPACE::GetGameInfoResponseDTO::Wrapper sendGetGameInfo(
        std::string token_ub
    ){
        auto getgameinfo = DTO_SPACE::GetGameInfoDTO::createShared();
        getgameinfo->token_ub = token_ub;
        auto response = client->sendGetGameInfo(getgameinfo)->readBodyToDto<oatpp::Object<DTO_SPACE::GetGameInfoResponseDTO>>(objectMapper);
        return response;
    }
    DTO_SPACE::GetInstrumentInfoResponseDTO::Wrapper sendGetInstrumentInfo(
        std::string token_ub
    ){
        auto getinstrumentinfo = DTO_SPACE::GetInstrumentInfoDTO::createShared();
        getinstrumentinfo->token_ub = token_ub;
        auto response = client->sendGetInstrumentInfo(getinstrumentinfo)->readBodyToDto<oatpp::Object<DTO_SPACE::GetInstrumentInfoResponseDTO>>(objectMapper);
        return response;
    }

    oatpp::Object<DTO_SPACE::GetTradeResponseDTO> sendGetTrade(
        std::string token_ub,
        std::string instrument_name
    ){
        auto gettrade = DTO_SPACE::GetTradeDTO::createShared();
        gettrade->token_ub = token_ub;
        gettrade->instrument_name = instrument_name;
        auto response = client->sendGetTrade(gettrade)->readBodyToDto<oatpp::Object<DTO_SPACE::GetTradeResponseDTO>>(objectMapper);
        return response;
    }
    oatpp::Object<DTO_SPACE::GetActiveOrderResponseDTO> sendGetActiveOrder(
        std::string token_ub
    ){
        auto getactiveorder = DTO_SPACE::GetActiveOrderDTO::createShared();
        getactiveorder->token_ub = token_ub;
        auto response = client->sendGetActiveOrder(getactiveorder)->readBodyToDto<oatpp::Object<DTO_SPACE::GetActiveOrderResponseDTO>>(objectMapper);
        return response;
    }
};

#endif
