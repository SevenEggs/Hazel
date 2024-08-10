#pragma once

#include "Hazel/Core.h"

namespace Hazel{
	class HAZEL_API Input
	{
	public:
		inline static bool isKeyPressed(int keycode) { return s_Instance->IsKeyPressedImpl(keycode); }

		inline static bool isMouseButtonPressed(int button) { return s_Instance->IsMouseButtonPressedImpl(button); }
		inline static std::pair<float, float> GetMousePostion() { return s_Instance->IsGetMousePostionImpl(); }
		inline static float GetMouseX() { return s_Instance->IsGetMouseXImpl(); }
		inline static float GetMouseY() { return s_Instance->IsGetMouseYImpl(); }
		
	protected:
		virtual bool IsKeyPressedImpl(int keycode) = 0;

		virtual bool IsMouseButtonPressedImpl(int button) = 0;
		virtual std::pair<float, float> IsGetMousePostionImpl() = 0;
		virtual float IsGetMouseXImpl() = 0;
		virtual float IsGetMouseYImpl() = 0;
	private:
		static Input* s_Instance;
	};
}