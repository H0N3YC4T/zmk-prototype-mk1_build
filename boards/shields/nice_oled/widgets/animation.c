#include "animation.h"
#include "screen_peripheral.h"
// #include "../assets/custom_fonts.h"
// #include "battery.h"
#include <stdlib.h>
#include <zephyr/kernel.h>

// CONFIG_NICE_OLED_GEM_ANIMATION
LV_IMG_DECLARE(crystal_01);
LV_IMG_DECLARE(crystal_02);
LV_IMG_DECLARE(crystal_03);
LV_IMG_DECLARE(crystal_04);
LV_IMG_DECLARE(crystal_05);
LV_IMG_DECLARE(crystal_06);
LV_IMG_DECLARE(crystal_07);
LV_IMG_DECLARE(crystal_08);
LV_IMG_DECLARE(crystal_09);
LV_IMG_DECLARE(crystal_10);
LV_IMG_DECLARE(crystal_11);
LV_IMG_DECLARE(crystal_12);
LV_IMG_DECLARE(crystal_13);
LV_IMG_DECLARE(crystal_14);
LV_IMG_DECLARE(crystal_15);
LV_IMG_DECLARE(crystal_16);

const lv_img_dsc_t *crystal_imgs[] = {
    &crystal_01, &crystal_02, &crystal_03, &crystal_04, &crystal_05, &crystal_06,
    &crystal_07, &crystal_08, &crystal_09, &crystal_10, &crystal_11, &crystal_12,
    &crystal_13, &crystal_14, &crystal_15, &crystal_16,
};

// CONFIG_NICE_OLED_POKEMON_ANIMATION
LV_IMG_DECLARE(pokemon_01);
LV_IMG_DECLARE(pokemon_02);
LV_IMG_DECLARE(pokemon_03);
LV_IMG_DECLARE(pokemon_04);
LV_IMG_DECLARE(pokemon_05);
LV_IMG_DECLARE(pokemon_06);
LV_IMG_DECLARE(pokemon_07);
LV_IMG_DECLARE(pokemon_08);
LV_IMG_DECLARE(pokemon_09);
LV_IMG_DECLARE(pokemon_10);
LV_IMG_DECLARE(pokemon_11);
LV_IMG_DECLARE(pokemon_12);
LV_IMG_DECLARE(pokemon_13);
LV_IMG_DECLARE(pokemon_14);
LV_IMG_DECLARE(pokemon_15);
LV_IMG_DECLARE(pokemon_16);
LV_IMG_DECLARE(pokemon_17);
LV_IMG_DECLARE(pokemon_18);
LV_IMG_DECLARE(pokemon_19);
LV_IMG_DECLARE(pokemon_20);

const lv_img_dsc_t *pokemon_imgs[] = {
    &pokemon_01, &pokemon_02, &pokemon_03, &pokemon_04, &pokemon_05, &pokemon_06, &pokemon_07,
    &pokemon_08, &pokemon_09, &pokemon_10, &pokemon_11, &pokemon_12, &pokemon_13, &pokemon_14,
    &pokemon_15, &pokemon_16, &pokemon_17, &pokemon_18, &pokemon_19, &pokemon_20,
};

// CONFIG_NICE_OLED_OMNISSIAH_ANIMATION
LV_IMG_DECLARE(omnissiah_01);
LV_IMG_DECLARE(omnissiah_02);
LV_IMG_DECLARE(omnissiah_03);
LV_IMG_DECLARE(omnissiah_04);
LV_IMG_DECLARE(omnissiah_05);
LV_IMG_DECLARE(omnissiah_06);
LV_IMG_DECLARE(omnissiah_07);
LV_IMG_DECLARE(omnissiah_08);
LV_IMG_DECLARE(omnissiah_09);
LV_IMG_DECLARE(omnissiah_10);
LV_IMG_DECLARE(omnissiah_11);
LV_IMG_DECLARE(omnissiah_12);
LV_IMG_DECLARE(omnissiah_13);
LV_IMG_DECLARE(omnissiah_14);
LV_IMG_DECLARE(omnissiah_15);
LV_IMG_DECLARE(omnissiah_16);
LV_IMG_DECLARE(omnissiah_17);
LV_IMG_DECLARE(omnissiah_18);
LV_IMG_DECLARE(omnissiah_19);
LV_IMG_DECLARE(omnissiah_20);
LV_IMG_DECLARE(omnissiah_21);
LV_IMG_DECLARE(omnissiah_22);
LV_IMG_DECLARE(omnissiah_23);
LV_IMG_DECLARE(omnissiah_24);
LV_IMG_DECLARE(omnissiah_25);
LV_IMG_DECLARE(omnissiah_26);
LV_IMG_DECLARE(omnissiah_27);
LV_IMG_DECLARE(omnissiah_28);
LV_IMG_DECLARE(omnissiah_29);
LV_IMG_DECLARE(omnissiah_30);
LV_IMG_DECLARE(omnissiah_31);
LV_IMG_DECLARE(omnissiah_32);

