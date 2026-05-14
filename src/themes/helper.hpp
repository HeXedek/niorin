#pragma once
/*
 * theme helper, can do shit like converting rgba -> ImVec4
 */

#include <imgui-cocos.hpp>

namespace niorin::helper {
    static inline ImVec4 rgba(auto r, auto g, auto b, auto a = 255) {
        return ImVec4(r / 255.f, g / 255.f, b / 255.f, a / 255.f);
    }
}