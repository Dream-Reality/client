#ifndef USER_DTO_HH
#define USER_DTO_HH

#include "oatpp/core/macro/codegen.hpp"

namespace DTO_SPACE{

#include OATPP_CODEGEN_BEGIN(DTO)

class LoginDTO:public oatpp::DTO{
    DTO_INIT(LoginDTO, DTO);

    DTO_FIELD(String, user);
    DTO_FIELD(String, password);
};
class LoginResponseDTO:public oatpp::DTO{
    DTO_INIT(LoginResponseDTO, DTO);

    DTO_FIELD(String, response_type);
    DTO_FIELD(String, token_ub);
    DTO_FIELD(String, status);
};

class GetGameInfoDTO:public oatpp::DTO{
    DTO_INIT(GetGameInfoDTO, DTO);

    DTO_FIELD(String, token_ub);
};
class GetGameInfoResponseDTO:public oatpp::DTO{
    DTO_INIT(GetGameInfoResponseDTO, DTO);
    
    DTO_FIELD(String, response_type);
    DTO_FIELD(Int64, next_game_start_time);
    DTO_FIELD(Int32, next_game_running_days);
    DTO_FIELD(Int32, next_game_running_time);
    DTO_FIELD(String, status);
};

class OrderDTO:public oatpp::DTO{
    DTO_INIT(OrderDTO, DTO);

    DTO_FIELD(String, token_ub);
    DTO_FIELD(String, user_info);
    DTO_FIELD(String, instrument);
    DTO_FIELD(Int64, localtime);
    DTO_FIELD(String, direction);
    DTO_FIELD(Float32, price);
    DTO_FIELD(Int32, volume);
};
class OrderResponseDTO:public oatpp::DTO{
    DTO_INIT(OrderResponseDTO, DTO);

    DTO_FIELD(String, response_type);
    DTO_FIELD(String, user_info);
    DTO_FIELD(Float64, localtime);
    DTO_FIELD(Int32, index);
    DTO_FIELD(String, status);
};

class CancelDTO:public oatpp::DTO{
    DTO_INIT(CancelDTO, DTO);

    DTO_FIELD(String, token_ub);
    DTO_FIELD(String, user_info);
    DTO_FIELD(String, instrument);
    DTO_FIELD(Int64, localtime);
    DTO_FIELD(Int32, index);
};
class CancelResponseDTO:public oatpp::DTO{
    DTO_INIT(CancelResponseDTO, DTO);

    DTO_FIELD(String, response_type);
    DTO_FIELD(String, user_info);
    DTO_FIELD(Float64, localtime);
    DTO_FIELD(String, status);
};

class GetLimitOrderBookDTO:public oatpp::DTO{
    DTO_INIT(GetLimitOrderBookDTO, DTO);
    
    DTO_FIELD(String, token_ub);
    DTO_FIELD(String, instrument);
};
class GetLimitOrderBookResponseDTO:public oatpp::DTO{
    DTO_INIT(GetLimitOrderBookResponseDTO, DTO);

    DTO_FIELD(String, response_type);
    DTO_FIELD(String, instrument);
    DTO_FIELD(Int64, localtime);
    DTO_FIELD(Float64, limit_up_price);
    DTO_FIELD(Float64, limit_down_price);
    DTO_FIELD(List<Float64>, bidprice);
    DTO_FIELD(List<Float64>, askprice);
    DTO_FIELD(List<Int32>, bidvolume);
    DTO_FIELD(List<Int32>, askvolume);
    DTO_FIELD(List<Int32>, lobprice);
    DTO_FIELD(Int32, history_count);
    DTO_FIELD(List<Int32>, history_trade_volume);
    DTO_FIELD(List<String>, history_time);
    DTO_FIELD(List<Int32>, history_direction);
    DTO_FIELD(String, status);
};
class GetInstrumentInfoDTO:public oatpp::DTO{
    DTO_INIT(GetInstrumentInfoDTO, DTO);
    DTO_FIELD(String, token_ub);
};

class InstrumentDTO:public oatpp::DTO{
    DTO_INIT(InstrumentDTO, DTO);
    DTO_FIELD(Int32, id);
    DTO_FIELD(String, instrument_name);
};

class GetInstrumentInfoResponseDTO:public oatpp::DTO{
    DTO_INIT(GetInstrumentInfoResponseDTO, DTO);
    DTO_FIELD(String, response_type);
    DTO_FIELD(Int32, instrument_number);
    DTO_FIELD(List<Object<InstrumentDTO>>, instruments);
    DTO_FIELD(String, status);
};

#include OATPP_CODEGEN_END(DTO)

}

#endif