const lv_img_dsc_t *omnissiah_mgs[] = {
    &omnissiah_01, &omnissiah_02, &omnissiah_03, &omnissiah_04, &omnissiah_05, &omnissiah_06, &omnissiah_07,
    &omnissiah_08, &omnissiah_09, &omnissiah_10, &omnissiah_11, &omnissiah_12, &omnissiah_13, &omnissiah_14,
    &omnissiah_15, &omnissiah_16, &omnissiah_17, &omnissiah_18, &omnissiah_19, &omnissiah_20, &omnissiah_21, 
    &omnissiah_22, &omnissiah_23, &omnissiah_24, &omnissiah_25, &omnissiah_26, &omnissiah_27, &omnissiah_28, 
    &omnissiah_29, &omnissiah_30, &omnissiah_31, &omnissiah_32,
};

// CONFIG_NICE_OLED_ULTRAMAR_ANIMATION
LV_IMG_DECLARE(ultramar_01);
LV_IMG_DECLARE(ultramar_02);
LV_IMG_DECLARE(ultramar_03);
LV_IMG_DECLARE(ultramar_04);
LV_IMG_DECLARE(ultramar_05);
LV_IMG_DECLARE(ultramar_06);
LV_IMG_DECLARE(ultramar_07);
LV_IMG_DECLARE(ultramar_08);
LV_IMG_DECLARE(ultramar_09);
LV_IMG_DECLARE(ultramar_10);
LV_IMG_DECLARE(ultramar_11);
LV_IMG_DECLARE(ultramar_12);
LV_IMG_DECLARE(ultramar_13);
LV_IMG_DECLARE(ultramar_14);
LV_IMG_DECLARE(ultramar_15);
LV_IMG_DECLARE(ultramar_16);
LV_IMG_DECLARE(ultramar_17);
LV_IMG_DECLARE(ultramar_18);
LV_IMG_DECLARE(ultramar_19);
LV_IMG_DECLARE(ultramar_20);
LV_IMG_DECLARE(ultramar_21);
LV_IMG_DECLARE(ultramar_22);
LV_IMG_DECLARE(ultramar_23);
LV_IMG_DECLARE(ultramar_24);
LV_IMG_DECLARE(ultramar_25);
LV_IMG_DECLARE(ultramar_26);
LV_IMG_DECLARE(ultramar_27);
LV_IMG_DECLARE(ultramar_28);
LV_IMG_DECLARE(ultramar_29);
LV_IMG_DECLARE(ultramar_30);
LV_IMG_DECLARE(ultramar_31);
LV_IMG_DECLARE(ultramar_32);

const lv_img_dsc_t *ultramar_imgs[] = {
    &ultramar_01, &ultramar_02, &ultramar_03, &ultramar_04, &ultramar_05, &ultramar_06, &ultramar_07,
    &ultramar_08, &ultramar_09, &ultramar_10, &ultramar_11, &ultramar_12, &ultramar_13, &ultramar_14,
    &ultramar_15, &ultramar_16, &ultramar_17, &ultramar_18, &ultramar_19, &ultramar_20, &ultramar_21, 
    &ultramar_22, &ultramar_23, &ultramar_24, &ultramar_25, &ultramar_26, &ultramar_27, &ultramar_28, 
    &ultramar_29, &ultramar_30, &ultramar_31, &ultramar_32,
};

