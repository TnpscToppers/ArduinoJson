// ArduinoJson - arduinojson.org
// Copyright Benoit Blanchon 2014-2018
// MIT License

#pragma once

#include "../Memory/StaticMemoryPool.hpp"
#include "JsonDocument.hpp"

namespace ARDUINOJSON_NAMESPACE {

template <size_t CAPACITY>
class StaticJsonDocument : public JsonDocument<StaticMemoryPool<CAPACITY> > {
 public:
  StaticMemoryPoolBase& memoryPool() {
    return JsonDocument<StaticMemoryPool<CAPACITY> >::memoryPool();
  }
};

}  // namespace ARDUINOJSON_NAMESPACE
