// ArduinoJson - arduinojson.org
// Copyright Benoit Blanchon 2014-2018
// MIT License

#pragma once

#include "../Data/JsonVariantTo.hpp"
#include "../JsonVariant.hpp"
#include "../Memory/DynamicMemoryPool.hpp"
#include "JsonDocument.hpp"

namespace ARDUINOJSON_NAMESPACE {

class DynamicJsonDocument : public JsonDocument<DynamicMemoryPool> {
 public:
  DynamicJsonDocument() {}
  DynamicJsonDocument(size_t capacity) {
    memoryPool().reserve(capacity);
  }
};
}  // namespace ARDUINOJSON_NAMESPACE
