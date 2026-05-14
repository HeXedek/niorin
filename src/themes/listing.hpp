#pragma once

#include "theme/default.hpp"
#include "color/colors.hpp"

namespace niorin::theme {
    enum class theme {
        Default
    };

    enum class color_t {
        Default
    };

    inline constexpr int tc = 1;
    inline constexpr int cc = 1;

    inline const char* name(const theme t) {
        switch (t) {
            case theme::Default: return "Default";
        }
        return "unknown";
    }

    inline const char* name(const color_t t) {
        switch (t) {
            case color_t::Default: return "Default";
        }
        return "unknown";
    }

    inline const color::Palette& get(const color_t t) {
        switch (t) {
            case color_t::Default:
                return color::Default;
        }
        return color::Default;
    }

    inline void style_a(const theme t) {
        switch (t) {
            case theme::Default:
                _theme_default();
                break;
        }
    }

    inline void apply(const theme t, const color_t ct = color_t::Default) {
        style_a(t);

        const auto& c = get(ct);
        auto& style = ImGui::GetStyle();

        style.Colors[ImGuiCol_TitleBg]          = c.TitleBg;
        style.Colors[ImGuiCol_TitleBgActive]    = c.TitleBgActive;
        style.Colors[ImGuiCol_TitleBgCollapsed] = c.TitleBgCollapsed;
        style.Colors[ImGuiCol_WindowBg]         = c.WindowBg;
    }
}