# niorin

This mod (currently) does **NOT** have any cheats. except for start position which is just a detector if you're on startpos, i have also asked prevter for permission to steal the startpos source code tho ill rewrite that later

## Contributing (themes)
##### sorry i have no idea how to create good docs
To contribute/add themes or color themes, you need to do something first with the source code. \
First of all, under ``ImGui::End();``, you can append ``ImGui::ShowDemoWindow();``. \
If you manage to compile this (which should workk usually), You may see a new window:
<img width="1148" height="510" alt="image" src="https://github.com/user-attachments/assets/3d3ca123-5da5-4969-913b-6ed10403eb3d" />
See that Dear ImGui Demo on the right side? That means that you have compiled the mod successfully. Now, you may want to press this button: \
<img width="340" height="241" alt="image" src="https://github.com/user-attachments/assets/d0c1f02c-1a0c-4e44-bf76-4020fe81f8ea" />

Something like this **WILL** popup if you did everything correctly
<img width="1014" height="549" alt="image" src="https://github.com/user-attachments/assets/547197da-0854-45c7-9db5-ec9fb37903b4" />

You can go over to the **Colors** tab on **Details** \
And then you can see everything, You will see like:

(R: 230  ) (G: 230  ) (B: 230  ) (A: 255  ) [ ] **Text** \
(R: 153  ) (G: 153  ) (B: 153  ) (A: 255  ) [ ] **TextDisabled** \
(etc.)

You see that bold part? that is the part you want to append to:
```cpp
struct YourColorPaletteName {
  ImVec4 Text;
  ImVec4 TextDisabled;
};
```
in your theme file (replace Text or TextDisabled with whatever you want to replace) \
And then:
```cpp
inline const YourColorPaletteName YourColorSchemeName = {
  helper::rgba(230, 230, 230, 255), // R = 230, G = 230, B = 230, Alpha/Transparency = 255
  helper::rgba(153, 153, 153, 255)  // R = 153, G = 153, B = 153, Alpha/Transparency = 255
};
```
## the rest is coming soon
