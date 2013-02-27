<?php
/**
 * @file
 * gsb_feature_business_insight_ct.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gsb_feature_business_insight_ct_taxonomy_default_vocabularies() {
  return array(
    'academic_area' => array(
      'name' => 'Academic Area',
      'machine_name' => 'academic_area',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'business_insight_topic' => array(
      'name' => 'Business Insight Topic',
      'machine_name' => 'business_insight_topic',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'company_organization' => array(
      'name' => 'Company/Organization',
      'machine_name' => 'company_organization',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'industry' => array(
      'name' => 'Industry',
      'machine_name' => 'industry',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'region' => array(
      'name' => 'Region',
      'machine_name' => 'region',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'target_audience' => array(
      'name' => 'Target Audience',
      'machine_name' => 'target_audience',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
