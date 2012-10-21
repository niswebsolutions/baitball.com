<?php
/**
 * @file
 * stretch_slider_banner.features.inc
 */

/**
 * Implements hook_views_api().
 */
function stretch_slider_banner_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function stretch_slider_banner_image_default_styles() {
  $styles = array();

  // Exported image style: front_page_banner.
  $styles['front_page_banner'] = array(
    'name' => 'front_page_banner',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => '480',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function stretch_slider_banner_node_info() {
  $items = array(
    'front_page_banner' => array(
      'name' => t('Front Page Banner'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
