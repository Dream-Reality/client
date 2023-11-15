#ifndef API_CLIENT_HH
#define API_CLIENT_HH

#include "oatpp/web/client/ApiClient.hpp"
#include "oatpp/core/data/mapping/type/Object.hpp"
#include "oatpp/core/macro/codegen.hpp"

#include "dto/user_dto.hpp"

namespace oatpp { namespace consul { namespace rest {
    class MessageClient: public oatpp::web::client::ApiClient{
        public:
            #include OATPP_CODEGEN_BEGIN(ApiClient)
            API_CLIENT_INIT(MessageClient)
            API_CALL("POST", "Login", sendLogin, BODY_DTO(Object<DTO_SPACE::LoginDTO>, login))
            API_CALL("POST", "Order", sendOrder, BODY_DTO(Object<DTO_SPACE::OrderDTO>, order))
            API_CALL("POST", "Cancel", sendCancel, BODY_DTO(Object<DTO_SPACE::CancelDTO>, cancel))
            API_CALL("POST", "Info/Game/GetGameInfo", sendGetGameInfo, BODY_DTO(Object<DTO_SPACE::GetGameInfoDTO>, getgameinfo))
            API_CALL("POST", "Info/LOB/GetLimitOrderBook", sendGetLimitOrderBook, BODY_DTO(Object<DTO_SPACE::GetLimitOrderBookDTO>, getlob))
            API_CALL("POST", "Info/Instrument/GetInstrumentInfo", sendGetInstrumentInfo, BODY_DTO(Object<DTO_SPACE::GetInstrumentInfoDTO>, getinstrumentinfo))
            #include OATPP_CODEGEN_END(ApiClient)
    };
}
}
}


#endif