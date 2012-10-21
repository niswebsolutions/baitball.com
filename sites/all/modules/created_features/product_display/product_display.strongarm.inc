<?php
/**
 * @file
 * product_display.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function product_display_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_product_display';
  $strongarm->value = 0;
  $export['comment_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_billing_field';
  $strongarm->value = 'commerce_customer_billing';
  $export['commerce_customer_profile_billing_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_product__product';
  $strongarm->value = array(
    'view_modes' => array(
      'line_item' => array(
        'custom_settings' => TRUE,
      ),
      'node_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_display' => array(
        'custom_settings' => FALSE,
      ),
      'node_full' => array(
        'custom_settings' => FALSE,
      ),
      'node_rss' => array(
        'custom_settings' => FALSE,
      ),
      'node_search_index' => array(
        'custom_settings' => FALSE,
      ),
      'node_search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'sku' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'title' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_product__product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__product_display';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
        'product:field_image' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_product_display';
  $strongarm->value = FALSE;
  $export['node_submitted_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_product_display_pattern';
  $strongarm->value = 'shop/[node:field-product-category]/[node:title]';
  $export['pathauto_node_product_display_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_product_category_pattern';
  $strongarm->value = 'shop/[term:name]';
  $export['pathauto_taxonomy_term_product_category_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_product_demographic_pattern';
  $strongarm->value = 'shop/[term:name]';
  $export['pathauto_taxonomy_term_product_demographic_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_descendants_product_category';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_descendants_product_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_num_product_category';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_num_product_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_end_all_product_category';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_end_all_product_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_expanded_product_category';
  $strongarm->value = 0;
  $export['taxonomy_menu_expanded_product_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_flat_product_category';
  $strongarm->value = 0;
  $export['taxonomy_menu_flat_product_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_hide_empty_terms_product_category';
  $strongarm->value = 1;
  $export['taxonomy_menu_hide_empty_terms_product_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_path_product_category';
  $strongarm->value = 'taxonomy_menu_path_default';
  $export['taxonomy_menu_path_product_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_rebuild_product_category';
  $strongarm->value = 0;
  $export['taxonomy_menu_rebuild_product_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_sync_product_category';
  $strongarm->value = 1;
  $export['taxonomy_menu_sync_product_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_term_item_description_product_category';
  $strongarm->value = 0;
  $export['taxonomy_menu_term_item_description_product_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_menu_product_category';
  $strongarm->value = 'main-menu';
  $export['taxonomy_menu_vocab_menu_product_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_parent_product_category';
  $strongarm->value = '990';
  $export['taxonomy_menu_vocab_parent_product_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_item_description_product_category';
  $strongarm->value = 0;
  $export['taxonomy_menu_voc_item_description_product_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_item_product_category';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_voc_item_product_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_name_product_category';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_voc_name_product_category'] = $strongarm;

  return $export;
}
