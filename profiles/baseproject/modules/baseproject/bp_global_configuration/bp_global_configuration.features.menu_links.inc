<?php
/**
 * @file
 * bp_global_configuration.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bp_global_configuration_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: devel_theme-registry:devel/theme/registry
  $menu_links['devel_theme-registry:devel/theme/registry'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/theme/registry',
    'router_path' => 'devel/theme/registry',
    'link_title' => 'Theme registry',
    'options' => array(
      'attributes' => array(
        'title' => 'View a list of available theme functions across the whole site.',
      ),
      'identifier' => 'devel_theme-registry:devel/theme/registry',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Theme registry');


  return $menu_links;
}
