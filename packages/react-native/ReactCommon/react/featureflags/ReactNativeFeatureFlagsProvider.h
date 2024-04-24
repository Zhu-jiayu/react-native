/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * @generated SignedSource<<c0d85aebcdb7731e980873c278fe8f89>>
 */

/**
 * IMPORTANT: Do NOT modify this file directly.
 *
 * To change the definition of the flags, edit
 *   packages/react-native/scripts/featureflags/ReactNativeFeatureFlags.config.js.
 *
 * To regenerate this code, run the following script from the repo root:
 *   yarn featureflags-update
 */

#pragma once

namespace facebook::react {

class ReactNativeFeatureFlagsProvider {
 public:
  virtual ~ReactNativeFeatureFlagsProvider() = default;

  virtual bool commonTestFlag() = 0;
  virtual bool batchRenderingUpdatesInEventLoop() = 0;
  virtual bool destroyFabricSurfacesInReactInstanceManager() = 0;
  virtual bool enableBackgroundExecutor() = 0;
  virtual bool enableCleanTextInputYogaNode() = 0;
  virtual bool enableCustomDrawOrderFabric() = 0;
  virtual bool enableMicrotasks() = 0;
  virtual bool enableSpannableBuildingUnification() = 0;
  virtual bool enableSynchronousStateUpdates() = 0;
  virtual bool enableUIConsistency() = 0;
  virtual bool forceBatchingMountItemsOnAndroid() = 0;
  virtual bool inspectorEnableCxxInspectorPackagerConnection() = 0;
  virtual bool inspectorEnableModernCDPRegistry() = 0;
  virtual bool preventDoubleTextMeasure() = 0;
  virtual bool useModernRuntimeScheduler() = 0;
  virtual bool useNativeViewConfigsInBridgelessMode() = 0;
  virtual bool useStateAlignmentMechanism() = 0;
};

} // namespace facebook::react