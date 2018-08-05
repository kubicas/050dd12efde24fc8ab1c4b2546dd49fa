#ifndef INTF_CPPMAKE__EXECUTOR_H
#define INTF_CPPMAKE__EXECUTOR_H

#include "stb/filesystem.h" // stubbable version of <filesystem>

namespace cppmake
{

using execute_t = int(*)(int argc, char const* argv[], stb::filesystem::path const& group, int run_count);
using abort_execution_t = void(*)();

}; // namespace cppmake


#endif // INTF_CPPMAKE__EXECUTOR_H
