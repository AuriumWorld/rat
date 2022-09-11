#include "menu.hpp"
#include "imgui/imgui.h"
#include "font.hpp"
#include "font_monospace.hpp"
#include "imgui/imgui_impl_sdl.h"
#include "imgui/imgui_impl_opengl3.h"
#include "imgui/GL/gl3w.h"

void style() {
	ImVec4* colors = ImGui::GetStyle().Colors;
	colors[ImGuiCol_Text]                   = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_TextDisabled]           = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
	colors[ImGuiCol_WindowBg]               = ImVec4(0.05f, 0.05f, 0.05f, 0.93f);
	colors[ImGuiCol_ChildBg]                = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
	colors[ImGuiCol_PopupBg]                = ImVec4(0.08f, 0.08f, 0.08f, 0.94f);
	colors[ImGuiCol_Border]                 = ImVec4(1.00f, 1.00f, 1.00f, 0.50f);
	colors[ImGuiCol_BorderShadow]           = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
	colors[ImGuiCol_FrameBg]                = ImVec4(0.13f, 0.13f, 0.13f, 1.00f);
	colors[ImGuiCol_FrameBgHovered]         = ImVec4(1.00f, 0.50f, 0.75f, 1.00f);
	colors[ImGuiCol_FrameBgActive]          = ImVec4(1.00f, 0.00f, 0.50f, 1.00f);
	colors[ImGuiCol_TitleBg]                = ImVec4(0.04f, 0.04f, 0.04f, 1.00f);
	colors[ImGuiCol_TitleBgActive]          = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_TitleBgCollapsed]       = ImVec4(0.00f, 0.00f, 0.00f, 0.51f);
	colors[ImGuiCol_MenuBarBg]              = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
	colors[ImGuiCol_ScrollbarBg]            = ImVec4(0.02f, 0.02f, 0.02f, 0.53f);
	colors[ImGuiCol_ScrollbarGrab]          = ImVec4(0.31f, 0.31f, 0.31f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabHovered]   = ImVec4(0.41f, 0.41f, 0.41f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabActive]    = ImVec4(0.51f, 0.51f, 0.51f, 1.00f);
	colors[ImGuiCol_CheckMark]              = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_SliderGrab]             = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_SliderGrabActive]       = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_Button]                 = ImVec4(0.13f, 0.13f, 0.13f, 1.00f);
	colors[ImGuiCol_ButtonHovered]          = ImVec4(1.00f, 0.50f, 0.75f, 1.00f);
	colors[ImGuiCol_ButtonActive]           = ImVec4(1.00f, 0.00f, 0.50f, 1.00f);
	colors[ImGuiCol_Header]                 = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_HeaderHovered]          = ImVec4(1.00f, 0.00f, 0.50f, 1.00f);
	colors[ImGuiCol_HeaderActive]           = ImVec4(1.00f, 0.50f, 0.75f, 1.00f);
	colors[ImGuiCol_Separator]              = ImVec4(1.00f, 1.00f, 1.00f, 0.50f);
	colors[ImGuiCol_SeparatorHovered]       = ImVec4(1.00f, 1.00f, 1.00f, 0.00f);
	colors[ImGuiCol_SeparatorActive]        = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_ResizeGrip]             = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_ResizeGripHovered]      = ImVec4(1.00f, 0.50f, 0.75f, 1.00f);
	colors[ImGuiCol_ResizeGripActive]       = ImVec4(1.00f, 0.00f, 0.50f, 1.00f);
	colors[ImGuiCol_Tab]                    = ImVec4(0.13f, 0.13f, 0.13f, 1.00f);
	colors[ImGuiCol_TabHovered]             = ImVec4(1.00f, 0.50f, 0.75f, 1.00f);
	colors[ImGuiCol_TabActive]              = ImVec4(1.00f, 0.00f, 0.50f, 1.00f);
	colors[ImGuiCol_TabUnfocused]           = ImVec4(1.00f, 1.00f, 1.00f, 0.97f);
	colors[ImGuiCol_TabUnfocusedActive]     = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_PlotLines]              = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
	colors[ImGuiCol_PlotLinesHovered]       = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
	colors[ImGuiCol_PlotHistogram]          = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
	colors[ImGuiCol_PlotHistogramHovered]   = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
	colors[ImGuiCol_TextSelectedBg]         = ImVec4(1.00f, 0.50f, 0.75f, 1.00f);
	colors[ImGuiCol_DragDropTarget]         = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
	colors[ImGuiCol_NavHighlight]           = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_NavWindowingHighlight]  = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
	colors[ImGuiCol_NavWindowingDimBg]      = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
	colors[ImGuiCol_ModalWindowDimBg]       = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);

	ImGui::GetStyle().WindowPadding = ImVec2(6, 4);
	ImGui::GetStyle().FramePadding = ImVec2(4, 2);
	ImGui::GetStyle().ItemSpacing = ImVec2(3, 3);
	ImGui::GetStyle().ItemInnerSpacing = ImVec2(4, 4);
	ImGui::GetStyle().IndentSpacing = 4;
	ImGui::GetStyle().ScrollbarSize = 4;
	ImGui::GetStyle().GrabMinSize = 8;
	
	ImGui::GetStyle().WindowBorderSize = 0;
	ImGui::GetStyle().ChildBorderSize = 0;
	ImGui::GetStyle().PopupBorderSize = 0;
	ImGui::GetStyle().FrameBorderSize = 0;
	ImGui::GetStyle().TabBorderSize = 0;
	
	ImGui::GetStyle().WindowRounding = 2;
	ImGui::GetStyle().ChildRounding = 2;
	ImGui::GetStyle().FrameRounding = 2;
	ImGui::GetStyle().PopupRounding = 2;
	ImGui::GetStyle().ScrollbarRounding = 0;
	ImGui::GetStyle().GrabRounding = 2;
	ImGui::GetStyle().LogSliderDeadzone = 2;
	ImGui::GetStyle().TabRounding = 2;
}

