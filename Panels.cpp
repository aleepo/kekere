#include "Panels.h"
#include "imgui.h"

void ShowPanels() {
  ShowToolPalette();
  ShowScannerSetting();
  ShowProgressWindow();
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

void ShowImageSetting() {
  ImGui::Begin("Image Setting");
  ImGui::Text("Image Setting  would go here!");
  ImGui::End();
}

void ShowColourBalance() {
  ImGui::Begin("Colour Balance");
  ImGui::Text("Scanner Setting  would go here!");
  ImGui::End();
}

void ShowUnsharpenMask() {
  ImGui::Begin("Unsharpen Mask");
  ImGui::Text("Scanner Setting  would go here!");
  ImGui::End();
}

void ShowProgress() {
  ImGui::Begin("Progress");
  ImGui::Text("Progress");
  ImGui::End();
}
