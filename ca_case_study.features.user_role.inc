<?php
/**
 * @file
 * ca_case_study.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ca_case_study_user_default_roles() {
  $roles = array();

  // Exported role: case study admin.
  $roles['case study admin'] = array(
    'name' => 'case study admin',
    'weight' => 6,
    'machine_name' => 'case_study_admin',
  );

  return $roles;
}
