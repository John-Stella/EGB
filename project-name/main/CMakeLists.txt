idf_component_register(SRCS "main.c"
                            "include/ui.c"
                            "include/eez-flow.cpp"
                            "include/images.c"
                            "include/screens.c"
                            "include/styles.c"
                    INCLUDE_DIRS "." include
                    REQUIRES espressif__esp32_p4_function_ev_board)
