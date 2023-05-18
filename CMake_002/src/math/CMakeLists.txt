# 设置release版本还是debug版本
if(${CMAKE_BUILD_TYPE} MATCHES "Release")
    message(STATUS "Release Version")
    set(BuildType "Release")
else()
    set(BuildType "Debug")
    message(STATUS "Debug Version")
endif()

#设置lib库目录
set(RELEASE_DIR ${PROJECT_SOURCE_DIR}/Release)
# debug和release版本目录不一样
#设置生成的so动态库最后输出的路径
set(LIBRARY_OUTPUT_PATH ${RELEASE_DIR}/${BuildType})
add_compile_options(-fPIC)

# 查找src目录下的所有源文件
# 并将名称保存到 DIR_LIB_SRCS 变量
aux_source_directory(src DIR_LIB_SRCS)
# 添加当前编译目标使用到的头文件搜索路径，多个路径之间用空格分隔
# 如果路径包含空格，可以使用双引号将它括起来
include_directories("${PROJECT_SOURCE_DIR}/math/inc")
# 生成动态库
add_library (mathLib SHARED  ${DIR_LIB_SRCS})