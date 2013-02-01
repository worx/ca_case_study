<?php

/**
 * @file
 * Plugin to provide access control based upon ca_case_study admin settings.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Case Study: node type'),
  'description' => t('Control access by case study node type.'),
  'callback' => 'ca_case_study_node_template_access_check',
  'settings form' => 'ca_case_study_node_template_access_settings',
  'settings form submit' => 'ca_case_study_node_template_access_settings_submit',
  'summary' => 'ca_case_study_node_template_access_summary',
);

/**
 * Settings form for the 'by case study node type' access plugin.
 */
function ca_case_study_node_template_access_settings($form, &$form_state, $conf) {
  $form['settings']['ca_case_study_node_template'] = array(
    '#type' => 'select',
    '#title' => t('Case Study\'s node template'),
    '#options' => array(
      'ca_case_study_node_template_one' => t('Template one'),
      'ca_case_study_node_template_two' => t('Template two'),
      'ca_case_study_node_template_three' => t('Template three'),
    ),
    '#required' => TRUE,
    '#default_value' => $conf['ca_case_study_node_template'],
  );

  return $form;
}

/**
 * Settings form submission.
 */
function ca_case_study_node_template_access_settings_form($form, &$form_state) {
}

/**
 * Check for access.
 */
function ca_case_study_node_template_access_check($conf, $context) {
  return $conf['ca_case_study_node_template'] == variable_get('ca_case_study_node_template', 'ca_case_study_node_template_one');
}

/**
 * Provide a summary description based upon the checked case study node type.
 */
function ca_case_study_node_template_access_summary($conf, $context) {
  if ($conf['ca_case_study_node_template'] == 'ca_case_study_node_template_one') {
    $template = t('Template one');
  }
  elseif ($conf['ca_case_study_node_template'] == 'ca_case_study_node_template_two') {
    $template = t('Template two');
  }
  else {
    $template = t('Template three');
  }

  return t('Display template is set to: ' . $template);
}
