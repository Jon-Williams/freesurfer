#ifndef FIELD_CODE_INCLUDED
#define FIELD_CODE_INCLUDED

#define NUMBER_OF_VECTORIAL_FIELDS 14

/* field code: definition of the field type*/
#define INFLATED_CURV_CORR_FRAME       0
#define SULC_CORR_FRAME                1
#define CURVATURE_CORR_FRAME           2 
#define GRAYMID_CORR_FRAME             3
#define T1MID_CORR_FRAME               4 
#define T2MID_CORR_FRAME               5
#define PDMID_CORR_FRAME               6
#define AMYGDALA_CORR_FRAME            7 
#define HIPPOCAMPUS_CORR_FRAME         8
#define PALLIDUM_CORR_FRAME            9
#define PUTAMEN_CORR_FRAME            10
#define CAUDATE_CORR_FRAME            11
#define LAT_VENTRICLE_CORR_FRAME      12
#define INF_LAT_VENTRICLE_CORR_FRAME  13 

/* surface names */
#define INFLATED_CURVATURE_NAME         NULL      /* directly computed */
#define SULC_NAME                      "sulc"
#define CURVATURE_NAME                 NULL       /* directly computed */
/* GRAYMID_NAME  should already have been defined in mrisurf.h  */
#ifndef GRAYMID_NAME
#define GRAYMID_NAME                   "graymid"
#endif
#define		T1MID_NAME                   "T1mid"   
#define		T2MID_NAME                   "T2mid"
#define		PDMID_NAME                   "PDmid"
#define		AMYGDALA_DIST_NAME           "amygdala_dist"
#define		HIPPOCAMPUS_DIST_NAME        "hippocampus_dist"  
#define		PALLIDUM_DIST_NAME           "pallidum_dist"
#define		PUTAMEN_DIST_NAME            "putamen_dist"
#define		CAUDATE_DIST_NAME            "caudate_dist" 
#define		LAT_VENTRICLE_DIST_NAME      "latventricle_dist"   
#define		INF_LAT_VENTRICLE_DIST_NAME  "inflatventricle_dist"

char *ReturnFieldName(int which_field);
int IsDistanceField(int which_field);

#endif