void Menu::onPollEvent(SDL_Event* event, const int result) {
    if (result && ImGui_ImplSDL2_ProcessEvent(event) && Menu::open) {
        event->type = 0;
    }
}

void Menu::onSwapWindow(SDL_Window* window) {
    if (!initialised) {
        gl3wInit();
        IMGUI_CHECKVERSION();
        ImGui::CreateContext();
        ImGui::StyleColorsDark();
        ImGui_ImplOpenGL3_Init("#version 100");
        ImGui_ImplSDL2_InitForOpenGL(window, nullptr);
        style();
        ImGui::GetIO().Fonts->AddFontFromMemoryCompressedTTF(font_compressed_data, font_compressed_size, 14.f);
        Menu::largeMonoFont = ImGui::GetIO().Fonts->AddFontFromMemoryCompressedTTF(font_monospace_compressed_data, font_monospace_compressed_size, 24.f);
        initialised = true;
    }

    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplSDL2_NewFrame(window);

    ImGuiIO& io = ImGui::GetIO();
    int w, h;
    SDL_GetWindowSize(window, &w, &h);
    Globals::screenSizeX = w;
    Globals::screenSizeY = h;
    io.DisplaySize = ImVec2((float)w, (float)h);

    ImGui::NewFrame();

    Menu::drawOverlay(ImGui::GetBackgroundDrawList());
    if (Menu::open) {
        io.MouseDrawCursor = true; // TODO: find workaround at some point because ugly
        Menu::drawMenu();
        if (devWindow) {
            drawDevWindow();
        }
        if (demoWindow) {
            ImGui::ShowDemoWindow();
        }
    }
    else {
        io.MouseDrawCursor = false;
    }


    if (ImGui::IsKeyPressed(SDL_SCANCODE_INSERT, false)) {
        Config::reloadCfgList();
        Menu::open = !Menu::open;
    }

    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}

void Menu::drawMenu() {
	ImGui::SetNextWindowSize(ImVec2{700, 530});
    ImGui::Begin("gamesneeze-linux", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);
    
    ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(0, 4));
    ImGui::TextColored(ImColor(255, 255, 255), "game"); 
    ImGui::SameLine(); 
    ImGui::PopStyleVar();
    
    ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(490, 5));
    ImGui::TextColored(ImColor(255, 0, 128, 255), "sneeze");
    ImGui::PopStyleVar();
    ImGui::SameLine();

	if(ImGui::BeginTabBar("##gamesneeze-tabs")) {
		if(ImGui::BeginTabItem("Legit")) {
			Menu::drawLegitTab();
			ImGui::EndTabItem();
		}
		if(ImGui::BeginTabItem("Rage")) {
			Menu::drawRageTab();
			ImGui::EndTabItem();
		}
		if(ImGui::BeginTabItem("Visuals")) {
			Menu::drawVisualsTab();
			ImGui::EndTabItem();
		}
		if(ImGui::BeginTabItem("Skins")) {
			Menu::drawSkinsTab();
			ImGui::EndTabItem();
		}
		if(ImGui::BeginTabItem("Movement")) {
			Menu::drawMovementTab();
			ImGui::EndTabItem();
		}
		if(ImGui::BeginTabItem("Misc")) {
			Menu::drawMiscTab();
			ImGui::EndTabItem();
		}
		ImGui::EndTabBar();
	}

    ImGui::End();
}