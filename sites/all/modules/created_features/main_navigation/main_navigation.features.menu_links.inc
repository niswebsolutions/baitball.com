<?php
/**
 * @file
 * main_navigation.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function main_navigation_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<view>
  $menu_links['main-menu:<view>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<view>',
    'router_path' => '<view>',
    'link_title' => '',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_views' => array(
        'mlid' => '1097',
        'type' => 'view',
        'original_path' => '',
        'view' => array(
          'name' => 'main_navigation',
          'display' => 'default',
          'arguments' => '',
          'settings' => array(
            'breadcrumb' => 1,
            'breadcrumb_title' => '',
            'breadcrumb_path' => '<front>',
            'title' => 0,
            'title_wrapper' => '',
            'title_classes' => '',
            'title_override' => '',
          ),
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'shop',
  );
  // Exported menu link: main-menu:shop
  $menu_links['main-menu:shop'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'shop',
    'router_path' => 'shop',
    'link_title' => 'Shop',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Shop');


  return $menu_links;
}
