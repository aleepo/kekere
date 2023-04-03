#include "Panels.h"
#include "imgui.h"

void ShowPanels() {
  ShowToolPalette();
  ShowScannerSetting();
  ShowProgressWindow();
  ShowThumbnail();
}

void ShowToolPalette() {
  if (ImGui::Begin("Tool Palette")) {
    if (ImGui::CollapsingHeader("Curve")) {
      // Note(TJ): Call CurveSubPanel() for specifics on what that would do.
      ImGui::Text("Curve Tab");
    }

    if (ImGui::CollapsingHeader("Colour Balance")) {
      ImGui::Text("Colour Balance");
    }

    if (ImGui::CollapsingHeader("Unsharpen Mask")) {
      ImGui::Text("Unsharpen Mask");
    }

    if (ImGui::CollapsingHeader("LCH Editor")) {
      ImGui::Text("LCH Editor");
    }

    if (ImGui::CollapsingHeader("Digital Ice Advanced")) {
      ImGui::Text("Digital ICE");
    }

    if (ImGui::CollapsingHeader("Scan Image Enhancer")) {
      ImGui::Text("Scan Image Enhancer");
    }

    if (ImGui::CollapsingHeader("Scanner Extra")) {
      ImGui::Text("Scanner Extra");
    }
  }
  ImGui::End();
}

void ShowScannerSetting() {
  if (ImGui::Begin("Scanner Setting")) {
  }
  ImGui::End();
}

void ShowProgressWindow() {
  if (ImGui::Begin("Progress Window")) {
  }
  ImGui::End();
}

void ShowThumbnail(){
  if(ImGui::Begin("Thumbnails")){
    ImGui::Text("Display thumbnails here.");
  }
  ImGui::End();
}
