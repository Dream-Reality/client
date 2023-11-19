#include <cmath>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <iostream>

#include "interface/interface.hpp"
namespace BOTS_SPACE{
    class BotsClass{
        public:
        std::string username;
        std::string password;
        std::string token_ub;
        std::chrono::system_clock::time_point start_time;
        double running_time, time_ratio;
        int running_days;
        int day;
        public:
        BotsClass(
            std::string username, 
            std::string password
        ):username(username),password(password){}
        virtual void init() = 0;
        virtual void bod() = 0;
        virtual void work() = 0;
        virtual void eod() = 0;
        virtual void final() = 0;
    };
    class BotsDemoClass:public BotsClass{
        public:
        std::vector<std::string>instruments;
        BotsDemoClass(
            std::string username,
            std::string password
        ):BotsClass(username, password){

        }
        void login(){
            auto login_response = INTERFACE_SPACE::sendLogin(username, password);
            LOG_REPONSE(login_response);
            token_ub = login_response->token_ub;
        }
        void init(){
            auto getgameinfo_response = INTERFACE_SPACE::sendGetGameInfo(token_ub);
            LOG_REPONSE(getgameinfo_response);
            start_time = UTIL_SPACE::ConvertToTimePoint_s(getgameinfo_response->next_game_start_time);
            running_days = getgameinfo_response->next_game_running_days;
            running_time = getgameinfo_response->next_game_running_time;
            time_ratio = getgameinfo_response->next_game_time_ratio;
            auto getinstrumentinfo_response = INTERFACE_SPACE::sendGetInstrumentInfo(token_ub);
            for (int i = 0;i < getinstrumentinfo_response->instruments->size(); i++)
                instruments.push_back(getinstrumentinfo_response->instruments[i]->instrument_name);
            LOG_REPONSE(getinstrumentinfo_response);
        }
        void bod(){
            day++;
        }
        void work(){
            //GETLimitOrderBook: INTERFACE_SPACE::sendGetLimitOrderBook(token_ub, "UBIQ001")
            // INTERFACE_SPACE::sendOrder(token_ub, "UBIQ001", 0, "buy", 10.10, 1000);
            //INTERFACE_SPACE::sendCancel(token_ub, "UBIQ001", index)
            //INTERFACE_SPACE::sendGetTrade(token_ub);
            //INTERFACE_SPACE::
            //LOG_REPONSE(order_response);
        }
        void eod(){

        }
        void final(){

        }
    };
}
