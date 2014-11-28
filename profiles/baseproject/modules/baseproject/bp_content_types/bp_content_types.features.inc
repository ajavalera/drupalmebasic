<?php
/**
 * @file
 * bp_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bp_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function bp_content_types_node_info() {
  $items = array(
    'static_page' => array(
      'name' => t('Static page'),
      'base' => 'node_content',
      'description' => t('Basic page for static content. Not by dates.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
