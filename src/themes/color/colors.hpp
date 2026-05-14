#pragma once
#include <Geode/Geode.hpp>
#include <imgui-cocos.hpp>
#include "../helper.hpp"

using namespace geode::prelude;

namespace niorin::theme::color {

    struct Palette {
        ImVec4 TitleBg;
        ImVec4 TitleBgActive;
        ImVec4 TitleBgCollapsed;
        ImVec4 WindowBg;
    };

    inline const Palette Default = {
        helper::rgba(69, 69, 138, 255),
        helper::rgba(82, 82, 161, 255),
        helper::rgba(102, 102, 204, 143),
        helper::rgba(29, 29, 29, 246)
    };
    
}