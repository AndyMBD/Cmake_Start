cmake_minimum_required(VERSION 3.26)
project(Smart_ABC)

set(ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(UNCRUSTIFY_CFG ${ROOT_DIR}/uncrustify/uncrustify.cfg)
set(UNCRUSTIFY_TARGET_NAME uncrustify)

add_subdirectory(${ROOT_DIR}/MC_1)
add_subdirectory(${ROOT_DIR}/MC_2)
add_subdirectory(${ROOT_DIR}/MC_3)

function(UNCRUSTIFY_FORMAT)
    add_custom_target(${UNCRUSTIFY_TARGET_NAME} 
                       uncrustify -c ${UNCRUSTIFY_CFG} --replace --no-backup -l C ${TOP_UNCRUSTIFY_SRC}
                     )
endfunction()
UNCRUSTIFY_FORMAT()

#uncrustify-dry-run:
#	$(HIDE_CMD)uncrustify -c $(U_CONFIG) --check -l C $(UNCRUSTIFY_FILES)

#PRIVATE
message(DIR_SRCSS = ${DIR_SRCSS})



