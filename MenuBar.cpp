#include "MenuBar.h"
#include "imgui.h"

void ShowDockSpace() {
  ImGui::DockSpaceOverViewport(ImGui::GetMainViewport());
  ShowMainMenuBar();
}

static void ShowMainMenuBar() {
  if (ImGui::BeginMainMenuBar()) {
    if (ImGui::BeginMenu("File")) {
      ShowFileMenu();
      ImGui::EndMenu();
    }
    if (ImGui::BeginMenu("Edit")) {
      ShowEditMenu();
      ImGui::EndMenu();
    }
    if (ImGui::BeginMenu("Scanner")) {
      ShowScannerMenu();
      ImGui::EndMenu();
    }
    if (ImGui::BeginMenu("Help")) {
      ShowHelpMenu();
      ImGui::EndMenu();
    }
    ImGui::EndMainMenuBar();
  }
}

static void ShowFileMenu() {
  if (ImGui::MenuItem("Open Twain Source")) {
  }
  if (ImGui::MenuItem("Open...", "Ctrl+O")) {
  }
  ImGui::Separator();
  if (ImGui::MenuItem("Quit", "Ctrl+Q")) {
  }
}

static void ShowEditMenu() {
  if (ImGui::MenuItem("Undo\t\t\t", "Ctrl+Z")) {
  }
  if (ImGui::MenuItem("Redo\t\t\t", "Ctrl+Y", false, false)) {
  } // Disabled item
  ImGui::Separator();
  if (ImGui::MenuItem("Cut\t\t\t", "Ctrl+X")) {
  }
  if (ImGui::MenuItem("Copy\t\t\t", "Ctrl+C")) {
  }
  if (ImGui::MenuItem("Copy Settings...\t\t\t")) {
  }
  if (ImGui::MenuItem("Copy All Settings\t\t\t")) {
  }
  if (ImGui::MenuItem("Paste\t\t\t", "Ctrl+V")) {
  }
  if (ImGui::MenuItem("Clear\t\t\t", "Delete")) {
  }
  if (ImGui::MenuItem("Preferences\t\t\t", "Ctrl+K")) {
  }
}

static void ShowScannerMenu() {
  if (ImGui::BeginMenu("Film Type\t\t\t")) {
    if (ImGui::MenuItem("Positive")) {
    }
    if (ImGui::MenuItem("Negative(Colour)")) {
    }
    if (ImGui::MenuItem("Negative(Mono)")) {
    }
    ImGui::Separator();
    if (ImGui::MenuItem("Kodachrome")) {
    }
    ImGui::EndMenu();
  }

  if (ImGui::BeginMenu("Scan Colour Space\t\t\t")) {
    ImGui::MenuItem("fish_hat.c");
    ImGui::MenuItem("fish_hat.inl");
    ImGui::MenuItem("fish_hat.h");
    ImGui::EndMenu();
  }

  if (ImGui::BeginMenu("Bit Depth\t\t\t")) {
    ImGui::MenuItem("8bit");
    ImGui::MenuItem("14bit");
    ImGui::EndMenu();
  }

  if (ImGui::BeginMenu("Transform\t\t\t")) {
    if (ImGui::MenuItem("Rotate CW")) {
    }
    if (ImGui::MenuItem("Rotate CCW\t")) {
    }
    if (ImGui::MenuItem("Flip Horizontal\t")) {
    }
    if (ImGui::MenuItem("Flip Vertical\t")) {
    }
    if (ImGui::MenuItem("Flip Both Axes\t")) {
    }

    ImGui::EndMenu();
  }

  if (ImGui::BeginMenu("Settings\t\t\t")) {
    ImGui::MenuItem("fish_hat.c");
    ImGui::MenuItem("fish_hat.inl");
    ImGui::MenuItem("fish_hat.h");
    ImGui::EndMenu();
  }

  if (ImGui::MenuItem("Eject\t\t\t")) {
  }

  if (ImGui::MenuItem("Slide Feeder")) {
  }

  ImGui::Separator();

  if (ImGui::MenuItem("Show Processed Pane", "Ctrl+T")) {
  }
}

static void ShowHelpMenu() {
  if (ImGui::MenuItem("Help Topics")) {
  }
  ImGui::Separator();
  if (ImGui::MenuItem("About Nikon Scan 5")) {
  }
}
