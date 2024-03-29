﻿#pragma once
#include "Function.h"
#include "SharedPointer.h"
#include "LogCategory.h"

#include <vector>
#include <string>



struct GLFWwindow;

namespace Hydro
{
    class Image;

    HYDRO_DECLARE_LOG_CATEGORY_STATIC(Input, "INPUT")
    
    class HYDRO_API Window
    {
    public:
        friend class Application;
        
        Window(const std::string& name, uint32_t width, uint32_t height, bool resizable);
        ~Window();
        
        static Ref<Window> Create(const std::string& name, uint32_t width, uint32_t height, bool resizable);
        const GLFWwindow* GetNativeWindow() const;
        GLFWwindow* GetNativeWindow();

        // Callbacks //
        void SetCloseCallback(Function<void, GLFWwindow*> function) const;
        void SetResizeCallback(Function<void, GLFWwindow*, int, int> function) const;
        void SetPositionCallback(Function<void, GLFWwindow*, int, int> function) const;
        void SetFocusCallback(Function<void, GLFWwindow*, int> function) const;
        void SetMaximizeCallback(Function<void, GLFWwindow*, int> function) const;
        void SetIconifyCallback(Function<void, GLFWwindow*, int> function) const;
        void SetKeyCallback(Function<void, GLFWwindow*, int, int, int, int> function) const;
        bool ShouldClose() const;
        bool IsValid() const;

        uint32_t GetWidth() const;
        uint32_t GetHeight() const;
        const std::string& GetName() const;
        void SetName(std::string name);
        void SetNameTemp(const std::string& name) const;
        void ResetName() const;
        void SetIcon(const std::string& filepath)const;
        void SetIcon(const Image& image) const;
        void SetIcons(const std::vector<Ref<Image>>& images);
        bool IsResizable() const;
        void Destroy();

        void Show() const;
        void Hide() const;
    
    private:
        GLFWwindow* m_Handle = nullptr;
        uint32_t m_Width{0}, m_Height{0}, m_PositionX{0}, m_PositionY{0};
        std::string m_Name;
        bool m_Resizable{false};
        bool m_HasFocus{false};
        bool m_Maximized{false};
        bool m_Minimized{false};
    };
}
