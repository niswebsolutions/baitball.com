<?php
/**
 * @file
 * stretch_slider_banner.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stretch_slider_banner_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'front_page_banner';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front Page Banner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_link_to_content' => 0,
    'field_banner_image' => 0,
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_hover'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 'title',
    'field_link_to_content' => 0,
    'field_banner_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollLeft';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['fixed_height'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<div id="left-fadein"></div>
<div id="right-fadein"></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* Field: Content: Link to Content */
  $handler->display->display_options['fields']['field_link_to_content']['id'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['table'] = 'field_data_field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['field'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['label'] = '';
  $handler->display->display_options['fields']['field_link_to_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_link_to_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_link_to_content']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_link_to_content']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_link_to_content']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_link_to_content']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_to_content']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_link_to_content']['field_api_classes'] = 0;
  /* Field: Content: Banner Image */
  $handler->display->display_options['fields']['field_banner_image']['id'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['field'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_banner_image']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_banner_image']['alter']['text'] = '<div class="images">[field_banner_image]</div>
<a class="button" href="[field_link_to_content]">Shop</a>';
  $handler->display->display_options['fields']['field_banner_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_banner_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_banner_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_banner_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_banner_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_banner_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_banner_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_banner_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_banner_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_banner_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_banner_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_banner_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_banner_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_banner_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_banner_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_image']['settings'] = array(
    'image_style' => 'front_page_banner',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_banner_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'front_page_banner' => 'front_page_banner',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['front_page_banner'] = $view;

  return $export;
}
