set(PROJECT_NAME cJSON)
# Set SRC INC folder location
set(cJSON_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(cJSON_INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/inc)
# list all SRC INC file
file(GLOB cJSON_SRC_FILES 
            "${cJSON_SRC_DIR}/*.c")
file(GLOB  cJSON_INC_FILES 
                    "${cJSON_INC_DIR}/*.h")

# Add library add source and inc file to target
ADD_LIBRARY(${PROJECT_NAME} SHARED 
                        ${cJSON_SRC_FILES}
                        ${cJSON_INC_FILES})
# message("cJSON SRC file is  ${cJSON_SRC_FILES}")
# message("cJSON INC file is  ${cJSON_INC_FILES}")
# add INC file to target
target_include_directories(${PROJECT_NAME} PUBLIC ${cJSON_INC_DIR})
# INSTALL(TARGETS ${PROJECT_NAME})
# Set target property
set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE C
                                      RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}
                                    #   LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}
                                    #   ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}
                                      # RUNTIME_OUTPUT_DIRECTORY ${CMAKE_LIBRARY_OUTPUT_DIRECTORY}
                                      # LIBRARY_OUTPUT_DIRECTORY ${CMAKE_LIBRARY_OUTPUT_DIRECTORY}
                                      OUTPUT_NAME "${PROJECT_NAME}"
                                      PREFIX "")
