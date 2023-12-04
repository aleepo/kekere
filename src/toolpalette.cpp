#include "toolpalette.h"
#include "imgui.h"

void DigitalICE() {
  static bool digital_ice = false;
  ImGui::Checkbox("Enable Digital ICE", &digital_ice);
  if (digital_ice) {
    // ImGui::SameLine();
    const char *items[] = {"On (Normal)", "On (Fine)"};
    static int item_current = 0;
    ImGui::Combo("##", &item_current, items, IM_ARRAYSIZE(items));
  }

  ImGui::Separator();

  static bool post = false;
  ImGui::Checkbox("Enable Post Processing", &post);
  if (post) {
    static int roc, gem = 0;

    ImGui::SliderInt("Digital ROC", &roc, 0, 100);
    ImGui::SliderInt("Digital GEM", &gem, 0, 100);
  }

  static bool advanced_options = false;
  ImGui::Checkbox("Advanced Options", &advanced_options);
  if (advanced_options) {
    static int highlight, threshold = 0;
    ImGui::SliderInt("Highlight", &highlight, 1, 100);
    ImGui::SliderInt("Threshold", &threshold, 0, 255);
  }

  if (ImGui::Button("Redraw")) {
    // Issue redraw command to scanner
  }
}

void ScannerExtras() {

  // Send Recalibrate command to scanner
  ImGui::Text("Recalibrate Scanner");
  ImGui::SameLine();
  if (ImGui::Button("Calibrate")) {
  }

  /* This option varies depending on the model of scanner connected.
   * Below only caters for for the 5000 ED, 4000 ED, Coolscan V ED, Coolscan IV ED
   * It is only available with the SA-21, FH-869S, SA-30 and FH869G adapters.
   */
  ImGui::Text("Strip Film Offset");
  static int boundary_offset = 0;
  ImGui::SliderInt("Boundary Offset", &boundary_offset, -144, 144);

  if (ImGui::Button("Reload Thumbnail")) {
    // Issue scanner thumbnail redraw command
  }

  ImGui::Text("Manual Focus Adjustment");
  static int manual_focus = 0;
  ImGui::SliderInt("Position", &manual_focus, -200, 200);

  // Data Bit Depth option depends on the scanner used:
  // 9000 ED, 5000 ED: 16 bits, 8 bits
  // COOLSCAN V ED, 8000 ED, 4000 ED: 14 bits, 8 bits
  // COOLSCAN IV ED: 12 bits, 8 bits

  static ImGuiComboFlags flags = 0;

  ImGui::Text("Pixel Data Size");
  static char *data_size[2] = {"8", "14"};
  static int index = 0;
  const char *combo_preview = data_size[index];
  if (ImGui::BeginCombo("Scan Bit Depth", combo_preview, flags)) {
    for (int i = 0; i < IM_ARRAYSIZE(data_size); i++) {
      const bool selected = (index == i);
      if (ImGui::Selectable(data_size[i], selected)) {
        index = i;
      }
      if (selected) {
        ImGui::SetItemDefaultFocus();
      }
    }
    ImGui::EndCombo();
  }
}
