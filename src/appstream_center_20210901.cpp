// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/appstream_center_20210901.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Appstream-center20210901;

Alibabacloud_Appstream-center20210901::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("appstream-center"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Appstream-center20210901::Client::getEndpoint(shared_ptr<string> productId,
                                                                  shared_ptr<string> regionId,
                                                                  shared_ptr<string> endpointRule,
                                                                  shared_ptr<string> network,
                                                                  shared_ptr<string> suffix,
                                                                  shared_ptr<map<string, string>> endpointMap,
                                                                  shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

ApproveOtaTaskResponse Alibabacloud_Appstream-center20210901::Client::approveOtaTaskWithOptions(shared_ptr<ApproveOtaTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    body->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    body->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otaType)) {
    body->insert(pair<string, string>("OtaType", *request->otaType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApproveOtaTask"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApproveOtaTaskResponse(callApi(params, req, runtime));
}

ApproveOtaTaskResponse Alibabacloud_Appstream-center20210901::Client::approveOtaTask(shared_ptr<ApproveOtaTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return approveOtaTaskWithOptions(request, runtime);
}

AuthorizeInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::authorizeInstanceGroupWithOptions(shared_ptr<AuthorizeInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    body->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->authorizeUserIds)) {
    body->insert(pair<string, vector<string>>("AuthorizeUserIds", *request->authorizeUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->unAuthorizeUserIds)) {
    body->insert(pair<string, vector<string>>("UnAuthorizeUserIds", *request->unAuthorizeUserIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AuthorizeInstanceGroup"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AuthorizeInstanceGroupResponse(callApi(params, req, runtime));
}

AuthorizeInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::authorizeInstanceGroup(shared_ptr<AuthorizeInstanceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return authorizeInstanceGroupWithOptions(request, runtime);
}

CancelOtaTaskResponse Alibabacloud_Appstream-center20210901::Client::cancelOtaTaskWithOptions(shared_ptr<CancelOtaTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    body->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelOtaTask"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelOtaTaskResponse(callApi(params, req, runtime));
}

CancelOtaTaskResponse Alibabacloud_Appstream-center20210901::Client::cancelOtaTask(shared_ptr<CancelOtaTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelOtaTaskWithOptions(request, runtime);
}

CreateAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::createAppInstanceGroupWithOptions(shared_ptr<CreateAppInstanceGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateAppInstanceGroupShrinkRequest> request = make_shared<CreateAppInstanceGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateAppInstanceGroupRequestNetwork>(tmpReq->network)) {
    request->networkShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->network, make_shared<string>("Network"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateAppInstanceGroupRequestNodePool>(tmpReq->nodePool)) {
    request->nodePoolShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->nodePool, make_shared<string>("NodePool"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateAppInstanceGroupRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appCenterImageId)) {
    body->insert(pair<string, string>("AppCenterImageId", *request->appCenterImageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupName)) {
    body->insert(pair<string, string>("AppInstanceGroupName", *request->appInstanceGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    body->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    body->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    body->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeResourceMode)) {
    body->insert(pair<string, string>("ChargeResourceMode", *request->chargeResourceMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    body->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkShrink)) {
    body->insert(pair<string, string>("Network", *request->networkShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodePoolShrink)) {
    body->insert(pair<string, string>("NodePool", *request->nodePoolShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    body->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    body->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preOpenAppId)) {
    body->insert(pair<string, string>("PreOpenAppId", *request->preOpenAppId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionId)) {
    body->insert(pair<string, string>("PromotionId", *request->promotionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sessionTimeout)) {
    body->insert(pair<string, long>("SessionTimeout", *request->sessionTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    body->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->users)) {
    body->insert(pair<string, vector<string>>("Users", *request->users));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAppInstanceGroup"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppInstanceGroupResponse(callApi(params, req, runtime));
}

CreateAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::createAppInstanceGroup(shared_ptr<CreateAppInstanceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppInstanceGroupWithOptions(request, runtime);
}

DeleteAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::deleteAppInstanceGroupWithOptions(shared_ptr<DeleteAppInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    body->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAppInstanceGroup"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAppInstanceGroupResponse(callApi(params, req, runtime));
}

DeleteAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::deleteAppInstanceGroup(shared_ptr<DeleteAppInstanceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppInstanceGroupWithOptions(request, runtime);
}

DeleteAppInstancesResponse Alibabacloud_Appstream-center20210901::Client::deleteAppInstancesWithOptions(shared_ptr<DeleteAppInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    body->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->appInstanceIds)) {
    body->insert(pair<string, vector<string>>("AppInstanceIds", *request->appInstanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAppInstances"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAppInstancesResponse(callApi(params, req, runtime));
}

DeleteAppInstancesResponse Alibabacloud_Appstream-center20210901::Client::deleteAppInstances(shared_ptr<DeleteAppInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppInstancesWithOptions(request, runtime);
}

GetAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::getAppInstanceGroupWithOptions(shared_ptr<GetAppInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    query->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAppInstanceGroup"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAppInstanceGroupResponse(callApi(params, req, runtime));
}

GetAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::getAppInstanceGroup(shared_ptr<GetAppInstanceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAppInstanceGroupWithOptions(request, runtime);
}

GetConnectionTicketResponse Alibabacloud_Appstream-center20210901::Client::getConnectionTicketWithOptions(shared_ptr<GetConnectionTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->appInstanceGroupIdList)) {
    body->insert(pair<string, vector<string>>("AppInstanceGroupIdList", *request->appInstanceGroupIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceId)) {
    body->insert(pair<string, string>("AppInstanceId", *request->appInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appStartParam)) {
    body->insert(pair<string, string>("AppStartParam", *request->appStartParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersion)) {
    body->insert(pair<string, string>("AppVersion", *request->appVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    body->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    body->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConnectionTicket"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConnectionTicketResponse(callApi(params, req, runtime));
}

GetConnectionTicketResponse Alibabacloud_Appstream-center20210901::Client::getConnectionTicket(shared_ptr<GetConnectionTicketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConnectionTicketWithOptions(request, runtime);
}

GetOtaTaskByTaskIdResponse Alibabacloud_Appstream-center20210901::Client::getOtaTaskByTaskIdWithOptions(shared_ptr<GetOtaTaskByTaskIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOtaTaskByTaskId"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOtaTaskByTaskIdResponse(callApi(params, req, runtime));
}

GetOtaTaskByTaskIdResponse Alibabacloud_Appstream-center20210901::Client::getOtaTaskByTaskId(shared_ptr<GetOtaTaskByTaskIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOtaTaskByTaskIdWithOptions(request, runtime);
}

GetResourcePriceResponse Alibabacloud_Appstream-center20210901::Client::getResourcePriceWithOptions(shared_ptr<GetResourcePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->amount)) {
    query->insert(pair<string, long>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    query->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeInstanceType)) {
    query->insert(pair<string, string>("NodeInstanceType", *request->nodeInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourcePrice"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourcePriceResponse(callApi(params, req, runtime));
}

GetResourcePriceResponse Alibabacloud_Appstream-center20210901::Client::getResourcePrice(shared_ptr<GetResourcePriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourcePriceWithOptions(request, runtime);
}

GetResourceRenewPriceResponse Alibabacloud_Appstream-center20210901::Client::getResourceRenewPriceWithOptions(shared_ptr<GetResourceRenewPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    query->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceRenewPrice"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceRenewPriceResponse(callApi(params, req, runtime));
}

GetResourceRenewPriceResponse Alibabacloud_Appstream-center20210901::Client::getResourceRenewPrice(shared_ptr<GetResourceRenewPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceRenewPriceWithOptions(request, runtime);
}

ListAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::listAppInstanceGroupWithOptions(shared_ptr<ListAppInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appCenterImageId)) {
    query->insert(pair<string, string>("AppCenterImageId", *request->appCenterImageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    query->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupName)) {
    query->insert(pair<string, string>("AppInstanceGroupName", *request->appInstanceGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeInstanceType)) {
    query->insert(pair<string, string>("NodeInstanceType", *request->nodeInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->status)) {
    body->insert(pair<string, vector<string>>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAppInstanceGroup"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAppInstanceGroupResponse(callApi(params, req, runtime));
}

ListAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::listAppInstanceGroup(shared_ptr<ListAppInstanceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAppInstanceGroupWithOptions(request, runtime);
}

ListNodeInstanceTypeResponse Alibabacloud_Appstream-center20210901::Client::listNodeInstanceTypeWithOptions(shared_ptr<ListNodeInstanceTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    query->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osType)) {
    query->insert(pair<string, string>("OsType", *request->osType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNodeInstanceType"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNodeInstanceTypeResponse(callApi(params, req, runtime));
}

ListNodeInstanceTypeResponse Alibabacloud_Appstream-center20210901::Client::listNodeInstanceType(shared_ptr<ListNodeInstanceTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodeInstanceTypeWithOptions(request, runtime);
}

ListOtaTaskResponse Alibabacloud_Appstream-center20210901::Client::listOtaTaskWithOptions(shared_ptr<ListOtaTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    body->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otaType)) {
    body->insert(pair<string, string>("OtaType", *request->otaType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOtaTask"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOtaTaskResponse(callApi(params, req, runtime));
}

ListOtaTaskResponse Alibabacloud_Appstream-center20210901::Client::listOtaTask(shared_ptr<ListOtaTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOtaTaskWithOptions(request, runtime);
}

ListRegionsResponse Alibabacloud_Appstream-center20210901::Client::listRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRegions"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRegionsResponse(callApi(params, req, runtime));
}

ListRegionsResponse Alibabacloud_Appstream-center20210901::Client::listRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRegionsWithOptions(runtime);
}

ListTenantConfigResponse Alibabacloud_Appstream-center20210901::Client::listTenantConfigWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTenantConfig"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTenantConfigResponse(callApi(params, req, runtime));
}

ListTenantConfigResponse Alibabacloud_Appstream-center20210901::Client::listTenantConfig() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTenantConfigWithOptions(runtime);
}

LogOffAllSessionsInAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::logOffAllSessionsInAppInstanceGroupWithOptions(shared_ptr<LogOffAllSessionsInAppInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    body->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LogOffAllSessionsInAppInstanceGroup"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LogOffAllSessionsInAppInstanceGroupResponse(callApi(params, req, runtime));
}

LogOffAllSessionsInAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::logOffAllSessionsInAppInstanceGroup(shared_ptr<LogOffAllSessionsInAppInstanceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return logOffAllSessionsInAppInstanceGroupWithOptions(request, runtime);
}

ModifyAppInstanceGroupAttributeResponse Alibabacloud_Appstream-center20210901::Client::modifyAppInstanceGroupAttributeWithOptions(shared_ptr<ModifyAppInstanceGroupAttributeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyAppInstanceGroupAttributeShrinkRequest> request = make_shared<ModifyAppInstanceGroupAttributeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ModifyAppInstanceGroupAttributeRequestNodePool>(tmpReq->nodePool)) {
    request->nodePoolShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->nodePool, make_shared<string>("NodePool"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    query->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupName)) {
    query->insert(pair<string, string>("AppInstanceGroupName", *request->appInstanceGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodePoolShrink)) {
    query->insert(pair<string, string>("NodePool", *request->nodePoolShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sessionTimeout)) {
    query->insert(pair<string, long>("SessionTimeout", *request->sessionTimeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAppInstanceGroupAttribute"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAppInstanceGroupAttributeResponse(callApi(params, req, runtime));
}

ModifyAppInstanceGroupAttributeResponse Alibabacloud_Appstream-center20210901::Client::modifyAppInstanceGroupAttribute(shared_ptr<ModifyAppInstanceGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAppInstanceGroupAttributeWithOptions(request, runtime);
}

ModifyNodePoolAttributeResponse Alibabacloud_Appstream-center20210901::Client::modifyNodePoolAttributeWithOptions(shared_ptr<ModifyNodePoolAttributeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyNodePoolAttributeShrinkRequest> request = make_shared<ModifyNodePoolAttributeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ModifyNodePoolAttributeRequestNodePoolStrategy>(tmpReq->nodePoolStrategy)) {
    request->nodePoolStrategyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->nodePoolStrategy, make_shared<string>("NodePoolStrategy"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    body->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeCapacity)) {
    body->insert(pair<string, long>("NodeCapacity", *request->nodeCapacity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodePoolStrategyShrink)) {
    body->insert(pair<string, string>("NodePoolStrategy", *request->nodePoolStrategyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolId)) {
    body->insert(pair<string, string>("PoolId", *request->poolId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyNodePoolAttribute"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyNodePoolAttributeResponse(callApi(params, req, runtime));
}

ModifyNodePoolAttributeResponse Alibabacloud_Appstream-center20210901::Client::modifyNodePoolAttribute(shared_ptr<ModifyNodePoolAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyNodePoolAttributeWithOptions(request, runtime);
}

ModifyTenantConfigResponse Alibabacloud_Appstream-center20210901::Client::modifyTenantConfigWithOptions(shared_ptr<ModifyTenantConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->appInstanceGroupExpireRemind)) {
    body->insert(pair<string, bool>("AppInstanceGroupExpireRemind", *request->appInstanceGroupExpireRemind));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTenantConfig"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyTenantConfigResponse(callApi(params, req, runtime));
}

ModifyTenantConfigResponse Alibabacloud_Appstream-center20210901::Client::modifyTenantConfig(shared_ptr<ModifyTenantConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTenantConfigWithOptions(request, runtime);
}

PageListAppInstanceGroupUserResponse Alibabacloud_Appstream-center20210901::Client::pageListAppInstanceGroupUserWithOptions(shared_ptr<PageListAppInstanceGroupUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    body->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PageListAppInstanceGroupUser"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PageListAppInstanceGroupUserResponse(callApi(params, req, runtime));
}

PageListAppInstanceGroupUserResponse Alibabacloud_Appstream-center20210901::Client::pageListAppInstanceGroupUser(shared_ptr<PageListAppInstanceGroupUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pageListAppInstanceGroupUserWithOptions(request, runtime);
}

RenewAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::renewAppInstanceGroupWithOptions(shared_ptr<RenewAppInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    query->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionId)) {
    query->insert(pair<string, string>("PromotionId", *request->promotionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenewAppInstanceGroup"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenewAppInstanceGroupResponse(callApi(params, req, runtime));
}

RenewAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::renewAppInstanceGroup(shared_ptr<RenewAppInstanceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewAppInstanceGroupWithOptions(request, runtime);
}

UnbindResponse Alibabacloud_Appstream-center20210901::Client::unbindWithOptions(shared_ptr<UnbindRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    body->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceId)) {
    body->insert(pair<string, string>("AppInstanceId", *request->appInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    body->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Unbind"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindResponse(callApi(params, req, runtime));
}

UnbindResponse Alibabacloud_Appstream-center20210901::Client::unbind(shared_ptr<UnbindRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindWithOptions(request, runtime);
}

UpdateAppInstanceGroupImageResponse Alibabacloud_Appstream-center20210901::Client::updateAppInstanceGroupImageWithOptions(shared_ptr<UpdateAppInstanceGroupImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appCenterImageId)) {
    query->insert(pair<string, string>("AppCenterImageId", *request->appCenterImageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    query->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    query->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAppInstanceGroupImage"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAppInstanceGroupImageResponse(callApi(params, req, runtime));
}

UpdateAppInstanceGroupImageResponse Alibabacloud_Appstream-center20210901::Client::updateAppInstanceGroupImage(shared_ptr<UpdateAppInstanceGroupImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAppInstanceGroupImageWithOptions(request, runtime);
}

