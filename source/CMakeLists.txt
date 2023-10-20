
add_executable(genshin_starts main.cpp)

# need add admin privileges
set_target_properties(genshin_starts PROPERTIES LINK_FLAGS "/level='requireAdministrator' /uiAccess='false'")