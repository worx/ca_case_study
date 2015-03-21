<?php
/**
 * @file
 * ca_case_study.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ca_case_study_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ca_case_study_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ca_case_study_image_default_styles() {
  $styles = array();

  // Exported image style: case_study_default.
  $styles['case_study_default'] = array(
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -10,
      ),
      9 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 200,
          'height' => 150,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'case_study_default',
  );

  // Exported image style: case_study_default_thumbnail.
  $styles['case_study_default_thumbnail'] = array(
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 45,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      10 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 45,
          'height' => 34,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'case_study_default_thumbnail',
  );

  // Exported image style: case_study_thumbnail.
  $styles['case_study_thumbnail'] = array(
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 110,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      11 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 110,
          'height' => 83,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'case_study_thumbnail',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ca_case_study_node_info() {
  $items = array(
    'case_study' => array(
      'name' => t('Case Study'),
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
