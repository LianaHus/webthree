/**
 * This file is generated by jsonrpcstub, DO NOT CHANGE IT MANUALLY!
 */

#ifndef JSONRPC_CPP_STUB_DEV_RPC_ADMINETHFACE_H_
#define JSONRPC_CPP_STUB_DEV_RPC_ADMINETHFACE_H_

#include "ModularServer.h"

namespace dev {
    namespace rpc {
        class AdminEthFace : public ServerInterface<AdminEthFace>
        {
            public:
                AdminEthFace()
                {
                    this->bindAndAddMethod(jsonrpc::Procedure("admin_eth_blockQueueStatus", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::AdminEthFace::admin_eth_blockQueueStatusI);
                    this->bindAndAddMethod(jsonrpc::Procedure("admin_eth_setAskPrice", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::AdminEthFace::admin_eth_setAskPriceI);
                    this->bindAndAddMethod(jsonrpc::Procedure("admin_eth_setBidPrice", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::AdminEthFace::admin_eth_setBidPriceI);
                    this->bindAndAddMethod(jsonrpc::Procedure("admin_eth_setMining", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_BOOLEAN,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::AdminEthFace::admin_eth_setMiningI);
                    this->bindAndAddMethod(jsonrpc::Procedure("admin_eth_findBlock", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::AdminEthFace::admin_eth_findBlockI);
                    this->bindAndAddMethod(jsonrpc::Procedure("admin_eth_blockQueueFirstUnknown", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::AdminEthFace::admin_eth_blockQueueFirstUnknownI);
                    this->bindAndAddMethod(jsonrpc::Procedure("admin_eth_blockQueueRetryUnknown", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::AdminEthFace::admin_eth_blockQueueRetryUnknownI);
                    this->bindAndAddMethod(jsonrpc::Procedure("admin_eth_allAccounts", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::AdminEthFace::admin_eth_allAccountsI);
                    this->bindAndAddMethod(jsonrpc::Procedure("admin_eth_newAccount", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_OBJECT,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::AdminEthFace::admin_eth_newAccountI);
                    this->bindAndAddMethod(jsonrpc::Procedure("admin_eth_setMiningBenefactor", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::AdminEthFace::admin_eth_setMiningBenefactorI);
                    this->bindAndAddMethod(jsonrpc::Procedure("admin_eth_inspect", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::AdminEthFace::admin_eth_inspectI);
                    this->bindAndAddMethod(jsonrpc::Procedure("admin_eth_reprocess", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::AdminEthFace::admin_eth_reprocessI);
                    this->bindAndAddMethod(jsonrpc::Procedure("admin_eth_vmTrace", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_INTEGER,"param3",jsonrpc::JSON_STRING, NULL), &dev::rpc::AdminEthFace::admin_eth_vmTraceI);
                    this->bindAndAddMethod(jsonrpc::Procedure("admin_eth_getReceiptByHashAndIndex", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_INTEGER,"param3",jsonrpc::JSON_STRING, NULL), &dev::rpc::AdminEthFace::admin_eth_getReceiptByHashAndIndexI);
                }

                inline virtual void admin_eth_blockQueueStatusI(const Json::Value &request, Json::Value &response)
                {
                    response = this->admin_eth_blockQueueStatus(request[0u].asString());
                }
                inline virtual void admin_eth_setAskPriceI(const Json::Value &request, Json::Value &response)
                {
                    response = this->admin_eth_setAskPrice(request[0u].asString(), request[1u].asString());
                }
                inline virtual void admin_eth_setBidPriceI(const Json::Value &request, Json::Value &response)
                {
                    response = this->admin_eth_setBidPrice(request[0u].asString(), request[1u].asString());
                }
                inline virtual void admin_eth_setMiningI(const Json::Value &request, Json::Value &response)
                {
                    response = this->admin_eth_setMining(request[0u].asBool(), request[1u].asString());
                }
                inline virtual void admin_eth_findBlockI(const Json::Value &request, Json::Value &response)
                {
                    response = this->admin_eth_findBlock(request[0u].asString(), request[1u].asString());
                }
                inline virtual void admin_eth_blockQueueFirstUnknownI(const Json::Value &request, Json::Value &response)
                {
                    response = this->admin_eth_blockQueueFirstUnknown(request[0u].asString());
                }
                inline virtual void admin_eth_blockQueueRetryUnknownI(const Json::Value &request, Json::Value &response)
                {
                    response = this->admin_eth_blockQueueRetryUnknown(request[0u].asString());
                }
                inline virtual void admin_eth_allAccountsI(const Json::Value &request, Json::Value &response)
                {
                    response = this->admin_eth_allAccounts(request[0u].asString());
                }
                inline virtual void admin_eth_newAccountI(const Json::Value &request, Json::Value &response)
                {
                    response = this->admin_eth_newAccount(request[0u], request[1u].asString());
                }
                inline virtual void admin_eth_setMiningBenefactorI(const Json::Value &request, Json::Value &response)
                {
                    response = this->admin_eth_setMiningBenefactor(request[0u].asString(), request[1u].asString());
                }
                inline virtual void admin_eth_inspectI(const Json::Value &request, Json::Value &response)
                {
                    response = this->admin_eth_inspect(request[0u].asString(), request[1u].asString());
                }
                inline virtual void admin_eth_reprocessI(const Json::Value &request, Json::Value &response)
                {
                    response = this->admin_eth_reprocess(request[0u].asString(), request[1u].asString());
                }
                inline virtual void admin_eth_vmTraceI(const Json::Value &request, Json::Value &response)
                {
                    response = this->admin_eth_vmTrace(request[0u].asString(), request[1u].asInt(), request[2u].asString());
                }
                inline virtual void admin_eth_getReceiptByHashAndIndexI(const Json::Value &request, Json::Value &response)
                {
                    response = this->admin_eth_getReceiptByHashAndIndex(request[0u].asString(), request[1u].asInt(), request[2u].asString());
                }
                virtual Json::Value admin_eth_blockQueueStatus(const std::string& param1) = 0;
                virtual bool admin_eth_setAskPrice(const std::string& param1, const std::string& param2) = 0;
                virtual bool admin_eth_setBidPrice(const std::string& param1, const std::string& param2) = 0;
                virtual bool admin_eth_setMining(bool param1, const std::string& param2) = 0;
                virtual Json::Value admin_eth_findBlock(const std::string& param1, const std::string& param2) = 0;
                virtual std::string admin_eth_blockQueueFirstUnknown(const std::string& param1) = 0;
                virtual bool admin_eth_blockQueueRetryUnknown(const std::string& param1) = 0;
                virtual Json::Value admin_eth_allAccounts(const std::string& param1) = 0;
                virtual Json::Value admin_eth_newAccount(const Json::Value& param1, const std::string& param2) = 0;
                virtual bool admin_eth_setMiningBenefactor(const std::string& param1, const std::string& param2) = 0;
                virtual Json::Value admin_eth_inspect(const std::string& param1, const std::string& param2) = 0;
                virtual Json::Value admin_eth_reprocess(const std::string& param1, const std::string& param2) = 0;
                virtual Json::Value admin_eth_vmTrace(const std::string& param1, int param2, const std::string& param3) = 0;
                virtual Json::Value admin_eth_getReceiptByHashAndIndex(const std::string& param1, int param2, const std::string& param3) = 0;
        };

    }
}
#endif //JSONRPC_CPP_STUB_DEV_RPC_ADMINETHFACE_H_