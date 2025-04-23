#include <string.h>

#include "screens.h"
#include "images.h"
#include "fonts.h"
#include "actions.h"
#include "vars.h"
#include "styles.h"
#include "ui.h"

#include <string.h>

objects_t objects;
lv_obj_t *tick_value_change_obj;

static void event_handler_cb_welcome_screen_obj0(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_RELEASED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 2, 0, e);
    }
}

static void event_handler_cb_game_obj1(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_RELEASED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 0, 0, e);
    }
}

static void event_handler_cb_game_obj2(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_RELEASED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 3, 0, e);
    }
}

static void event_handler_cb_game_btn_1(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_RELEASED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 5, 0, e);
    }
}

static void event_handler_cb_game_btn_2(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_RELEASED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 6, 0, e);
    }
}

static void event_handler_cb_game_btn_3(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_RELEASED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 7, 0, e);
    }
}

static void event_handler_cb_game_btn_4(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_RELEASED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 8, 0, e);
    }
}

static void event_handler_cb_game_btn_5(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_RELEASED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 9, 0, e);
    }
}

static void event_handler_cb_game_btn_6(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_RELEASED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 10, 0, e);
    }
}

static void event_handler_cb_game_btn_7(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_RELEASED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 11, 0, e);
    }
}

static void event_handler_cb_game_btn_8(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_RELEASED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 12, 0, e);
    }
}

static void event_handler_cb_game_btn_9(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_RELEASED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 13, 0, e);
    }
}

void create_screen_welcome_screen() {
    void *flowState = getFlowState(0, 0);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.welcome_screen = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 1024, 600);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffee5555), LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 262, 118);
            lv_obj_set_size(obj, 500, 46);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_42, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "Welcome to Tic Tac Toe");
        }
        {
            lv_obj_t *obj = lv_button_create(parent_obj);
            objects.obj0 = obj;
            lv_obj_set_pos(obj, 426, 255);
            lv_obj_set_size(obj, 173, 90);
            lv_obj_add_event_cb(obj, event_handler_cb_welcome_screen_obj0, LV_EVENT_ALL, flowState);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "START");
                }
            }
        }
    }
    
    tick_screen_welcome_screen();
}

void tick_screen_welcome_screen() {
    void *flowState = getFlowState(0, 0);
    (void)flowState;
}

