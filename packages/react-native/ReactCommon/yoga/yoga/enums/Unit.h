/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

// @generated by enums.py
// clang-format off
#pragma once

#include <cstdint>
#include <yoga/YGEnums.h>
#include <yoga/enums/YogaEnums.h>

namespace facebook::yoga {

enum class Unit : uint8_t {
  Undefined = YGUnitUndefined,
  Point = YGUnitPoint,
  Percent = YGUnitPercent,
  Auto = YGUnitAuto,
};

template <>
constexpr int32_t ordinalCount<Unit>() {
  return 4;
}

constexpr Unit scopedEnum(YGUnit unscoped) {
  return static_cast<Unit>(unscoped);
}

constexpr YGUnit unscopedEnum(Unit scoped) {
  return static_cast<YGUnit>(scoped);
}

inline const char* toString(Unit e) {
  return YGUnitToString(unscopedEnum(e));
}

} // namespace facebook::yoga