// CONFIG_NICE_OLED_TRANSMUTATION_ANIMATION
LV_IMG_DECLARE(transmutation_01);
LV_IMG_DECLARE(transmutation_02);
LV_IMG_DECLARE(transmutation_03);
LV_IMG_DECLARE(transmutation_04);
LV_IMG_DECLARE(transmutation_05);
LV_IMG_DECLARE(transmutation_06);
LV_IMG_DECLARE(transmutation_07);
LV_IMG_DECLARE(transmutation_08);
LV_IMG_DECLARE(transmutation_09);
LV_IMG_DECLARE(transmutation_10);
LV_IMG_DECLARE(transmutation_11);
LV_IMG_DECLARE(transmutation_12);
LV_IMG_DECLARE(transmutation_13);
LV_IMG_DECLARE(transmutation_14);
LV_IMG_DECLARE(transmutation_15);
LV_IMG_DECLARE(transmutation_16);
LV_IMG_DECLARE(transmutation_17);
LV_IMG_DECLARE(transmutation_18);
LV_IMG_DECLARE(transmutation_19);
LV_IMG_DECLARE(transmutation_20);
LV_IMG_DECLARE(transmutation_21);
LV_IMG_DECLARE(transmutation_22);
LV_IMG_DECLARE(transmutation_23);
LV_IMG_DECLARE(transmutation_24);
LV_IMG_DECLARE(transmutation_25);
LV_IMG_DECLARE(transmutation_26);
LV_IMG_DECLARE(transmutation_27);
LV_IMG_DECLARE(transmutation_28);
LV_IMG_DECLARE(transmutation_29);
LV_IMG_DECLARE(transmutation_30);
LV_IMG_DECLARE(transmutation_31);
LV_IMG_DECLARE(transmutation_32);

const lv_img_dsc_t *transmutation_imgs[] = {
    &transmutation_01, &transmutation_02, &transmutation_03, &transmutation_04, &transmutation_05, &transmutation_06, &transmutation_07,
    &transmutation_08, &transmutation_09, &transmutation_10, &transmutation_11, &transmutation_12, &transmutation_13, &transmutation_14,
    &transmutation_15, &transmutation_16, &transmutation_17, &transmutation_18, &transmutation_19, &transmutation_20, &transmutation_21, 
    &transmutation_22, &transmutation_23, &transmutation_24, &transmutation_25, &transmutation_26, &transmutation_27, &transmutation_28, 
    &transmutation_29, &transmutation_30, &transmutation_31, &transmutation_32,
};

// CONFIG_NICE_OLED_VIM
LV_IMG_DECLARE(vim);
#define FIXED_IMAGE_1 &vim

// CONFIG_NICE_OLED_VIP_MARCOS
LV_IMG_DECLARE(vip_marcos);
#define FIXED_IMAGE_2 &vip_marcos

#if IS_ENABLED(CONFIG_NICE_OLED_GEM_ANIMATION_SMART_BATTERY)
void draw_animation(lv_obj_t *canvas, struct zmk_widget_screen *widget) {}
#else

