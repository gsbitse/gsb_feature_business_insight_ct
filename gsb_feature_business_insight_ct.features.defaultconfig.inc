<?php
/**
 * @file
 * gsb_feature_business_insight_ct.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function gsb_feature_business_insight_ct_defaultconfig_features() {
  return array(
    'gsb_feature_business_insight_ct' => array(
      'field_group_info' => 'field_group_info',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_group_info().
 */
function gsb_feature_business_insight_ct_defaultconfig_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|business_insight|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'business_insight';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '10',
    'children' => array(
      0 => 'field_business_insight_topic',
      1 => 'field_company_organization',
      2 => 'field_discipline',
      3 => 'field_industry',
      4 => 'field_region',
      5 => 'field_tag',
      6 => 'field_target_audience',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_taxonomy|node|business_insight|form'] = $field_group;

  return $export;
}