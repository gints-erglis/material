<?php
/**
 * Implements hook_theme_suggestions_HOOK_alter().
 *
 * Provide additional suggestions for entity forms.
 */
function material_theme_suggestions_form_alter(&$suggestions, $variables) {
  if (isset($variables['element']['#entity_type'])) {
    $suggestions[] = 'form__entity';
    $suggestions[] = 'form__' . $variables['element']['#entity_type'];
  }
}

/**
 * Implements hook_theme_suggestions_HOOK_alter().
 */
function material_theme_suggestions_input_alter(&$suggestions, array $variables) {
  $element = $variables['element'];
  if (isset($element['#attributes']['data-twig-suggestion'])) {
    $suggestions[] = 'input__' . $element['#type'] . '__' . $element['#attributes']['data-twig-suggestion'];
  }
}

/**
 * Implements hook_theme_suggestions_HOOK_alter().
 */
function material_theme_suggestions_form_element_alter(array &$suggestions, array $variables, $hook) {
  // Add type variant.
  $suggestions[] = $hook . '__' . $variables['element']['#type'];
}