void create_screen_game() {
    void *flowState = getFlowState(0, 1);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.game = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 1024, 600);
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_button_create(parent_obj);
            objects.obj1 = obj;
            lv_obj_set_pos(obj, 904, 540);
            lv_obj_set_size(obj, 120, 60);
            lv_obj_add_event_cb(obj, event_handler_cb_game_obj1, LV_EVENT_ALL, flowState);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Main Menu");
                }
            }
        }
        {
            lv_obj_t *obj = lv_button_create(parent_obj);
            objects.obj2 = obj;
            lv_obj_set_pos(obj, 0, 540);
            lv_obj_set_size(obj, 120, 60);
            lv_obj_add_event_cb(obj, event_handler_cb_game_obj2, LV_EVENT_ALL, flowState);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "New Game");
                }
            }
        }
        {
            // btn_1
            lv_obj_t *obj = lv_button_create(parent_obj);
            objects.btn_1 = obj;
            lv_obj_set_pos(obj, 298, 94);
            lv_obj_set_size(obj, 130, 130);
            lv_obj_add_event_cb(obj, event_handler_cb_game_btn_1, LV_EVENT_ALL, flowState);
            add_style_default(obj);
        }
        {
            // btn_2
            lv_obj_t *obj = lv_button_create(parent_obj);
            objects.btn_2 = obj;
            lv_obj_set_pos(obj, 447, 94);
            lv_obj_set_size(obj, 130, 130);
            lv_obj_add_event_cb(obj, event_handler_cb_game_btn_2, LV_EVENT_ALL, flowState);
        }
        {
            // btn_3
            lv_obj_t *obj = lv_button_create(parent_obj);
            objects.btn_3 = obj;
            lv_obj_set_pos(obj, 596, 94);
            lv_obj_set_size(obj, 130, 130);
            lv_obj_add_event_cb(obj, event_handler_cb_game_btn_3, LV_EVENT_ALL, flowState);
        }
        {
            // btn_4
            lv_obj_t *obj = lv_button_create(parent_obj);
            objects.btn_4 = obj;
            lv_obj_set_pos(obj, 298, 235);
            lv_obj_set_size(obj, 130, 130);
            lv_obj_add_event_cb(obj, event_handler_cb_game_btn_4, LV_EVENT_ALL, flowState);
        }
        {
            // btn_5
            lv_obj_t *obj = lv_button_create(parent_obj);
            objects.btn_5 = obj;
            lv_obj_set_pos(obj, 447, 235);
            lv_obj_set_size(obj, 130, 130);
            lv_obj_add_event_cb(obj, event_handler_cb_game_btn_5, LV_EVENT_ALL, flowState);
        }
        {
            // btn_6
            lv_obj_t *obj = lv_button_create(parent_obj);
            objects.btn_6 = obj;
            lv_obj_set_pos(obj, 596, 235);
            lv_obj_set_size(obj, 130, 130);
            lv_obj_add_event_cb(obj, event_handler_cb_game_btn_6, LV_EVENT_ALL, flowState);
        }
        {
            // btn_7
            lv_obj_t *obj = lv_button_create(parent_obj);
            objects.btn_7 = obj;
            lv_obj_set_pos(obj, 298, 376);
            lv_obj_set_size(obj, 130, 130);
            lv_obj_add_event_cb(obj, event_handler_cb_game_btn_7, LV_EVENT_ALL, flowState);
        }
        {
            // btn_8
            lv_obj_t *obj = lv_button_create(parent_obj);
            objects.btn_8 = obj;
            lv_obj_set_pos(obj, 447, 376);
            lv_obj_set_size(obj, 130, 130);
            lv_obj_add_event_cb(obj, event_handler_cb_game_btn_8, LV_EVENT_ALL, flowState);
        }
        {
            // btn_9
            lv_obj_t *obj = lv_button_create(parent_obj);
            objects.btn_9 = obj;
            lv_obj_set_pos(obj, 596, 376);
            lv_obj_set_size(obj, 130, 130);
            lv_obj_add_event_cb(obj, event_handler_cb_game_btn_9, LV_EVENT_ALL, flowState);
        }
    }
    
    tick_screen_game();
}

void tick_screen_game() {
    void *flowState = getFlowState(0, 1);
    (void)flowState;
}


extern void add_style(lv_obj_t *obj, int32_t styleIndex);
extern void remove_style(lv_obj_t *obj, int32_t styleIndex);

static const char *screen_names[] = { "Welcome Screen", "Game" };
static const char *object_names[] = { "welcome_screen", "game", "obj0", "obj1", "obj2", "btn_1", "btn_2", "btn_3", "btn_4", "btn_5", "btn_6", "btn_7", "btn_8", "btn_9" };
static const char *style_names[] = { "Default", "X", "O" };


typedef void (*tick_screen_func_t)();
tick_screen_func_t tick_screen_funcs[] = {
    tick_screen_welcome_screen,
    tick_screen_game,
};
void tick_screen(int screen_index) {
    tick_screen_funcs[screen_index]();
}
void tick_screen_by_id(enum ScreensEnum screenId) {
    tick_screen_funcs[screenId - 1]();
}

void create_screens() {
    eez_flow_init_styles(add_style, remove_style);
    
    eez_flow_init_screen_names(screen_names, sizeof(screen_names) / sizeof(const char *));
    eez_flow_init_object_names(object_names, sizeof(object_names) / sizeof(const char *));
    eez_flow_init_style_names(style_names, sizeof(style_names) / sizeof(const char *));
    
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    
    create_screen_welcome_screen();
    create_screen_game();
}
