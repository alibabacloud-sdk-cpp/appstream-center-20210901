// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_APPSTREAM-CENTER20210901_H_
#define ALIBABACLOUD_APPSTREAM-CENTER20210901_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Appstream-center20210901 {
class ApproveOtaTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> otaType{};
  shared_ptr<string> startTime{};
  shared_ptr<string> taskId{};

  ApproveOtaTaskRequest() {}

  explicit ApproveOtaTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (otaType) {
      res["OtaType"] = boost::any(*otaType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("OtaType") != m.end() && !m["OtaType"].empty()) {
      otaType = make_shared<string>(boost::any_cast<string>(m["OtaType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ApproveOtaTaskRequest() = default;
};
class ApproveOtaTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ApproveOtaTaskResponseBody() {}

  explicit ApproveOtaTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ApproveOtaTaskResponseBody() = default;
};
class ApproveOtaTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApproveOtaTaskResponseBody> body{};

  ApproveOtaTaskResponse() {}

  explicit ApproveOtaTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ApproveOtaTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApproveOtaTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ApproveOtaTaskResponse() = default;
};
class AuthorizeInstanceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<vector<string>> authorizeUserIds{};
  shared_ptr<string> productType{};
  shared_ptr<vector<string>> unAuthorizeUserIds{};

  AuthorizeInstanceGroupRequest() {}

  explicit AuthorizeInstanceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (authorizeUserIds) {
      res["AuthorizeUserIds"] = boost::any(*authorizeUserIds);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (unAuthorizeUserIds) {
      res["UnAuthorizeUserIds"] = boost::any(*unAuthorizeUserIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AuthorizeUserIds") != m.end() && !m["AuthorizeUserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthorizeUserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthorizeUserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorizeUserIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("UnAuthorizeUserIds") != m.end() && !m["UnAuthorizeUserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnAuthorizeUserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnAuthorizeUserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unAuthorizeUserIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AuthorizeInstanceGroupRequest() = default;
};
class AuthorizeInstanceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AuthorizeInstanceGroupResponseBody() {}

  explicit AuthorizeInstanceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AuthorizeInstanceGroupResponseBody() = default;
};
class AuthorizeInstanceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AuthorizeInstanceGroupResponseBody> body{};

  AuthorizeInstanceGroupResponse() {}

  explicit AuthorizeInstanceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AuthorizeInstanceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AuthorizeInstanceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AuthorizeInstanceGroupResponse() = default;
};
class CancelOtaTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> taskId{};

  CancelOtaTaskRequest() {}

  explicit CancelOtaTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CancelOtaTaskRequest() = default;
};
class CancelOtaTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CancelOtaTaskResponseBody() {}

  explicit CancelOtaTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelOtaTaskResponseBody() = default;
};
class CancelOtaTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelOtaTaskResponseBody> body{};

  CancelOtaTaskResponse() {}

  explicit CancelOtaTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelOtaTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelOtaTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CancelOtaTaskResponse() = default;
};
class CreateAppInstanceGroupRequestNodePool : public Darabonba::Model {
public:
  shared_ptr<long> maxScalingAmount{};
  shared_ptr<long> nodeAmount{};
  shared_ptr<long> nodeCapacity{};
  shared_ptr<string> nodeInstanceType{};
  shared_ptr<long> scalingDownAfterIdleMinutes{};
  shared_ptr<long> scalingStep{};
  shared_ptr<string> scalingUsageThreshold{};
  shared_ptr<string> strategyType{};

  CreateAppInstanceGroupRequestNodePool() {}

  explicit CreateAppInstanceGroupRequestNodePool(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxScalingAmount) {
      res["MaxScalingAmount"] = boost::any(*maxScalingAmount);
    }
    if (nodeAmount) {
      res["NodeAmount"] = boost::any(*nodeAmount);
    }
    if (nodeCapacity) {
      res["NodeCapacity"] = boost::any(*nodeCapacity);
    }
    if (nodeInstanceType) {
      res["NodeInstanceType"] = boost::any(*nodeInstanceType);
    }
    if (scalingDownAfterIdleMinutes) {
      res["ScalingDownAfterIdleMinutes"] = boost::any(*scalingDownAfterIdleMinutes);
    }
    if (scalingStep) {
      res["ScalingStep"] = boost::any(*scalingStep);
    }
    if (scalingUsageThreshold) {
      res["ScalingUsageThreshold"] = boost::any(*scalingUsageThreshold);
    }
    if (strategyType) {
      res["StrategyType"] = boost::any(*strategyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxScalingAmount") != m.end() && !m["MaxScalingAmount"].empty()) {
      maxScalingAmount = make_shared<long>(boost::any_cast<long>(m["MaxScalingAmount"]));
    }
    if (m.find("NodeAmount") != m.end() && !m["NodeAmount"].empty()) {
      nodeAmount = make_shared<long>(boost::any_cast<long>(m["NodeAmount"]));
    }
    if (m.find("NodeCapacity") != m.end() && !m["NodeCapacity"].empty()) {
      nodeCapacity = make_shared<long>(boost::any_cast<long>(m["NodeCapacity"]));
    }
    if (m.find("NodeInstanceType") != m.end() && !m["NodeInstanceType"].empty()) {
      nodeInstanceType = make_shared<string>(boost::any_cast<string>(m["NodeInstanceType"]));
    }
    if (m.find("ScalingDownAfterIdleMinutes") != m.end() && !m["ScalingDownAfterIdleMinutes"].empty()) {
      scalingDownAfterIdleMinutes = make_shared<long>(boost::any_cast<long>(m["ScalingDownAfterIdleMinutes"]));
    }
    if (m.find("ScalingStep") != m.end() && !m["ScalingStep"].empty()) {
      scalingStep = make_shared<long>(boost::any_cast<long>(m["ScalingStep"]));
    }
    if (m.find("ScalingUsageThreshold") != m.end() && !m["ScalingUsageThreshold"].empty()) {
      scalingUsageThreshold = make_shared<string>(boost::any_cast<string>(m["ScalingUsageThreshold"]));
    }
    if (m.find("StrategyType") != m.end() && !m["StrategyType"].empty()) {
      strategyType = make_shared<string>(boost::any_cast<string>(m["StrategyType"]));
    }
  }


