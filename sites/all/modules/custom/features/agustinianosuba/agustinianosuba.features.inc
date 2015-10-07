<?php
/**
 * @file
 * agustinianosuba.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function agustinianosuba_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function agustinianosuba_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function agustinianosuba_node_info() {
  $items = array(
    'banner_principal' => array(
      'name' => t('Banner Principal'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Banner Principal'),
      'help' => '',
    ),
    'evento' => array(
      'name' => t('Evento'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'galeria' => array(
      'name' => t('Galeria'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
