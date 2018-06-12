<?php

/**
 * Implements hook_preprocess_hook() for form label templates.
 *
 */
function material_preprocess_form_element(&$variables) {
  $element = $variables['element'];
  $variables['label_text'] = isset($element['#title']) ? $element['#title'] : '';
  $variables['input_id'] = isset($element['#id']) ? $element['#id'] : '';
}
