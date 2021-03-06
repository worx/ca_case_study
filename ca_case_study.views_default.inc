<?php
/**
 * @file
 * ca_case_study.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ca_case_study_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ca_case_study_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Case Study Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'feed_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'case_study' => 'case_study',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: CA Case Study: Admin */
  $handler = $view->new_display('panel_pane', 'CA Case Study: Admin', 'ca_case_study_admin');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'CA Case Study: Admin';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['ca_case_study_admin'] = $view;

  $view = new view();
  $view->name = 'ca_case_study_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Case Study Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'feed_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Screenshot */
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['id'] = 'field_ca_case_study_c_screenshot';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['table'] = 'field_data_field_ca_case_study_c_screenshot';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['field'] = 'field_ca_case_study_c_screenshot';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['label'] = '';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['settings'] = array(
    'image_style' => 'case_study_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '700',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_ca_case_study_c_linklink']['id'] = 'field_ca_case_study_c_linklink';
  $handler->display->display_options['fields']['field_ca_case_study_c_linklink']['table'] = 'field_data_field_ca_case_study_c_linklink';
  $handler->display->display_options['fields']['field_ca_case_study_c_linklink']['field'] = 'field_ca_case_study_c_linklink';
  $handler->display->display_options['fields']['field_ca_case_study_c_linklink']['label'] = '';
  $handler->display->display_options['fields']['field_ca_case_study_c_linklink']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_ca_case_study_c_linklink']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_case_study_c_linklink']['click_sort_column'] = 'url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['addtoany_link']['id'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['table'] = 'node';
  $handler->display->display_options['fields']['addtoany_link']['field'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['label'] = '';
  $handler->display->display_options['fields']['addtoany_link']['element_class'] = 'ca-addtoany-feature';
  $handler->display->display_options['fields']['addtoany_link']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'case_study' => 'case_study',
  );

  /* Display: CA Case Study: Case Study Block Template One */
  $handler = $view->new_display('block', 'CA Case Study: Case Study Block Template One', 'ca_case_study_block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Most Recent Case Study';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'CA Case Study: Case Study Block Template One';
  $export['ca_case_study_block'] = $view;

  $view = new view();
  $view->name = 'ca_case_study_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Case Study List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'feed_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Coming soon.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Screenshot */
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['id'] = 'field_ca_case_study_c_screenshot';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['table'] = 'field_data_field_ca_case_study_c_screenshot';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['field'] = 'field_ca_case_study_c_screenshot';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['label'] = '';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '700',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_ca_case_study_c_linklink']['id'] = 'field_ca_case_study_c_linklink';
  $handler->display->display_options['fields']['field_ca_case_study_c_linklink']['table'] = 'field_data_field_ca_case_study_c_linklink';
  $handler->display->display_options['fields']['field_ca_case_study_c_linklink']['field'] = 'field_ca_case_study_c_linklink';
  $handler->display->display_options['fields']['field_ca_case_study_c_linklink']['label'] = '';
  $handler->display->display_options['fields']['field_ca_case_study_c_linklink']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_ca_case_study_c_linklink']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_case_study_c_linklink']['click_sort_column'] = 'url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['addtoany_link']['id'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['table'] = 'node';
  $handler->display->display_options['fields']['addtoany_link']['field'] = 'addtoany_link';
  $handler->display->display_options['fields']['addtoany_link']['label'] = '';
  $handler->display->display_options['fields']['addtoany_link']['element_class'] = 'ca-addtoany-feature';
  $handler->display->display_options['fields']['addtoany_link']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'case_study' => 'case_study',
  );

  /* Display: CA Case Study: List Template One */
  $handler = $view->new_display('panel_pane', 'CA Case Study: List Template One', 'ca_case_study_list_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'CA Case Study: List Template One';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'ca_case_study_feed');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['path'] = 'case-study/feed';
  $handler->display->display_options['displays'] = array(
    'ca_case_study_list_1' => 'ca_case_study_list_1',
    'default' => 0,
    'ca_case_study_block_1' => 0,
    'ca_case_study_admin' => 0,
    'ca_case_study_node_1' => 0,
  );
  $export['ca_case_study_list'] = $view;

  $view = new view();
  $view->name = 'ca_case_study_node';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Case Study Node';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'feed_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Screenshot */
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['id'] = 'field_ca_case_study_c_screenshot';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['table'] = 'field_data_field_ca_case_study_c_screenshot';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['field'] = 'field_ca_case_study_c_screenshot';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['label'] = '';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['settings'] = array(
    'colorbox_node_style' => 'crop_default_landscape',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'case_study' => 'case_study',
  );

  /* Display: CA Case Study: Node Template One A */
  $handler = $view->new_display('panel_pane', 'CA Case Study: Node Template One A', 'ca_case_study_node_1_a');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'CA Case Study: Node Template One A';

  /* Display: CA Case Study: Node Template One B */
  $handler = $view->new_display('panel_pane', 'CA Case Study: Node Template One B', 'ca_case_study_node_1_b');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Screenshot */
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['id'] = 'field_ca_case_study_c_screenshot';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['table'] = 'field_data_field_ca_case_study_c_screenshot';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['field'] = 'field_ca_case_study_c_screenshot';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['label'] = '';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['settings'] = array(
    'colorbox_node_style' => 'crop_default_landscape_thumbnail',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ca_case_study_c_screenshot']['delta_offset'] = '0';
  $handler->display->display_options['pane_title'] = 'CA Case Study: Node Template One B';
  $export['ca_case_study_node'] = $view;

  return $export;
}
