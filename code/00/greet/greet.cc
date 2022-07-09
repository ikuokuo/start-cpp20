#include "greet.h"

#include <format>
#include <utility>

namespace greet {

std::string hello(std::string_view who) {
  return std::format("Hello {}!", std::move(who));
}

}  // namespace greet
