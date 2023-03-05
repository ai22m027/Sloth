#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/fmt/ostr.h"

namespace Sloth {


	class SLOTH_API Log {
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};

}


// Core log macros
#define ST_CORE_TRACE(...) ::Sloth::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define ST_CORE_INFO(...)  ::Sloth::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ST_CORE_WARN(...)  ::Sloth::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ST_CORE_ERROR(...) ::Sloth::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ST_CORE_FATAL(...) ::Sloth::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define ST_TRACE(...)      ::Sloth::Log::GetClientLogger()->trace(__VA_ARGS__)
#define ST_INFO(...)       ::Sloth::Log::GetClientLogger()->info(__VA_ARGS__)
#define ST_WARN(...)       ::Sloth::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ST_ERROR(...)      ::Sloth::Log::GetClientLogger()->error(__VA_ARGS__)
#define ST_FATAL(...)      ::Sloth::Log::GetClientLogger()->critical(__VA_ARGS__)