  virtual ~CreateAppInstanceGroupRequestNodePool() = default;
};
class CreateAppInstanceGroupRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  CreateAppInstanceGroupRequestUserInfo() {}

  explicit CreateAppInstanceGroupRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateAppInstanceGroupRequestUserInfo() = default;
};
class CreateAppInstanceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> appCenterImageId{};
  shared_ptr<string> appInstanceGroupName{};
  shared_ptr<bool> autoPay{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> chargeResourceMode{};
  shared_ptr<string> chargeType{};
  shared_ptr<CreateAppInstanceGroupRequestNodePool> nodePool{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> productType{};
  shared_ptr<string> promotionId{};
  shared_ptr<long> sessionTimeout{};
  shared_ptr<CreateAppInstanceGroupRequestUserInfo> userInfo{};
  shared_ptr<vector<string>> users{};

  CreateAppInstanceGroupRequest() {}

  explicit CreateAppInstanceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCenterImageId) {
      res["AppCenterImageId"] = boost::any(*appCenterImageId);
    }
    if (appInstanceGroupName) {
      res["AppInstanceGroupName"] = boost::any(*appInstanceGroupName);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (chargeResourceMode) {
      res["ChargeResourceMode"] = boost::any(*chargeResourceMode);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (nodePool) {
      res["NodePool"] = nodePool ? boost::any(nodePool->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (promotionId) {
      res["PromotionId"] = boost::any(*promotionId);
    }
    if (sessionTimeout) {
      res["SessionTimeout"] = boost::any(*sessionTimeout);
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (users) {
      res["Users"] = boost::any(*users);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCenterImageId") != m.end() && !m["AppCenterImageId"].empty()) {
      appCenterImageId = make_shared<string>(boost::any_cast<string>(m["AppCenterImageId"]));
    }
    if (m.find("AppInstanceGroupName") != m.end() && !m["AppInstanceGroupName"].empty()) {
      appInstanceGroupName = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupName"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("ChargeResourceMode") != m.end() && !m["ChargeResourceMode"].empty()) {
      chargeResourceMode = make_shared<string>(boost::any_cast<string>(m["ChargeResourceMode"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("NodePool") != m.end() && !m["NodePool"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodePool"].type()) {
        CreateAppInstanceGroupRequestNodePool model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodePool"]));
        nodePool = make_shared<CreateAppInstanceGroupRequestNodePool>(model1);
      }
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("PromotionId") != m.end() && !m["PromotionId"].empty()) {
      promotionId = make_shared<string>(boost::any_cast<string>(m["PromotionId"]));
    }
    if (m.find("SessionTimeout") != m.end() && !m["SessionTimeout"].empty()) {
      sessionTimeout = make_shared<long>(boost::any_cast<long>(m["SessionTimeout"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        CreateAppInstanceGroupRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<CreateAppInstanceGroupRequestUserInfo>(model1);
      }
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Users"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      users = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateAppInstanceGroupRequest() = default;
};
class CreateAppInstanceGroupShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appCenterImageId{};
  shared_ptr<string> appInstanceGroupName{};
  shared_ptr<bool> autoPay{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> chargeResourceMode{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> nodePoolShrink{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> productType{};
  shared_ptr<string> promotionId{};
  shared_ptr<long> sessionTimeout{};
  shared_ptr<string> userInfoShrink{};
  shared_ptr<vector<string>> users{};

  CreateAppInstanceGroupShrinkRequest() {}

  explicit CreateAppInstanceGroupShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCenterImageId) {
      res["AppCenterImageId"] = boost::any(*appCenterImageId);
    }
    if (appInstanceGroupName) {
      res["AppInstanceGroupName"] = boost::any(*appInstanceGroupName);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (chargeResourceMode) {
      res["ChargeResourceMode"] = boost::any(*chargeResourceMode);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (nodePoolShrink) {
      res["NodePool"] = boost::any(*nodePoolShrink);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (promotionId) {
      res["PromotionId"] = boost::any(*promotionId);
    }
    if (sessionTimeout) {
      res["SessionTimeout"] = boost::any(*sessionTimeout);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    if (users) {
      res["Users"] = boost::any(*users);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCenterImageId") != m.end() && !m["AppCenterImageId"].empty()) {
      appCenterImageId = make_shared<string>(boost::any_cast<string>(m["AppCenterImageId"]));
    }
    if (m.find("AppInstanceGroupName") != m.end() && !m["AppInstanceGroupName"].empty()) {
      appInstanceGroupName = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupName"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("ChargeResourceMode") != m.end() && !m["ChargeResourceMode"].empty()) {
      chargeResourceMode = make_shared<string>(boost::any_cast<string>(m["ChargeResourceMode"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("NodePool") != m.end() && !m["NodePool"].empty()) {
      nodePoolShrink = make_shared<string>(boost::any_cast<string>(m["NodePool"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("PromotionId") != m.end() && !m["PromotionId"].empty()) {
      promotionId = make_shared<string>(boost::any_cast<string>(m["PromotionId"]));
    }
    if (m.find("SessionTimeout") != m.end() && !m["SessionTimeout"].empty()) {
      sessionTimeout = make_shared<long>(boost::any_cast<long>(m["SessionTimeout"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Users"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      users = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateAppInstanceGroupShrinkRequest() = default;
};
class CreateAppInstanceGroupResponseBodyAppInstanceGroupModel : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> nodePoolId{};
  shared_ptr<string> orderId{};

  CreateAppInstanceGroupResponseBodyAppInstanceGroupModel() {}

  explicit CreateAppInstanceGroupResponseBodyAppInstanceGroupModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (nodePoolId) {
      res["NodePoolId"] = boost::any(*nodePoolId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("NodePoolId") != m.end() && !m["NodePoolId"].empty()) {
      nodePoolId = make_shared<string>(boost::any_cast<string>(m["NodePoolId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~CreateAppInstanceGroupResponseBodyAppInstanceGroupModel() = default;
};
class CreateAppInstanceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateAppInstanceGroupResponseBodyAppInstanceGroupModel> appInstanceGroupModel{};
  shared_ptr<string> requestId{};

  CreateAppInstanceGroupResponseBody() {}

  explicit CreateAppInstanceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupModel) {
      res["AppInstanceGroupModel"] = appInstanceGroupModel ? boost::any(appInstanceGroupModel->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupModel") != m.end() && !m["AppInstanceGroupModel"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppInstanceGroupModel"].type()) {
        CreateAppInstanceGroupResponseBodyAppInstanceGroupModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppInstanceGroupModel"]));
        appInstanceGroupModel = make_shared<CreateAppInstanceGroupResponseBodyAppInstanceGroupModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAppInstanceGroupResponseBody() = default;
};
class CreateAppInstanceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppInstanceGroupResponseBody> body{};

  CreateAppInstanceGroupResponse() {}

  explicit CreateAppInstanceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAppInstanceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppInstanceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppInstanceGroupResponse() = default;
};
class GetOtaTaskByTaskIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetOtaTaskByTaskIdRequest() {}

  explicit GetOtaTaskByTaskIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetOtaTaskByTaskIdRequest() = default;
};
class GetOtaTaskByTaskIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> otaVersion{};
  shared_ptr<string> releaseNote{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskStartTime{};

  GetOtaTaskByTaskIdResponseBody() {}

  explicit GetOtaTaskByTaskIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (otaVersion) {
      res["OtaVersion"] = boost::any(*otaVersion);
    }
    if (releaseNote) {
      res["ReleaseNote"] = boost::any(*releaseNote);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskStartTime) {
      res["TaskStartTime"] = boost::any(*taskStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OtaVersion") != m.end() && !m["OtaVersion"].empty()) {
      otaVersion = make_shared<string>(boost::any_cast<string>(m["OtaVersion"]));
    }
    if (m.find("ReleaseNote") != m.end() && !m["ReleaseNote"].empty()) {
      releaseNote = make_shared<string>(boost::any_cast<string>(m["ReleaseNote"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskStartTime") != m.end() && !m["TaskStartTime"].empty()) {
      taskStartTime = make_shared<string>(boost::any_cast<string>(m["TaskStartTime"]));
    }
  }


  virtual ~GetOtaTaskByTaskIdResponseBody() = default;
};
class GetOtaTaskByTaskIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOtaTaskByTaskIdResponseBody> body{};

  GetOtaTaskByTaskIdResponse() {}

  explicit GetOtaTaskByTaskIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetOtaTaskByTaskIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOtaTaskByTaskIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetOtaTaskByTaskIdResponse() = default;
};
class GetResourcePriceRequest : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> nodeInstanceType{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> productType{};

  GetResourcePriceRequest() {}

  explicit GetResourcePriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (nodeInstanceType) {
      res["NodeInstanceType"] = boost::any(*nodeInstanceType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("NodeInstanceType") != m.end() && !m["NodeInstanceType"].empty()) {
      nodeInstanceType = make_shared<string>(boost::any_cast<string>(m["NodeInstanceType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~GetResourcePriceRequest() = default;
};
class GetResourcePriceResponseBodyPriceModelPricePromotions : public Darabonba::Model {
public:
  shared_ptr<string> optionCode{};
  shared_ptr<string> promotionDesc{};
  shared_ptr<string> promotionId{};
  shared_ptr<string> promotionName{};
  shared_ptr<bool> selected{};

  GetResourcePriceResponseBodyPriceModelPricePromotions() {}

  explicit GetResourcePriceResponseBodyPriceModelPricePromotions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (optionCode) {
      res["OptionCode"] = boost::any(*optionCode);
    }
    if (promotionDesc) {
      res["PromotionDesc"] = boost::any(*promotionDesc);
    }
    if (promotionId) {
      res["PromotionId"] = boost::any(*promotionId);
    }
    if (promotionName) {
      res["PromotionName"] = boost::any(*promotionName);
    }
    if (selected) {
      res["Selected"] = boost::any(*selected);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OptionCode") != m.end() && !m["OptionCode"].empty()) {
      optionCode = make_shared<string>(boost::any_cast<string>(m["OptionCode"]));
    }
    if (m.find("PromotionDesc") != m.end() && !m["PromotionDesc"].empty()) {
      promotionDesc = make_shared<string>(boost::any_cast<string>(m["PromotionDesc"]));
    }
    if (m.find("PromotionId") != m.end() && !m["PromotionId"].empty()) {
      promotionId = make_shared<string>(boost::any_cast<string>(m["PromotionId"]));
    }
    if (m.find("PromotionName") != m.end() && !m["PromotionName"].empty()) {
      promotionName = make_shared<string>(boost::any_cast<string>(m["PromotionName"]));
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      selected = make_shared<bool>(boost::any_cast<bool>(m["Selected"]));
    }
  }


  virtual ~GetResourcePriceResponseBodyPriceModelPricePromotions() = default;
};
class GetResourcePriceResponseBodyPriceModelPrice : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<string> discountPrice{};
  shared_ptr<string> originalPrice{};
  shared_ptr<vector<GetResourcePriceResponseBodyPriceModelPricePromotions>> promotions{};
  shared_ptr<string> tradePrice{};

  GetResourcePriceResponseBodyPriceModelPrice() {}

  explicit GetResourcePriceResponseBodyPriceModelPrice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (promotions) {
      vector<boost::any> temp1;
      for(auto item1:*promotions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Promotions"] = boost::any(temp1);
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<string>(boost::any_cast<string>(m["DiscountPrice"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<string>(boost::any_cast<string>(m["OriginalPrice"]));
    }
    if (m.find("Promotions") != m.end() && !m["Promotions"].empty()) {
      if (typeid(vector<boost::any>) == m["Promotions"].type()) {
        vector<GetResourcePriceResponseBodyPriceModelPricePromotions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Promotions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourcePriceResponseBodyPriceModelPricePromotions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        promotions = make_shared<vector<GetResourcePriceResponseBodyPriceModelPricePromotions>>(expect1);
      }
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<string>(boost::any_cast<string>(m["TradePrice"]));
    }
  }


  virtual ~GetResourcePriceResponseBodyPriceModelPrice() = default;
};
class GetResourcePriceResponseBodyPriceModelRules : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> ruleId{};

  GetResourcePriceResponseBodyPriceModelRules() {}

  explicit GetResourcePriceResponseBodyPriceModelRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~GetResourcePriceResponseBodyPriceModelRules() = default;
};
class GetResourcePriceResponseBodyPriceModel : public Darabonba::Model {
public:
  shared_ptr<GetResourcePriceResponseBodyPriceModelPrice> price{};
  shared_ptr<vector<GetResourcePriceResponseBodyPriceModelRules>> rules{};

  GetResourcePriceResponseBodyPriceModel() {}

  explicit GetResourcePriceResponseBodyPriceModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (price) {
      res["Price"] = price ? boost::any(price->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      if (typeid(map<string, boost::any>) == m["Price"].type()) {
        GetResourcePriceResponseBodyPriceModelPrice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Price"]));
        price = make_shared<GetResourcePriceResponseBodyPriceModelPrice>(model1);
      }
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<GetResourcePriceResponseBodyPriceModelRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourcePriceResponseBodyPriceModelRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<GetResourcePriceResponseBodyPriceModelRules>>(expect1);
      }
    }
  }


  virtual ~GetResourcePriceResponseBodyPriceModel() = default;
};
class GetResourcePriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<GetResourcePriceResponseBodyPriceModel> priceModel{};
  shared_ptr<string> requestId{};

  GetResourcePriceResponseBody() {}

  explicit GetResourcePriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (priceModel) {
      res["PriceModel"] = priceModel ? boost::any(priceModel->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PriceModel") != m.end() && !m["PriceModel"].empty()) {
      if (typeid(map<string, boost::any>) == m["PriceModel"].type()) {
        GetResourcePriceResponseBodyPriceModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PriceModel"]));
        priceModel = make_shared<GetResourcePriceResponseBodyPriceModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetResourcePriceResponseBody() = default;
};
class GetResourcePriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourcePriceResponseBody> body{};

  GetResourcePriceResponse() {}

  explicit GetResourcePriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetResourcePriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourcePriceResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourcePriceResponse() = default;
};
class ListAppInstanceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> appCenterImageId{};
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceGroupName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productType{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> status{};

  ListAppInstanceGroupRequest() {}

  explicit ListAppInstanceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCenterImageId) {
      res["AppCenterImageId"] = boost::any(*appCenterImageId);
    }
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceGroupName) {
      res["AppInstanceGroupName"] = boost::any(*appInstanceGroupName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCenterImageId") != m.end() && !m["AppCenterImageId"].empty()) {
      appCenterImageId = make_shared<string>(boost::any_cast<string>(m["AppCenterImageId"]));
    }
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceGroupName") != m.end() && !m["AppInstanceGroupName"].empty()) {
      appInstanceGroupName = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Status"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Status"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      status = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListAppInstanceGroupRequest() = default;
};
class ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};

  ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps() {}

  explicit ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
  }


  virtual ~ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps() = default;
};
class ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};

  ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods() {}

  explicit ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods() = default;
};
class ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules : public Darabonba::Model {
public:
  shared_ptr<string> recurrenceType{};
  shared_ptr<vector<long>> recurrenceValues{};
  shared_ptr<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods>> timerPeriods{};

  ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules() {}

  explicit ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recurrenceType) {
      res["RecurrenceType"] = boost::any(*recurrenceType);
    }
    if (recurrenceValues) {
      res["RecurrenceValues"] = boost::any(*recurrenceValues);
    }
    if (timerPeriods) {
      vector<boost::any> temp1;
      for(auto item1:*timerPeriods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimerPeriods"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecurrenceType") != m.end() && !m["RecurrenceType"].empty()) {
      recurrenceType = make_shared<string>(boost::any_cast<string>(m["RecurrenceType"]));
    }
    if (m.find("RecurrenceValues") != m.end() && !m["RecurrenceValues"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RecurrenceValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RecurrenceValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      recurrenceValues = make_shared<vector<long>>(toVec1);
    }
    if (m.find("TimerPeriods") != m.end() && !m["TimerPeriods"].empty()) {
      if (typeid(vector<boost::any>) == m["TimerPeriods"].type()) {
        vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimerPeriods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timerPeriods = make_shared<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods>>(expect1);
      }
    }
  }


  virtual ~ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules() = default;
};
class ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<long> maxScalingAmount{};
  shared_ptr<long> nodeAmount{};
  shared_ptr<long> nodeCapacity{};
  shared_ptr<string> nodeInstanceType{};
  shared_ptr<string> nodePoolId{};
  shared_ptr<long> nodeUsed{};
  shared_ptr<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules>> recurrenceSchedules{};
  shared_ptr<long> scalingDownAfterIdleMinutes{};
  shared_ptr<long> scalingNodeAmount{};
  shared_ptr<long> scalingNodeUsed{};
  shared_ptr<long> scalingStep{};
  shared_ptr<string> scalingUsageThreshold{};
  shared_ptr<string> strategyDisableDate{};
  shared_ptr<string> strategyEnableDate{};
  shared_ptr<string> strategyType{};
  shared_ptr<bool> warmUp{};

  ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool() {}

  explicit ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (maxScalingAmount) {
      res["MaxScalingAmount"] = boost::any(*maxScalingAmount);
    }
    if (nodeAmount) {
      res["NodeAmount"] = boost::any(*nodeAmount);
    }
    if (nodeCapacity) {
      res["NodeCapacity"] = boost::any(*nodeCapacity);
    }
    if (nodeInstanceType) {
      res["NodeInstanceType"] = boost::any(*nodeInstanceType);
    }
    if (nodePoolId) {
      res["NodePoolId"] = boost::any(*nodePoolId);
    }
    if (nodeUsed) {
      res["NodeUsed"] = boost::any(*nodeUsed);
    }
    if (recurrenceSchedules) {
      vector<boost::any> temp1;
      for(auto item1:*recurrenceSchedules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RecurrenceSchedules"] = boost::any(temp1);
    }
    if (scalingDownAfterIdleMinutes) {
      res["ScalingDownAfterIdleMinutes"] = boost::any(*scalingDownAfterIdleMinutes);
    }
    if (scalingNodeAmount) {
      res["ScalingNodeAmount"] = boost::any(*scalingNodeAmount);
    }
    if (scalingNodeUsed) {
      res["ScalingNodeUsed"] = boost::any(*scalingNodeUsed);
    }
    if (scalingStep) {
      res["ScalingStep"] = boost::any(*scalingStep);
    }
    if (scalingUsageThreshold) {
      res["ScalingUsageThreshold"] = boost::any(*scalingUsageThreshold);
    }
    if (strategyDisableDate) {
      res["StrategyDisableDate"] = boost::any(*strategyDisableDate);
    }
    if (strategyEnableDate) {
      res["StrategyEnableDate"] = boost::any(*strategyEnableDate);
    }
    if (strategyType) {
      res["StrategyType"] = boost::any(*strategyType);
    }
    if (warmUp) {
      res["WarmUp"] = boost::any(*warmUp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("MaxScalingAmount") != m.end() && !m["MaxScalingAmount"].empty()) {
      maxScalingAmount = make_shared<long>(boost::any_cast<long>(m["MaxScalingAmount"]));
    }
    if (m.find("NodeAmount") != m.end() && !m["NodeAmount"].empty()) {
      nodeAmount = make_shared<long>(boost::any_cast<long>(m["NodeAmount"]));
    }
    if (m.find("NodeCapacity") != m.end() && !m["NodeCapacity"].empty()) {
      nodeCapacity = make_shared<long>(boost::any_cast<long>(m["NodeCapacity"]));
    }
    if (m.find("NodeInstanceType") != m.end() && !m["NodeInstanceType"].empty()) {
      nodeInstanceType = make_shared<string>(boost::any_cast<string>(m["NodeInstanceType"]));
    }
    if (m.find("NodePoolId") != m.end() && !m["NodePoolId"].empty()) {
      nodePoolId = make_shared<string>(boost::any_cast<string>(m["NodePoolId"]));
    }
    if (m.find("NodeUsed") != m.end() && !m["NodeUsed"].empty()) {
      nodeUsed = make_shared<long>(boost::any_cast<long>(m["NodeUsed"]));
    }
    if (m.find("RecurrenceSchedules") != m.end() && !m["RecurrenceSchedules"].empty()) {
      if (typeid(vector<boost::any>) == m["RecurrenceSchedules"].type()) {
        vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RecurrenceSchedules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        recurrenceSchedules = make_shared<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules>>(expect1);
      }
    }
    if (m.find("ScalingDownAfterIdleMinutes") != m.end() && !m["ScalingDownAfterIdleMinutes"].empty()) {
      scalingDownAfterIdleMinutes = make_shared<long>(boost::any_cast<long>(m["ScalingDownAfterIdleMinutes"]));
    }
    if (m.find("ScalingNodeAmount") != m.end() && !m["ScalingNodeAmount"].empty()) {
      scalingNodeAmount = make_shared<long>(boost::any_cast<long>(m["ScalingNodeAmount"]));
    }
    if (m.find("ScalingNodeUsed") != m.end() && !m["ScalingNodeUsed"].empty()) {
      scalingNodeUsed = make_shared<long>(boost::any_cast<long>(m["ScalingNodeUsed"]));
    }
    if (m.find("ScalingStep") != m.end() && !m["ScalingStep"].empty()) {
      scalingStep = make_shared<long>(boost::any_cast<long>(m["ScalingStep"]));
    }
    if (m.find("ScalingUsageThreshold") != m.end() && !m["ScalingUsageThreshold"].empty()) {
      scalingUsageThreshold = make_shared<string>(boost::any_cast<string>(m["ScalingUsageThreshold"]));
    }
    if (m.find("StrategyDisableDate") != m.end() && !m["StrategyDisableDate"].empty()) {
      strategyDisableDate = make_shared<string>(boost::any_cast<string>(m["StrategyDisableDate"]));
    }
    if (m.find("StrategyEnableDate") != m.end() && !m["StrategyEnableDate"].empty()) {
      strategyEnableDate = make_shared<string>(boost::any_cast<string>(m["StrategyEnableDate"]));
    }
    if (m.find("StrategyType") != m.end() && !m["StrategyType"].empty()) {
      strategyType = make_shared<string>(boost::any_cast<string>(m["StrategyType"]));
    }
    if (m.find("WarmUp") != m.end() && !m["WarmUp"].empty()) {
      warmUp = make_shared<bool>(boost::any_cast<bool>(m["WarmUp"]));
    }
  }


  virtual ~ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool() = default;
};
class ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo : public Darabonba::Model {
public:
  shared_ptr<string> newOtaVersion{};
  shared_ptr<string> otaVersion{};
  shared_ptr<string> taskId{};

  ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo() {}

  explicit ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newOtaVersion) {
      res["NewOtaVersion"] = boost::any(*newOtaVersion);
    }
    if (otaVersion) {
      res["OtaVersion"] = boost::any(*otaVersion);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewOtaVersion") != m.end() && !m["NewOtaVersion"].empty()) {
      newOtaVersion = make_shared<string>(boost::any_cast<string>(m["NewOtaVersion"]));
    }
    if (m.find("OtaVersion") != m.end() && !m["OtaVersion"].empty()) {
      otaVersion = make_shared<string>(boost::any_cast<string>(m["OtaVersion"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo() = default;
};
class ListAppInstanceGroupResponseBodyAppInstanceGroupModels : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<string> appCenterImageId{};
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceGroupName{};
  shared_ptr<string> appInstanceType{};
  shared_ptr<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps>> apps{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool>> nodePool{};
  shared_ptr<string> osType{};
  shared_ptr<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo> otaInfo{};
  shared_ptr<string> productType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionTimeout{};
  shared_ptr<string> specId{};
  shared_ptr<string> status{};

  ListAppInstanceGroupResponseBodyAppInstanceGroupModels() {}

  explicit ListAppInstanceGroupResponseBodyAppInstanceGroupModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (appCenterImageId) {
      res["AppCenterImageId"] = boost::any(*appCenterImageId);
    }
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceGroupName) {
      res["AppInstanceGroupName"] = boost::any(*appInstanceGroupName);
    }
    if (appInstanceType) {
      res["AppInstanceType"] = boost::any(*appInstanceType);
    }
    if (apps) {
      vector<boost::any> temp1;
      for(auto item1:*apps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Apps"] = boost::any(temp1);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (nodePool) {
      vector<boost::any> temp1;
      for(auto item1:*nodePool){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodePool"] = boost::any(temp1);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (otaInfo) {
      res["OtaInfo"] = otaInfo ? boost::any(otaInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sessionTimeout) {
      res["SessionTimeout"] = boost::any(*sessionTimeout);
    }
    if (specId) {
      res["SpecId"] = boost::any(*specId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("AppCenterImageId") != m.end() && !m["AppCenterImageId"].empty()) {
      appCenterImageId = make_shared<string>(boost::any_cast<string>(m["AppCenterImageId"]));
    }
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceGroupName") != m.end() && !m["AppInstanceGroupName"].empty()) {
      appInstanceGroupName = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupName"]));
    }
    if (m.find("AppInstanceType") != m.end() && !m["AppInstanceType"].empty()) {
      appInstanceType = make_shared<string>(boost::any_cast<string>(m["AppInstanceType"]));
    }
    if (m.find("Apps") != m.end() && !m["Apps"].empty()) {
      if (typeid(vector<boost::any>) == m["Apps"].type()) {
        vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Apps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apps = make_shared<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps>>(expect1);
      }
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("NodePool") != m.end() && !m["NodePool"].empty()) {
      if (typeid(vector<boost::any>) == m["NodePool"].type()) {
        vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodePool"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodePool = make_shared<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool>>(expect1);
      }
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("OtaInfo") != m.end() && !m["OtaInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["OtaInfo"].type()) {
        ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OtaInfo"]));
        otaInfo = make_shared<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo>(model1);
      }
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionTimeout") != m.end() && !m["SessionTimeout"].empty()) {
      sessionTimeout = make_shared<string>(boost::any_cast<string>(m["SessionTimeout"]));
    }
    if (m.find("SpecId") != m.end() && !m["SpecId"].empty()) {
      specId = make_shared<string>(boost::any_cast<string>(m["SpecId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListAppInstanceGroupResponseBodyAppInstanceGroupModels() = default;
};
class ListAppInstanceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModels>> appInstanceGroupModels{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAppInstanceGroupResponseBody() {}

  explicit ListAppInstanceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupModels) {
      vector<boost::any> temp1;
      for(auto item1:*appInstanceGroupModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppInstanceGroupModels"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupModels") != m.end() && !m["AppInstanceGroupModels"].empty()) {
      if (typeid(vector<boost::any>) == m["AppInstanceGroupModels"].type()) {
        vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppInstanceGroupModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppInstanceGroupResponseBodyAppInstanceGroupModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appInstanceGroupModels = make_shared<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModels>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAppInstanceGroupResponseBody() = default;
};
class ListAppInstanceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAppInstanceGroupResponseBody> body{};

  ListAppInstanceGroupResponse() {}

  explicit ListAppInstanceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAppInstanceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppInstanceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppInstanceGroupResponse() = default;
};
class ListNodeInstanceTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> language{};
  shared_ptr<string> osType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productType{};

  ListNodeInstanceTypeRequest() {}

  explicit ListNodeInstanceTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~ListNodeInstanceTypeRequest() = default;
};
class ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels : public Darabonba::Model {
public:
  shared_ptr<string> cpu{};
  shared_ptr<string> gpu{};
  shared_ptr<long> gpuMemory{};
  shared_ptr<long> maxCapacity{};
  shared_ptr<long> memory{};
  shared_ptr<string> nodeInstanceType{};
  shared_ptr<string> nodeInstanceTypeFamily{};
  shared_ptr<string> nodeTypeName{};

  ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels() {}

  explicit ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (gpuMemory) {
      res["GpuMemory"] = boost::any(*gpuMemory);
    }
    if (maxCapacity) {
      res["MaxCapacity"] = boost::any(*maxCapacity);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (nodeInstanceType) {
      res["NodeInstanceType"] = boost::any(*nodeInstanceType);
    }
    if (nodeInstanceTypeFamily) {
      res["NodeInstanceTypeFamily"] = boost::any(*nodeInstanceTypeFamily);
    }
    if (nodeTypeName) {
      res["NodeTypeName"] = boost::any(*nodeTypeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<string>(boost::any_cast<string>(m["Cpu"]));
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<string>(boost::any_cast<string>(m["Gpu"]));
    }
    if (m.find("GpuMemory") != m.end() && !m["GpuMemory"].empty()) {
      gpuMemory = make_shared<long>(boost::any_cast<long>(m["GpuMemory"]));
    }
    if (m.find("MaxCapacity") != m.end() && !m["MaxCapacity"].empty()) {
      maxCapacity = make_shared<long>(boost::any_cast<long>(m["MaxCapacity"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("NodeInstanceType") != m.end() && !m["NodeInstanceType"].empty()) {
      nodeInstanceType = make_shared<string>(boost::any_cast<string>(m["NodeInstanceType"]));
    }
    if (m.find("NodeInstanceTypeFamily") != m.end() && !m["NodeInstanceTypeFamily"].empty()) {
      nodeInstanceTypeFamily = make_shared<string>(boost::any_cast<string>(m["NodeInstanceTypeFamily"]));
    }
    if (m.find("NodeTypeName") != m.end() && !m["NodeTypeName"].empty()) {
      nodeTypeName = make_shared<string>(boost::any_cast<string>(m["NodeTypeName"]));
    }
  }


  virtual ~ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels() = default;
};
class ListNodeInstanceTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels>> nodeInstanceTypeModels{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListNodeInstanceTypeResponseBody() {}

  explicit ListNodeInstanceTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeInstanceTypeModels) {
      vector<boost::any> temp1;
      for(auto item1:*nodeInstanceTypeModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeInstanceTypeModels"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeInstanceTypeModels") != m.end() && !m["NodeInstanceTypeModels"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeInstanceTypeModels"].type()) {
        vector<ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeInstanceTypeModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeInstanceTypeModels = make_shared<vector<ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListNodeInstanceTypeResponseBody() = default;
};
class ListNodeInstanceTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNodeInstanceTypeResponseBody> body{};

  ListNodeInstanceTypeResponse() {}

  explicit ListNodeInstanceTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListNodeInstanceTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNodeInstanceTypeResponseBody>(model1);
      }
    }
  }


  virtual ~ListNodeInstanceTypeResponse() = default;
};
class ListOtaTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> otaType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListOtaTaskRequest() {}

  explicit ListOtaTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (otaType) {
      res["OtaType"] = boost::any(*otaType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("OtaType") != m.end() && !m["OtaType"].empty()) {
      otaType = make_shared<string>(boost::any_cast<string>(m["OtaType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListOtaTaskRequest() = default;
};
class ListOtaTaskResponseBodyTaskList : public Darabonba::Model {
public:
  shared_ptr<string> otaVersion{};
  shared_ptr<string> taskDisplayStatus{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskStartTime{};

  ListOtaTaskResponseBodyTaskList() {}

  explicit ListOtaTaskResponseBodyTaskList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (otaVersion) {
      res["OtaVersion"] = boost::any(*otaVersion);
    }
    if (taskDisplayStatus) {
      res["TaskDisplayStatus"] = boost::any(*taskDisplayStatus);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStartTime) {
      res["TaskStartTime"] = boost::any(*taskStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OtaVersion") != m.end() && !m["OtaVersion"].empty()) {
      otaVersion = make_shared<string>(boost::any_cast<string>(m["OtaVersion"]));
    }
    if (m.find("TaskDisplayStatus") != m.end() && !m["TaskDisplayStatus"].empty()) {
      taskDisplayStatus = make_shared<string>(boost::any_cast<string>(m["TaskDisplayStatus"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskStartTime") != m.end() && !m["TaskStartTime"].empty()) {
      taskStartTime = make_shared<string>(boost::any_cast<string>(m["TaskStartTime"]));
    }
  }


  virtual ~ListOtaTaskResponseBodyTaskList() = default;
};
class ListOtaTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListOtaTaskResponseBodyTaskList>> taskList{};
  shared_ptr<long> totalCount{};

  ListOtaTaskResponseBody() {}

  explicit ListOtaTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskList) {
      vector<boost::any> temp1;
      for(auto item1:*taskList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskList") != m.end() && !m["TaskList"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskList"].type()) {
        vector<ListOtaTaskResponseBodyTaskList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOtaTaskResponseBodyTaskList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskList = make_shared<vector<ListOtaTaskResponseBodyTaskList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListOtaTaskResponseBody() = default;
};
class ListOtaTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOtaTaskResponseBody> body{};

  ListOtaTaskResponse() {}

  explicit ListOtaTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListOtaTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOtaTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ListOtaTaskResponse() = default;
};
class ListRegionsResponseBodyRegionModels : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ListRegionsResponseBodyRegionModels() {}

  explicit ListRegionsResponseBodyRegionModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~ListRegionsResponseBodyRegionModels() = default;
};
class ListRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListRegionsResponseBodyRegionModels>> regionModels{};
  shared_ptr<string> requestId{};

  ListRegionsResponseBody() {}

  explicit ListRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionModels) {
      vector<boost::any> temp1;
      for(auto item1:*regionModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionModels"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionModels") != m.end() && !m["RegionModels"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionModels"].type()) {
        vector<ListRegionsResponseBodyRegionModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRegionsResponseBodyRegionModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionModels = make_shared<vector<ListRegionsResponseBodyRegionModels>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListRegionsResponseBody() = default;
};
class ListRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRegionsResponseBody> body{};

  ListRegionsResponse() {}

  explicit ListRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRegionsResponse() = default;
};
class ModifyAppInstanceGroupAttributeRequestNodePool : public Darabonba::Model {
public:
  shared_ptr<long> nodeCapacity{};
  shared_ptr<string> nodePoolId{};

  ModifyAppInstanceGroupAttributeRequestNodePool() {}

  explicit ModifyAppInstanceGroupAttributeRequestNodePool(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeCapacity) {
      res["NodeCapacity"] = boost::any(*nodeCapacity);
    }
    if (nodePoolId) {
      res["NodePoolId"] = boost::any(*nodePoolId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeCapacity") != m.end() && !m["NodeCapacity"].empty()) {
      nodeCapacity = make_shared<long>(boost::any_cast<long>(m["NodeCapacity"]));
    }
    if (m.find("NodePoolId") != m.end() && !m["NodePoolId"].empty()) {
      nodePoolId = make_shared<string>(boost::any_cast<string>(m["NodePoolId"]));
    }
  }


  virtual ~ModifyAppInstanceGroupAttributeRequestNodePool() = default;
};
class ModifyAppInstanceGroupAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceGroupName{};
  shared_ptr<ModifyAppInstanceGroupAttributeRequestNodePool> nodePool{};
  shared_ptr<string> productType{};
  shared_ptr<long> sessionTimeout{};

  ModifyAppInstanceGroupAttributeRequest() {}

  explicit ModifyAppInstanceGroupAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceGroupName) {
      res["AppInstanceGroupName"] = boost::any(*appInstanceGroupName);
    }
    if (nodePool) {
      res["NodePool"] = nodePool ? boost::any(nodePool->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (sessionTimeout) {
      res["SessionTimeout"] = boost::any(*sessionTimeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceGroupName") != m.end() && !m["AppInstanceGroupName"].empty()) {
      appInstanceGroupName = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupName"]));
    }
    if (m.find("NodePool") != m.end() && !m["NodePool"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodePool"].type()) {
        ModifyAppInstanceGroupAttributeRequestNodePool model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodePool"]));
        nodePool = make_shared<ModifyAppInstanceGroupAttributeRequestNodePool>(model1);
      }
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SessionTimeout") != m.end() && !m["SessionTimeout"].empty()) {
      sessionTimeout = make_shared<long>(boost::any_cast<long>(m["SessionTimeout"]));
    }
  }


  virtual ~ModifyAppInstanceGroupAttributeRequest() = default;
};
class ModifyAppInstanceGroupAttributeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceGroupName{};
  shared_ptr<string> nodePoolShrink{};
  shared_ptr<string> productType{};
  shared_ptr<long> sessionTimeout{};

  ModifyAppInstanceGroupAttributeShrinkRequest() {}

  explicit ModifyAppInstanceGroupAttributeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceGroupName) {
      res["AppInstanceGroupName"] = boost::any(*appInstanceGroupName);
    }
    if (nodePoolShrink) {
      res["NodePool"] = boost::any(*nodePoolShrink);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (sessionTimeout) {
      res["SessionTimeout"] = boost::any(*sessionTimeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceGroupName") != m.end() && !m["AppInstanceGroupName"].empty()) {
      appInstanceGroupName = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupName"]));
    }
    if (m.find("NodePool") != m.end() && !m["NodePool"].empty()) {
      nodePoolShrink = make_shared<string>(boost::any_cast<string>(m["NodePool"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SessionTimeout") != m.end() && !m["SessionTimeout"].empty()) {
      sessionTimeout = make_shared<long>(boost::any_cast<long>(m["SessionTimeout"]));
    }
  }


  virtual ~ModifyAppInstanceGroupAttributeShrinkRequest() = default;
};
class ModifyAppInstanceGroupAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ModifyAppInstanceGroupAttributeResponseBody() {}

  explicit ModifyAppInstanceGroupAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyAppInstanceGroupAttributeResponseBody() = default;
};
class ModifyAppInstanceGroupAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAppInstanceGroupAttributeResponseBody> body{};

  ModifyAppInstanceGroupAttributeResponse() {}

  explicit ModifyAppInstanceGroupAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAppInstanceGroupAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAppInstanceGroupAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAppInstanceGroupAttributeResponse() = default;
};
class ModifyNodePoolAttributeRequestNodePoolStrategy : public Darabonba::Model {
public:
  shared_ptr<long> maxScalingAmount{};
  shared_ptr<long> scalingDownAfterIdleMinutes{};
  shared_ptr<long> scalingStep{};
  shared_ptr<string> scalingUsageThreshold{};
  shared_ptr<string> strategyType{};

  ModifyNodePoolAttributeRequestNodePoolStrategy() {}

  explicit ModifyNodePoolAttributeRequestNodePoolStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxScalingAmount) {
      res["MaxScalingAmount"] = boost::any(*maxScalingAmount);
    }
    if (scalingDownAfterIdleMinutes) {
      res["ScalingDownAfterIdleMinutes"] = boost::any(*scalingDownAfterIdleMinutes);
    }
    if (scalingStep) {
      res["ScalingStep"] = boost::any(*scalingStep);
    }
    if (scalingUsageThreshold) {
      res["ScalingUsageThreshold"] = boost::any(*scalingUsageThreshold);
    }
    if (strategyType) {
      res["StrategyType"] = boost::any(*strategyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxScalingAmount") != m.end() && !m["MaxScalingAmount"].empty()) {
      maxScalingAmount = make_shared<long>(boost::any_cast<long>(m["MaxScalingAmount"]));
    }
    if (m.find("ScalingDownAfterIdleMinutes") != m.end() && !m["ScalingDownAfterIdleMinutes"].empty()) {
      scalingDownAfterIdleMinutes = make_shared<long>(boost::any_cast<long>(m["ScalingDownAfterIdleMinutes"]));
    }
    if (m.find("ScalingStep") != m.end() && !m["ScalingStep"].empty()) {
      scalingStep = make_shared<long>(boost::any_cast<long>(m["ScalingStep"]));
    }
    if (m.find("ScalingUsageThreshold") != m.end() && !m["ScalingUsageThreshold"].empty()) {
      scalingUsageThreshold = make_shared<string>(boost::any_cast<string>(m["ScalingUsageThreshold"]));
    }
    if (m.find("StrategyType") != m.end() && !m["StrategyType"].empty()) {
      strategyType = make_shared<string>(boost::any_cast<string>(m["StrategyType"]));
    }
  }


  virtual ~ModifyNodePoolAttributeRequestNodePoolStrategy() = default;
};
class ModifyNodePoolAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizRegionId{};
  shared_ptr<long> nodeCapacity{};
  shared_ptr<ModifyNodePoolAttributeRequestNodePoolStrategy> nodePoolStrategy{};
  shared_ptr<string> poolId{};
  shared_ptr<string> productType{};

  ModifyNodePoolAttributeRequest() {}

  explicit ModifyNodePoolAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (nodeCapacity) {
      res["NodeCapacity"] = boost::any(*nodeCapacity);
    }
    if (nodePoolStrategy) {
      res["NodePoolStrategy"] = nodePoolStrategy ? boost::any(nodePoolStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (poolId) {
      res["PoolId"] = boost::any(*poolId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("NodeCapacity") != m.end() && !m["NodeCapacity"].empty()) {
      nodeCapacity = make_shared<long>(boost::any_cast<long>(m["NodeCapacity"]));
    }
    if (m.find("NodePoolStrategy") != m.end() && !m["NodePoolStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodePoolStrategy"].type()) {
        ModifyNodePoolAttributeRequestNodePoolStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodePoolStrategy"]));
        nodePoolStrategy = make_shared<ModifyNodePoolAttributeRequestNodePoolStrategy>(model1);
      }
    }
    if (m.find("PoolId") != m.end() && !m["PoolId"].empty()) {
      poolId = make_shared<string>(boost::any_cast<string>(m["PoolId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~ModifyNodePoolAttributeRequest() = default;
};
class ModifyNodePoolAttributeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizRegionId{};
  shared_ptr<long> nodeCapacity{};
  shared_ptr<string> nodePoolStrategyShrink{};
  shared_ptr<string> poolId{};
  shared_ptr<string> productType{};

  ModifyNodePoolAttributeShrinkRequest() {}

  explicit ModifyNodePoolAttributeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (nodeCapacity) {
      res["NodeCapacity"] = boost::any(*nodeCapacity);
    }
    if (nodePoolStrategyShrink) {
      res["NodePoolStrategy"] = boost::any(*nodePoolStrategyShrink);
    }
    if (poolId) {
      res["PoolId"] = boost::any(*poolId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("NodeCapacity") != m.end() && !m["NodeCapacity"].empty()) {
      nodeCapacity = make_shared<long>(boost::any_cast<long>(m["NodeCapacity"]));
    }
    if (m.find("NodePoolStrategy") != m.end() && !m["NodePoolStrategy"].empty()) {
      nodePoolStrategyShrink = make_shared<string>(boost::any_cast<string>(m["NodePoolStrategy"]));
    }
    if (m.find("PoolId") != m.end() && !m["PoolId"].empty()) {
      poolId = make_shared<string>(boost::any_cast<string>(m["PoolId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~ModifyNodePoolAttributeShrinkRequest() = default;
};
class ModifyNodePoolAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ModifyNodePoolAttributeResponseBody() {}

  explicit ModifyNodePoolAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyNodePoolAttributeResponseBody() = default;
};
class ModifyNodePoolAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyNodePoolAttributeResponseBody> body{};

  ModifyNodePoolAttributeResponse() {}

  explicit ModifyNodePoolAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyNodePoolAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyNodePoolAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyNodePoolAttributeResponse() = default;
};
class PageListAppInstanceGroupUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productType{};

  PageListAppInstanceGroupUserRequest() {}

  explicit PageListAppInstanceGroupUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~PageListAppInstanceGroupUserRequest() = default;
};
class PageListAppInstanceGroupUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> users{};

  PageListAppInstanceGroupUserResponseBody() {}

  explicit PageListAppInstanceGroupUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (users) {
      res["Users"] = boost::any(*users);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Users"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      users = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~PageListAppInstanceGroupUserResponseBody() = default;
};
class PageListAppInstanceGroupUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PageListAppInstanceGroupUserResponseBody> body{};

  PageListAppInstanceGroupUserResponse() {}

  explicit PageListAppInstanceGroupUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PageListAppInstanceGroupUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PageListAppInstanceGroupUserResponseBody>(model1);
      }
    }
  }


  virtual ~PageListAppInstanceGroupUserResponse() = default;
};
class UpdateAppInstanceGroupImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> appCenterImageId{};
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> productType{};

  UpdateAppInstanceGroupImageRequest() {}

  explicit UpdateAppInstanceGroupImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCenterImageId) {
      res["AppCenterImageId"] = boost::any(*appCenterImageId);
    }
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCenterImageId") != m.end() && !m["AppCenterImageId"].empty()) {
      appCenterImageId = make_shared<string>(boost::any_cast<string>(m["AppCenterImageId"]));
    }
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~UpdateAppInstanceGroupImageRequest() = default;
};
class UpdateAppInstanceGroupImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateAppInstanceGroupImageResponseBody() {}

  explicit UpdateAppInstanceGroupImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateAppInstanceGroupImageResponseBody() = default;
};
class UpdateAppInstanceGroupImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAppInstanceGroupImageResponseBody> body{};

  UpdateAppInstanceGroupImageResponse() {}

  explicit UpdateAppInstanceGroupImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateAppInstanceGroupImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAppInstanceGroupImageResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAppInstanceGroupImageResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  ApproveOtaTaskResponse approveOtaTaskWithOptions(shared_ptr<ApproveOtaTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApproveOtaTaskResponse approveOtaTask(shared_ptr<ApproveOtaTaskRequest> request);
  AuthorizeInstanceGroupResponse authorizeInstanceGroupWithOptions(shared_ptr<AuthorizeInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AuthorizeInstanceGroupResponse authorizeInstanceGroup(shared_ptr<AuthorizeInstanceGroupRequest> request);
  CancelOtaTaskResponse cancelOtaTaskWithOptions(shared_ptr<CancelOtaTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelOtaTaskResponse cancelOtaTask(shared_ptr<CancelOtaTaskRequest> request);
  CreateAppInstanceGroupResponse createAppInstanceGroupWithOptions(shared_ptr<CreateAppInstanceGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppInstanceGroupResponse createAppInstanceGroup(shared_ptr<CreateAppInstanceGroupRequest> request);
  GetOtaTaskByTaskIdResponse getOtaTaskByTaskIdWithOptions(shared_ptr<GetOtaTaskByTaskIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOtaTaskByTaskIdResponse getOtaTaskByTaskId(shared_ptr<GetOtaTaskByTaskIdRequest> request);
  GetResourcePriceResponse getResourcePriceWithOptions(shared_ptr<GetResourcePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourcePriceResponse getResourcePrice(shared_ptr<GetResourcePriceRequest> request);
  ListAppInstanceGroupResponse listAppInstanceGroupWithOptions(shared_ptr<ListAppInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppInstanceGroupResponse listAppInstanceGroup(shared_ptr<ListAppInstanceGroupRequest> request);
  ListNodeInstanceTypeResponse listNodeInstanceTypeWithOptions(shared_ptr<ListNodeInstanceTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNodeInstanceTypeResponse listNodeInstanceType(shared_ptr<ListNodeInstanceTypeRequest> request);
  ListOtaTaskResponse listOtaTaskWithOptions(shared_ptr<ListOtaTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOtaTaskResponse listOtaTask(shared_ptr<ListOtaTaskRequest> request);
  ListRegionsResponse listRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRegionsResponse listRegions();
  ModifyAppInstanceGroupAttributeResponse modifyAppInstanceGroupAttributeWithOptions(shared_ptr<ModifyAppInstanceGroupAttributeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAppInstanceGroupAttributeResponse modifyAppInstanceGroupAttribute(shared_ptr<ModifyAppInstanceGroupAttributeRequest> request);
  ModifyNodePoolAttributeResponse modifyNodePoolAttributeWithOptions(shared_ptr<ModifyNodePoolAttributeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyNodePoolAttributeResponse modifyNodePoolAttribute(shared_ptr<ModifyNodePoolAttributeRequest> request);
  PageListAppInstanceGroupUserResponse pageListAppInstanceGroupUserWithOptions(shared_ptr<PageListAppInstanceGroupUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PageListAppInstanceGroupUserResponse pageListAppInstanceGroupUser(shared_ptr<PageListAppInstanceGroupUserRequest> request);
  UpdateAppInstanceGroupImageResponse updateAppInstanceGroupImageWithOptions(shared_ptr<UpdateAppInstanceGroupImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAppInstanceGroupImageResponse updateAppInstanceGroupImage(shared_ptr<UpdateAppInstanceGroupImageRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Appstream-center20210901

#endif