void draw_animation(lv_obj_t *canvas, struct zmk_widget_screen *widget) {
    /* Declare globally within the function, so that they exist regardless of
     * #if. */
    lv_obj_t *art = NULL;
    lv_obj_t *art2 = NULL;

#if IS_ENABLED(CONFIG_NICE_OLED_GEM_ANIMATION)
    art = lv_animimg_create(widget->obj);
    lv_obj_center(art);

    lv_animimg_set_src(art, (const void **)crystal_imgs, 16);
    lv_animimg_set_duration(art, CONFIG_NICE_OLED_GEM_ANIMATION_MS);
    lv_animimg_set_repeat_count(art, LV_ANIM_REPEAT_INFINITE);
    lv_animimg_start(art);

#elif IS_ENABLED(CONFIG_NICE_OLED_POKEMON_ANIMATION)
    /* If we have the Pokémon animation enabled */
    art = lv_animimg_create(widget->obj);
    lv_obj_center(art);

    lv_animimg_set_src(art, (const void **)pokemon_imgs, 20);
    lv_animimg_set_duration(art, CONFIG_NICE_OLED_POKEMON_ANIMATION_MS);
    lv_animimg_set_repeat_count(art, LV_ANIM_REPEAT_INFINITE);
    lv_animimg_start(art);

#elif IS_ENABLED(CONFIG_NICE_OLED_OMISSIAH_ANIMATION)
    /* If we have the Omnissiah animation enabled */
    art = lv_animimg_create(widget->obj);
    lv_obj_center(art);

    lv_animimg_set_src(art, (const void **)omnissiah_imgs, 32);
    lv_animimg_set_duration(art, CONFIG_NICE_OLED_OMNISSIAH_ANIMATION_MS);
    lv_animimg_set_repeat_count(art, LV_ANIM_REPEAT_INFINITE);
    lv_animimg_start(art);

#elif IS_ENABLED(NICE_OLED_ULTRAMAR_ANIMATION)
    /* If we have the Omnissiah animation enabled */
    art = lv_animimg_create(widget->obj);
    lv_obj_center(art);

    lv_animimg_set_src(art, (const void **)ultramar_imgs, 32);
    lv_animimg_set_duration(art, CONFIG_NICE_OLED_ULTRAMAR_ANIMATION_MS);
    lv_animimg_set_repeat_count(art, LV_ANIM_REPEAT_INFINITE);
    lv_animimg_start(art);

#elif IS_ENABLED(NICE_OLED_TRANSMUTATION_ANIMATION)
    /* If we have the Omnissiah animation enabled */
    art = lv_animimg_create(widget->obj);
    lv_obj_center(art);

    lv_animimg_set_src(art, (const void **)transmutation_imgs, 32);
    lv_animimg_set_duration(art, CONFIG_NICE_OLED_TRANSMUTATION_ANIMATION_MS);
    lv_animimg_set_repeat_count(art, LV_ANIM_REPEAT_INFINITE);
    lv_animimg_start(art);

#else
    /* If we do not want animation (for example, config nice oled gem animation
     * = n) Then we load a fixed image (you can choose it or make it random).
     * IMPORTANT: Crystal IMGS must be defined in some #if previous or
     * elsewhere. If not, you should create your arrangement with fixed images.
     */

    /* Random image example: */
    int length = sizeof(crystal_imgs) / sizeof(crystal_imgs[0]);
    srand(k_uptime_get_32());
    int random_index = rand() % length;

    art = lv_img_create(widget->obj);
    lv_img_set_src(art, crystal_imgs[random_index]);
#endif

#if IS_ENABLED(CONFIG_NICE_OLED_VIM)
    /* Additional fixed image example */
    art2 = lv_img_create(widget->obj);
    lv_img_set_src(art2, FIXED_IMAGE_1);
#endif

#if IS_ENABLED(CONFIG_NICE_OLED_VIP_MARCOS)
    /* Another additional fixed image */
    if (!art2) {
        art2 = lv_img_create(widget->obj);
    }
    lv_img_set_src(art2, FIXED_IMAGE_2);
#endif

    /* Finally, we position if there is something in art or art2 */
    if (art) {
#if IS_ENABLED(CONFIG_NICE_OLED_GEM_ANIMATION || NICE_OLED_OMNISSIAH_ANIMATION || NICE_OLED_ULTRAMAR_ANIMATION)
        /* coordinate adjustment if it was Gem/Omnissiah/Ultramar animation */
        lv_obj_align(art, LV_ALIGN_TOP_LEFT, 18, -18);
#elif IS_ENABLED(CONFIG_NICE_OLED_POKEMON_ANIMATION)
        /* coordinate adjustment if it was the Pokémon animation */
        lv_obj_align(art, LV_ALIGN_TOP_LEFT, -40, -18);
#elif IS_ENABLED(CONFIG_NICE_OLED_TRANSMUTATION_ANIMATION)
        /* coordinate adjustment if it was Transmutation animation */
        lv_obj_align(art, LV_ALIGN_TOP_LEFT, -40, -18);
#else
        /* Fixed image adjustment */
        lv_obj_align(art, LV_ALIGN_TOP_LEFT, 18, -18);
#endif
    }

    if (art2) {
        /* Second image coordinate adjustment */
        lv_obj_align(art2, LV_ALIGN_TOP_LEFT, 2, 0);
    }
}
#endif
