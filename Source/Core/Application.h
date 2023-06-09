﻿#pragma once
#include <vector>

#include "HydroPCH.h"
#include "ApplicationSpecifications.h"
#include "Renderer.h"
#include "Window.h"
#include "SharedPointer.h"

namespace Hydro
{
    class HYDRO_API Application
    {
    public:
        Application();
        virtual ~Application();
        void Run();
        virtual void OnInit();
        virtual void OnExit();
        virtual void OnUpdate(float delta);
        virtual std::vector<Ref<Image>> LoadWindowIcons() = 0;
        virtual ApplicationSpecs CreateSpecifications() = 0;

    public:
        using Super = Application;
        const ApplicationSpecs& GetSpecifications() const;
        const Window& GetWindow() const;
        Window& GetWindow();
        void RequireExit(bool Restart = true);
        static Application& GetCurrentApplication();
    private:
        Ref<Window> m_Window;
        Ref<Renderer> m_Renderer;
        static Application* instance;
        ApplicationSpecs m_Specifications;
        bool m_IsRunnning = true;
        float m_FrameStartTime = 0.0f;
        float m_FrameEndTime = 0.0f;
        float m_DeltaTime = 0.0f;

    private:
        bool InitCore();
    };
}
