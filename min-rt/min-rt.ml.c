#include"csyntax.c"

typedef int fun_int_int_int_bool_Value(int size_x82044, int size_y82045, bool debug_p82046, Value *env);
typedef int fun_int_int_double_Value(int nref82031, double energy82032, Value *env);
typedef int fun_int_array_array_double_Value(Value* v182027, Value* v282028, double w82029, Value *env);
typedef double fun_double_array_array_Value(Value* v182024, Value* v282025, Value *env);
typedef bool fun_bool_array_array_Value(Value* viewpoint82005, Value* vscan82006, Value *env);
typedef int fun_int_int_array_Value(int iand_ofs81996, Value* and_group81997, Value *env);
typedef bool fun_bool_int_array_array_Value(int iand_ofs81984, Value* and_group81985, Value* p81986, Value *env);
typedef bool fun_bool_int_array_Value(int ofs81981, Value* iand81982, Value *env);
typedef int fun_int_int_array_array_Value(int index81969, Value* l81970, Value* p81971, Value *env);
typedef double fun_double_tuple_array_Value(int* m81954, Value* v81955, Value *env);
typedef int fun_int_tuple_array_Value(int* m81948, Value* l81949, Value *env);
typedef Value* fun_array_int_Value(int length81942, Value *env);
typedef bool fun_bool_int_Value(int n81934, Value *env);
typedef int fun_int_int_Value(int Tu7990581932, Value *env);
typedef int fun_int_array_bool_Value(Value* v81925, bool inv81926, Value *env);
typedef double fun_double_tuple_Value(int* m81897, Value *env);
typedef bool fun_bool_tuple_Value(int* m81893, Value *env);
typedef int fun_int_tuple_Value(int* m81887, Value *env);
typedef double fun_double_double_Value(double x81883, Value *env);
typedef bool fun_bool_bool_bool_Value(bool x81880, bool y81881, Value *env);

Value* and_net;
Value* beam;
Value* chkinside_p;
Value* cos_v;
Value* crashed_object;
Value* crashed_point;
Value* cs_temp;
Value* dbg;
Value* end_flag;
Value* intsec_rectside;
Value* isoutside_q;
Value* light;
Value* nvector;
Value* nvector_w;
Value* objects;
Value* or_net;
Value* rgb;
Value* scan_d;
Value* scan_met1;
Value* scan_offset;
Value* scan_sscany;
Value* screen;
Value* sin_v;
Value* size;
Value* solver_dist;
Value* solver_w_vec;
Value* texture_color;
Value* tmin;
Value* view;
Value* viewpoint;
Value* vp;
Value* vscan;
Value* wscan;

bool xor81879_fun(bool x81880, bool y81881, Value *env){
    bool result;
    int Ti8187784340;
    Ti8187784340 = 0;
    if(x81880 == Ti8187784340){
	result = y81881;
    }
    else{
	int Ti8187884341;
	Ti8187884341 = 0;
	if(y81881 == Ti8187884341){
	    result = 1;
	}
	else{
	    result = 0;
	}
    }
    return result;
}

double fsqr81882_fun(double x81883, Value *env){
    double result;
    result =  x81883 * x81883;
    return result;
}

double fhalf81884_fun(double x81885, Value *env){
    double result;
    double Td8187684339;
    Td8187684339 = 2.000000;
    result = x81885 / Td8187684339;
    return result;
}

int o_texturetype81886_fun(int* m81887, Value *env){
    int result;
    int m_tex84329 = m81887[0];
    int xm_shape84330 = m81887[1];
    int xm_surface84331 = m81887[2];
    int xm_isrot84332 = m81887[3];
    Value* xm_abc84333 = m81887[4];
    Value* xm_xyz84334 = m81887[5];
    bool xm_invert84335 = m81887[6];
    Value* xm_surfparams84336 = m81887[7];
    Value* xm_color84337 = m81887[8];
    Value* xm_rot12384338 = m81887[9];
    result = m_tex84329;
    return result;
}

int o_form81888_fun(int* m81889, Value *env){
    int result;
    int xm_tex84319 = m81889[0];
    int m_shape84320 = m81889[1];
    int xm_surface84321 = m81889[2];
    int xm_isrot84322 = m81889[3];
    Value* xm_abc84323 = m81889[4];
    Value* xm_xyz84324 = m81889[5];
    bool xm_invert84325 = m81889[6];
    Value* xm_surfparams84326 = m81889[7];
    Value* xm_color84327 = m81889[8];
    Value* xm_rot12384328 = m81889[9];
    result = m_shape84320;
    return result;
}

int o_reflectiontype81890_fun(int* m81891, Value *env){
    int result;
    int xm_tex84309 = m81891[0];
    int xm_shape84310 = m81891[1];
    int m_surface84311 = m81891[2];
    int xm_isrot84312 = m81891[3];
    Value* xm_abc84313 = m81891[4];
    Value* xm_xyz84314 = m81891[5];
    bool xm_invert84315 = m81891[6];
    Value* xm_surfparams84316 = m81891[7];
    Value* xm_color84317 = m81891[8];
    Value* xm_rot12384318 = m81891[9];
    result = m_surface84311;
    return result;
}

bool o_isinvert81892_fun(int* m81893, Value *env){
    bool result;
    int m_tex84299 = m81893[0];
    int m_shape84300 = m81893[1];
    int m_surface84301 = m81893[2];
    int m_isrot84302 = m81893[3];
    Value* xm_abc84303 = m81893[4];
    Value* xm_xyz84304 = m81893[5];
    bool m_invert84305 = m81893[6];
    Value* xm_surfparams84306 = m81893[7];
    Value* xm_color84307 = m81893[8];
    Value* xm_rot12384308 = m81893[9];
    result = m_invert84305;
    return result;
}

int o_isrot81894_fun(int* m81895, Value *env){
    int result;
    int xm_tex84289 = m81895[0];
    int xm_shape84290 = m81895[1];
    int xm_surface84291 = m81895[2];
    int m_isrot84292 = m81895[3];
    Value* xm_abc84293 = m81895[4];
    Value* xm_xyz84294 = m81895[5];
    bool xm_invert84295 = m81895[6];
    Value* xm_surfparams84296 = m81895[7];
    Value* xm_color84297 = m81895[8];
    Value* xm_rot12384298 = m81895[9];
    result = m_isrot84292;
    return result;
}

double o_param_a81896_fun(int* m81897, Value *env){
    double result;
    int xm_tex84278 = m81897[0];
    int xm_shape84279 = m81897[1];
    int xm_surface84280 = m81897[2];
    int xm_isrot84281 = m81897[3];
    Value* m_abc84282 = m81897[4];
    Value* xm_xyz84283 = m81897[5];
    bool xm_invert84284 = m81897[6];
    Value* xm_surfparams84285 = m81897[7];
    Value* xm_color84286 = m81897[8];
    Value* xm_rot12384287 = m81897[9];
    int Ti8187584288;
    Ti8187584288 = 0;
    result = m_abc84282[Ti8187584288].d;
    return result;
}

double o_param_b81898_fun(int* m81899, Value *env){
    double result;
    int xm_tex84267 = m81899[0];
    int xm_shape84268 = m81899[1];
    int xm_surface84269 = m81899[2];
    int xm_isrot84270 = m81899[3];
    Value* m_abc84271 = m81899[4];
    Value* xm_xyz84272 = m81899[5];
    bool xm_invert84273 = m81899[6];
    Value* xm_surfparams84274 = m81899[7];
    Value* xm_color84275 = m81899[8];
    Value* xm_rot12384276 = m81899[9];
    int Ti8187484277;
    Ti8187484277 = 1;
    result = m_abc84271[Ti8187484277].d;
    return result;
}

double o_param_c81900_fun(int* m81901, Value *env){
    double result;
    int xm_tex84256 = m81901[0];
    int xm_shape84257 = m81901[1];
    int xm_surface84258 = m81901[2];
    int xm_isrot84259 = m81901[3];
    Value* m_abc84260 = m81901[4];
    Value* xm_xyz84261 = m81901[5];
    bool xm_invert84262 = m81901[6];
    Value* xm_surfparams84263 = m81901[7];
    Value* xm_color84264 = m81901[8];
    Value* xm_rot12384265 = m81901[9];
    int Ti8187384266;
    Ti8187384266 = 2;
    result = m_abc84260[Ti8187384266].d;
    return result;
}

double o_param_x81902_fun(int* m81903, Value *env){
    double result;
    int xm_tex84245 = m81903[0];
    int xm_shape84246 = m81903[1];
    int xm_surface84247 = m81903[2];
    int xm_isrot84248 = m81903[3];
    Value* xm_abc84249 = m81903[4];
    Value* m_xyz84250 = m81903[5];
    bool xm_invert84251 = m81903[6];
    Value* xm_surfparams84252 = m81903[7];
    Value* xm_color84253 = m81903[8];
    Value* xm_rot12384254 = m81903[9];
    int Ti8187284255;
    Ti8187284255 = 0;
    result = m_xyz84250[Ti8187284255].d;
    return result;
}

double o_param_y81904_fun(int* m81905, Value *env){
    double result;
    int xm_tex84234 = m81905[0];
    int xm_shape84235 = m81905[1];
    int xm_surface84236 = m81905[2];
    int xm_isrot84237 = m81905[3];
    Value* xm_abc84238 = m81905[4];
    Value* m_xyz84239 = m81905[5];
    bool xm_invert84240 = m81905[6];
    Value* xm_surfparams84241 = m81905[7];
    Value* xm_color84242 = m81905[8];
    Value* xm_rot12384243 = m81905[9];
    int Ti8187184244;
    Ti8187184244 = 1;
    result = m_xyz84239[Ti8187184244].d;
    return result;
}

double o_param_z81906_fun(int* m81907, Value *env){
    double result;
    int xm_tex84223 = m81907[0];
    int xm_shape84224 = m81907[1];
    int xm_surface84225 = m81907[2];
    int xm_isrot84226 = m81907[3];
    Value* xm_abc84227 = m81907[4];
    Value* m_xyz84228 = m81907[5];
    bool xm_invert84229 = m81907[6];
    Value* xm_surfparams84230 = m81907[7];
    Value* xm_color84231 = m81907[8];
    Value* xm_rot12384232 = m81907[9];
    int Ti8187084233;
    Ti8187084233 = 2;
    result = m_xyz84228[Ti8187084233].d;
    return result;
}

double o_diffuse81908_fun(int* m81909, Value *env){
    double result;
    int xm_tex84212 = m81909[0];
    int xm_shape84213 = m81909[1];
    int xm_surface84214 = m81909[2];
    int xm_isrot84215 = m81909[3];
    Value* xm_abc84216 = m81909[4];
    Value* xm_xyz84217 = m81909[5];
    bool xm_invert84218 = m81909[6];
    Value* m_surfparams84219 = m81909[7];
    Value* xm_color84220 = m81909[8];
    Value* xm_rot12384221 = m81909[9];
    int Ti8186984222;
    Ti8186984222 = 0;
    result = m_surfparams84219[Ti8186984222].d;
    return result;
}

double o_hilight81910_fun(int* m81911, Value *env){
    double result;
    int xm_tex84201 = m81911[0];
    int xm_shape84202 = m81911[1];
    int xm_surface84203 = m81911[2];
    int xm_isrot84204 = m81911[3];
    Value* xm_abc84205 = m81911[4];
    Value* xm_xyz84206 = m81911[5];
    bool xm_invert84207 = m81911[6];
    Value* m_surfparams84208 = m81911[7];
    Value* xm_color84209 = m81911[8];
    Value* xm_rot12384210 = m81911[9];
    int Ti8186884211;
    Ti8186884211 = 1;
    result = m_surfparams84208[Ti8186884211].d;
    return result;
}

double o_color_red81912_fun(int* m81913, Value *env){
    double result;
    int xm_tex84190 = m81913[0];
    int xm_shape84191 = m81913[1];
    int m_surface84192 = m81913[2];
    int xm_isrot84193 = m81913[3];
    Value* xm_abc84194 = m81913[4];
    Value* xm_xyz84195 = m81913[5];
    bool xm_invert84196 = m81913[6];
    Value* xm_surfparams84197 = m81913[7];
    Value* m_color84198 = m81913[8];
    Value* xm_rot12384199 = m81913[9];
    int Ti8186784200;
    Ti8186784200 = 0;
    result = m_color84198[Ti8186784200].d;
    return result;
}

double o_color_green81914_fun(int* m81915, Value *env){
    double result;
    int xm_tex84179 = m81915[0];
    int xm_shape84180 = m81915[1];
    int m_surface84181 = m81915[2];
    int xm_isrot84182 = m81915[3];
    Value* xm_abc84183 = m81915[4];
    Value* xm_xyz84184 = m81915[5];
    bool xm_invert84185 = m81915[6];
    Value* xm_surfparams84186 = m81915[7];
    Value* m_color84187 = m81915[8];
    Value* xm_rot12384188 = m81915[9];
    int Ti8186684189;
    Ti8186684189 = 1;
    result = m_color84187[Ti8186684189].d;
    return result;
}

double o_color_blue81916_fun(int* m81917, Value *env){
    double result;
    int xm_tex84168 = m81917[0];
    int xm_shape84169 = m81917[1];
    int m_surface84170 = m81917[2];
    int xm_isrot84171 = m81917[3];
    Value* xm_abc84172 = m81917[4];
    Value* xm_xyz84173 = m81917[5];
    bool xm_invert84174 = m81917[6];
    Value* xm_surfparams84175 = m81917[7];
    Value* m_color84176 = m81917[8];
    Value* xm_rot12384177 = m81917[9];
    int Ti8186584178;
    Ti8186584178 = 2;
    result = m_color84176[Ti8186584178].d;
    return result;
}

double o_param_r181918_fun(int* m81919, Value *env){
    double result;
    int xm_tex84157 = m81919[0];
    int xm_shape84158 = m81919[1];
    int xm_surface84159 = m81919[2];
    int xm_isrot84160 = m81919[3];
    Value* xm_abc84161 = m81919[4];
    Value* xm_xyz84162 = m81919[5];
    bool xm_invert84163 = m81919[6];
    Value* xm_surfparams84164 = m81919[7];
    Value* xm_color84165 = m81919[8];
    Value* m_rot12384166 = m81919[9];
    int Ti8186484167;
    Ti8186484167 = 0;
    result = m_rot12384166[Ti8186484167].d;
    return result;
}

double o_param_r281920_fun(int* m81921, Value *env){
    double result;
    int xm_tex84146 = m81921[0];
    int xm_shape84147 = m81921[1];
    int xm_surface84148 = m81921[2];
    int xm_isrot84149 = m81921[3];
    Value* xm_abc84150 = m81921[4];
    Value* xm_xyz84151 = m81921[5];
    bool xm_invert84152 = m81921[6];
    Value* xm_surfparams84153 = m81921[7];
    Value* xm_color84154 = m81921[8];
    Value* m_rot12384155 = m81921[9];
    int Ti8186384156;
    Ti8186384156 = 1;
    result = m_rot12384155[Ti8186384156].d;
    return result;
}

double o_param_r381922_fun(int* m81923, Value *env){
    double result;
    int xm_tex84135 = m81923[0];
    int xm_shape84136 = m81923[1];
    int xm_surface84137 = m81923[2];
    int xm_isrot84138 = m81923[3];
    Value* xm_abc84139 = m81923[4];
    Value* xm_xyz84140 = m81923[5];
    bool xm_invert84141 = m81923[6];
    Value* xm_surfparams84142 = m81923[7];
    Value* xm_color84143 = m81923[8];
    Value* m_rot12384144 = m81923[9];
    int Ti8186284145;
    Ti8186284145 = 2;
    result = m_rot12384144[Ti8186284145].d;
    return result;
}

int normalize_vector81924_fun(Value* v81925, bool inv81926, Value *env){
    int result;
    int Ti8183884134;
    Ti8183884134 = 0;
    double Td8183984133;
    Td8183984133 = v81925[Ti8183884134].d;
    double Td8184084129;
    Td8184084129 = fsqr81882_fun(Td8183984133, NULL);
    int Ti8184184132;
    Ti8184184132 = 1;
    double Td8184284131;
    Td8184284131 = v81925[Ti8184184132].d;
    double Td8184384130;
    Td8184384130 = fsqr81882_fun(Td8184284131, NULL);
    double Td8184484125;
    Td8184484125 = Td8184084129 + Td8184384130;
    int Ti8184584128;
    Ti8184584128 = 2;
    double Td8184684127;
    Td8184684127 = v81925[Ti8184584128].d;
    double Td8184784126;
    Td8184784126 = fsqr81882_fun(Td8184684127, NULL);
    double Td8184884124;
    Td8184884124 = Td8184484125 + Td8184784126;
    double n084107;
    n084107 = sqrt(Td8184884124);
    int Ti8184984123;
    Ti8184984123 = 0;
    double n84108;
    if(inv81926 == Ti8184984123){
	n84108 = n084107;
    }
    else{
	n84108 = -n084107;
    }
    int Ti8185084119;
    Ti8185084119 = 0;
    int Ti8185184122;
    Ti8185184122 = 0;
    double Td8185284121;
    Td8185284121 = v81925[Ti8185184122].d;
    double Td8185384120;
    Td8185384120 = Td8185284121 / n84108;
    int Tu7990484109;
    v81925[Ti8185084119].d = Td8185384120;
    int Ti8185484115;
    Ti8185484115 = 1;
    int Ti8185584118;
    Ti8185584118 = 1;
    double Td8185684117;
    Td8185684117 = v81925[Ti8185584118].d;
    double Td8185784116;
    Td8185784116 = Td8185684117 / n84108;
    int Tu7990384110;
    v81925[Ti8185484115].d = Td8185784116;
    int Ti8185884111;
    Ti8185884111 = 2;
    int Ti8185984114;
    Ti8185984114 = 2;
    double Td8186084113;
    Td8186084113 = v81925[Ti8185984114].d;
    double Td8186184112;
    Td8186184112 = Td8186084113 / n84108;
    v81925[Ti8185884111].d = Td8186184112;
    return result;
}

double sgn81927_fun(double x81928, Value *env){
    double result;
    double Td8183784106;
    Td8183784106 = 0.000000;
    if(x81928 <= Td8183784106){
	result = -1.000000;
    }
    else{
	result = 1.000000;
    }
    return result;
}

double rad81929_fun(double x81930, Value *env){
    double result;
    double Td8183684105;
    Td8183684105 = 0.017453;
    result =  x81930 * Td8183684105;
    return result;
}

int read_environ81931_fun(int Tu7990581932, Value *env){
    int result;
    Value* Ta8173384101;
    Ta8173384101 = screen;
    int Ti8173484102;
    Ti8173484102 = 0;
    int Tu8173584104;
    Tu8173584104 = 1;
    double Td8173684103;
    Tu8173584104 = scanf("%lf", &Td8173684103);
    int Tu7992183977;
    Ta8173384101[Ti8173484102].d = Td8173684103;
    Value* Ta8173784097;
    Ta8173784097 = screen;
    int Ti8173884098;
    Ti8173884098 = 1;
    int Tu8173984100;
    Tu8173984100 = 1;
    double Td8174084099;
    Tu8173984100 = scanf("%lf", &Td8174084099);
    int Tu7992083978;
    Ta8173784097[Ti8173884098].d = Td8174084099;
    Value* Ta8174184093;
    Ta8174184093 = screen;
    int Ti8174284094;
    Ti8174284094 = 2;
    int Tu8174384096;
    Tu8174384096 = 1;
    double Td8174484095;
    Tu8174384096 = scanf("%lf", &Td8174484095);
    int Tu7991983979;
    Ta8174184093[Ti8174284094].d = Td8174484095;
    int Tu8174584092;
    Tu8174584092 = 1;
    double Td8174684091;
    Tu8174584092 = scanf("%lf", &Td8174684091);
    double v183980;
    v183980 = rad81929_fun(Td8174684091, NULL);
    Value* Ta8174784088;
    Ta8174784088 = cos_v;
    int Ti8174884089;
    Ti8174884089 = 0;
    double Td8174984090;
    Td8174984090 = cos(v183980);
    int Tu7991883981;
    Ta8174784088[Ti8174884089].d = Td8174984090;
    Value* Ta8175084085;
    Ta8175084085 = sin_v;
    int Ti8175184086;
    Ti8175184086 = 0;
    double Td8175284087;
    Td8175284087 = sin(v183980);
    int Tu7991783982;
    Ta8175084085[Ti8175184086].d = Td8175284087;
    int Tu8175384084;
    Tu8175384084 = 1;
    double Td8175484083;
    Tu8175384084 = scanf("%lf", &Td8175484083);
    double v283983;
    v283983 = rad81929_fun(Td8175484083, NULL);
    Value* Ta8175584080;
    Ta8175584080 = cos_v;
    int Ti8175684081;
    Ti8175684081 = 1;
    double Td8175784082;
    Td8175784082 = cos(v283983);
    int Tu7991683984;
    Ta8175584080[Ti8175684081].d = Td8175784082;
    Value* Ta8175884077;
    Ta8175884077 = sin_v;
    int Ti8175984078;
    Ti8175984078 = 1;
    double Td8176084079;
    Td8176084079 = sin(v283983);
    int Tu7991583985;
    Ta8175884077[Ti8175984078].d = Td8176084079;
    int Tu8176184076;
    Tu8176184076 = 1;
    double nl83986;
    Tu8176184076 = scanf("%lf", &nl83986);
    int Tu8176284075;
    Tu8176284075 = 1;
    double Td8176384074;
    Tu8176284075 = scanf("%lf", &Td8176384074);
    double l183987;
    l183987 = rad81929_fun(Td8176384074, NULL);
    double sl183988;
    sl183988 = sin(l183987);
    Value* Ta8176484071;
    Ta8176484071 = light;
    int Ti8176584072;
    Ti8176584072 = 1;
    double Td8176684073;
    Td8176684073 = -sl183988;
    int Tu7991483989;
    Ta8176484071[Ti8176584072].d = Td8176684073;
    int Tu8176784070;
    Tu8176784070 = 1;
    double Td8176884069;
    Tu8176784070 = scanf("%lf", &Td8176884069);
    double l283990;
    l283990 = rad81929_fun(Td8176884069, NULL);
    double cl183991;
    cl183991 = cos(l183987);
    double sl283992;
    sl283992 = sin(l283990);
    Value* Ta8176984066;
    Ta8176984066 = light;
    int Ti8177084067;
    Ti8177084067 = 0;
    double Td8177184068;
    Td8177184068 =  cl183991 * sl283992;
    int Tu7991383993;
    Ta8176984066[Ti8177084067].d = Td8177184068;
    double cl283994;
    cl283994 = cos(l283990);
    Value* Ta8177284063;
    Ta8177284063 = light;
    int Ti8177384064;
    Ti8177384064 = 2;
    double Td8177484065;
    Td8177484065 =  cl183991 * cl283994;
    int Tu7991283995;
    Ta8177284063[Ti8177384064].d = Td8177484065;
    Value* Ta8177584059;
    Ta8177584059 = beam;
    int Ti8177684060;
    Ti8177684060 = 0;
    int Tu8177784062;
    Tu8177784062 = 1;
    double Td8177884061;
    Tu8177784062 = scanf("%lf", &Td8177884061);
    int Tu7991183996;
    Ta8177584059[Ti8177684060].d = Td8177884061;
    Value* Ta8177984048;
    Ta8177984048 = vp;
    int Ti8178084049;
    Ti8178084049 = 0;
    Value* Ta8178184057;
    Ta8178184057 = cos_v;
    int Ti8178284058;
    Ti8178284058 = 0;
    double Td8178384053;
    Td8178384053 = Ta8178184057[Ti8178284058].d;
    Value* Ta8178484055;
    Ta8178484055 = sin_v;
    int Ti8178584056;
    Ti8178584056 = 1;
    double Td8178684054;
    Td8178684054 = Ta8178484055[Ti8178584056].d;
    double Td8178784051;
    Td8178784051 =  Td8178384053 * Td8178684054;
    double Td8178884052;
    Td8178884052 = -200.000000;
    double Td8178984050;
    Td8178984050 =  Td8178784051 * Td8178884052;
    int Tu7991083997;
    Ta8177984048[Ti8178084049].d = Td8178984050;
    Value* Ta8179084040;
    Ta8179084040 = vp;
    int Ti8179184041;
    Ti8179184041 = 1;
    Value* Ta8179284046;
    Ta8179284046 = sin_v;
    int Ti8179384047;
    Ti8179384047 = 0;
    double Td8179484045;
    Td8179484045 = Ta8179284046[Ti8179384047].d;
    double Td8179584043;
    Td8179584043 = -Td8179484045;
    double Td8179684044;
    Td8179684044 = -200.000000;
    double Td8179784042;
    Td8179784042 =  Td8179584043 * Td8179684044;
    int Tu7990983998;
    Ta8179084040[Ti8179184041].d = Td8179784042;
    Value* Ta8179884029;
    Ta8179884029 = vp;
    int Ti8179984030;
    Ti8179984030 = 2;
    Value* Ta8180084038;
    Ta8180084038 = cos_v;
    int Ti8180184039;
    Ti8180184039 = 0;
    double Td8180284034;
    Td8180284034 = Ta8180084038[Ti8180184039].d;
    Value* Ta8180384036;
    Ta8180384036 = cos_v;
    int Ti8180484037;
    Ti8180484037 = 1;
    double Td8180584035;
    Td8180584035 = Ta8180384036[Ti8180484037].d;
    double Td8180684032;
    Td8180684032 =  Td8180284034 * Td8180584035;
    double Td8180784033;
    Td8180784033 = -200.000000;
    double Td8180884031;
    Td8180884031 =  Td8180684032 * Td8180784033;
    int Tu7990883999;
    Ta8179884029[Ti8179984030].d = Td8180884031;
    Value* Ta8180984020;
    Ta8180984020 = view;
    int Ti8181084021;
    Ti8181084021 = 0;
    Value* Ta8181184027;
    Ta8181184027 = vp;
    int Ti8181284028;
    Ti8181284028 = 0;
    double Td8181384023;
    Td8181384023 = Ta8181184027[Ti8181284028].d;
    Value* Ta8181484025;
    Ta8181484025 = screen;
    int Ti8181584026;
    Ti8181584026 = 0;
    double Td8181684024;
    Td8181684024 = Ta8181484025[Ti8181584026].d;
    double Td8181784022;
    Td8181784022 = Td8181384023 + Td8181684024;
    int Tu7990784000;
    Ta8180984020[Ti8181084021].d = Td8181784022;
    Value* Ta8181884011;
    Ta8181884011 = view;
    int Ti8181984012;
    Ti8181984012 = 1;
    Value* Ta8182084018;
    Ta8182084018 = vp;
    int Ti8182184019;
    Ti8182184019 = 1;
    double Td8182284014;
    Td8182284014 = Ta8182084018[Ti8182184019].d;
    Value* Ta8182384016;
    Ta8182384016 = screen;
    int Ti8182484017;
    Ti8182484017 = 1;
    double Td8182584015;
    Td8182584015 = Ta8182384016[Ti8182484017].d;
    double Td8182684013;
    Td8182684013 = Td8182284014 + Td8182584015;
    int Tu7990684001;
    Ta8181884011[Ti8181984012].d = Td8182684013;
    Value* Ta8182784002;
    Ta8182784002 = view;
    int Ti8182884003;
    Ti8182884003 = 2;
    Value* Ta8182984009;
    Ta8182984009 = vp;
    int Ti8183084010;
    Ti8183084010 = 2;
    double Td8183184005;
    Td8183184005 = Ta8182984009[Ti8183084010].d;
    Value* Ta8183284007;
    Ta8183284007 = screen;
    int Ti8183384008;
    Ti8183384008 = 2;
    double Td8183484006;
    Td8183484006 = Ta8183284007[Ti8183384008].d;
    double Td8183584004;
    Td8183584004 = Td8183184005 + Td8183484006;
    Ta8182784002[Ti8182884003].d = Td8183584004;
    return result;
}

bool read_nth_object81933_fun(int n81934, Value *env){
    bool result;
    int Tu8134383976;
    Tu8134383976 = 1;
    int texture83530;
    double dtexture83530;
    Tu8134383976 = scanf("%lf", &dtexture83530);
    texture83530 = (int) dtexture83530;
    int Ti8134483975;
    Ti8134483975 = 1;
    int Ti8134583531;
    Ti8134583531 = -Ti8134483975;
    if(texture83530 == Ti8134583531){
	result = 0;
    }
    else{
	int Tu8134683974;
	Tu8134683974 = 1;
	int form83532;
	double dform83532;
	Tu8134683974 = scanf("%lf", &dform83532);
	form83532 = (int) dform83532;
	int Tu8134783973;
	Tu8134783973 = 1;
	int refltype83533;
	double drefltype83533;
	Tu8134783973 = scanf("%lf", &drefltype83533);
	refltype83533 = (int) drefltype83533;
	int Tu8134883972;
	Tu8134883972 = 1;
	int isrot_p83534;
	double disrot_p83534;
	Tu8134883972 = scanf("%lf", &disrot_p83534);
	isrot_p83534 = (int) disrot_p83534;
	int Ti8134983970;
	Ti8134983970 = 3;
	double Td8135083971;
	Td8135083971 = 0.000000;
	Value* abc83535;
	make_double_array(&abc83535, Ti8134983970, Td8135083971);
	int Ti8135183967;
	Ti8135183967 = 0;
	int Tu8135283969;
	Tu8135283969 = 1;
	double Td8135383968;
	Tu8135283969 = scanf("%lf", &Td8135383968);
	int Tu7996083536;
	abc83535[Ti8135183967].d = Td8135383968;
	int Ti8135483964;
	Ti8135483964 = 1;
	int Tu8135583966;
	Tu8135583966 = 1;
	double Td8135683965;
	Tu8135583966 = scanf("%lf", &Td8135683965);
	int Tu7995983537;
	abc83535[Ti8135483964].d = Td8135683965;
	int Ti8135783961;
	Ti8135783961 = 2;
	int Tu8135883963;
	Tu8135883963 = 1;
	double Td8135983962;
	Tu8135883963 = scanf("%lf", &Td8135983962);
	int Tu7995883538;
	abc83535[Ti8135783961].d = Td8135983962;
	int Ti8136083959;
	Ti8136083959 = 3;
	double Td8136183960;
	Td8136183960 = 0.000000;
	Value* xyz83539;
	make_double_array(&xyz83539, Ti8136083959, Td8136183960);
	int Ti8136283956;
	Ti8136283956 = 0;
	int Tu8136383958;
	Tu8136383958 = 1;
	double Td8136483957;
	Tu8136383958 = scanf("%lf", &Td8136483957);
	int Tu7995783540;
	xyz83539[Ti8136283956].d = Td8136483957;
	int Ti8136583953;
	Ti8136583953 = 1;
	int Tu8136683955;
	Tu8136683955 = 1;
	double Td8136783954;
	Tu8136683955 = scanf("%lf", &Td8136783954);
	int Tu7995683541;
	xyz83539[Ti8136583953].d = Td8136783954;
	int Ti8136883950;
	Ti8136883950 = 2;
	int Tu8136983952;
	Tu8136983952 = 1;
	double Td8137083951;
	Tu8136983952 = scanf("%lf", &Td8137083951);
	int Tu7995583542;
	xyz83539[Ti8136883950].d = Td8137083951;
	double Td8137183947;
	Td8137183947 = 0.000000;
	int Tu8137283949;
	Tu8137283949 = 1;
	double Td8137383948;
	Tu8137283949 = scanf("%lf", &Td8137383948);
	bool m_invert83543;
	if(Td8137183947 <= Td8137383948){
	    m_invert83543 = 0;
	}
	else{
	    m_invert83543 = 1;
	}
	int Ti8137483945;
	Ti8137483945 = 2;
	double Td8137583946;
	Td8137583946 = 0.000000;
	Value* reflparam83544;
	make_double_array(&reflparam83544, Ti8137483945, Td8137583946);
	int Ti8137683942;
	Ti8137683942 = 0;
	int Tu8137783944;
	Tu8137783944 = 1;
	double Td8137883943;
	Tu8137783944 = scanf("%lf", &Td8137883943);
	int Tu7995483545;
	reflparam83544[Ti8137683942].d = Td8137883943;
	int Ti8137983939;
	Ti8137983939 = 1;
	int Tu8138083941;
	Tu8138083941 = 1;
	double Td8138183940;
	Tu8138083941 = scanf("%lf", &Td8138183940);
	int Tu7995383546;
	reflparam83544[Ti8137983939].d = Td8138183940;
	int Ti8138283937;
	Ti8138283937 = 3;
	double Td8138383938;
	Td8138383938 = 0.000000;
	Value* color83547;
	make_double_array(&color83547, Ti8138283937, Td8138383938);
	int Ti8138483934;
	Ti8138483934 = 0;
	int Tu8138583936;
	Tu8138583936 = 1;
	double Td8138683935;
	Tu8138583936 = scanf("%lf", &Td8138683935);
	int Tu7995283548;
	color83547[Ti8138483934].d = Td8138683935;
	int Ti8138783931;
	Ti8138783931 = 1;
	int Tu8138883933;
	Tu8138883933 = 1;
	double Td8138983932;
	Tu8138883933 = scanf("%lf", &Td8138983932);
	int Tu7995183549;
	color83547[Ti8138783931].d = Td8138983932;
	int Ti8139083928;
	Ti8139083928 = 2;
	int Tu8139183930;
	Tu8139183930 = 1;
	double Td8139283929;
	Tu8139183930 = scanf("%lf", &Td8139283929);
	int Tu7995083550;
	color83547[Ti8139083928].d = Td8139283929;
	int Ti8139383926;
	Ti8139383926 = 3;
	double Td8139483927;
	Td8139483927 = 0.000000;
	Value* rotation83551;
	make_double_array(&rotation83551, Ti8139383926, Td8139483927);
	int Ti8139583911;
	Ti8139583911 = 0;
	int Tu7994983552;
	if(isrot_p83534 == Ti8139583911){
	    Tu7994983552 = 1;
	}
	else{
	    int Ti8139683922;
	    Ti8139683922 = 0;
	    int Tu8139783925;
	    Tu8139783925 = 1;
	    double Td8139883924;
	    Tu8139783925 = scanf("%lf", &Td8139883924);
	    double Td8139983923;
	    Td8139983923 = rad81929_fun(Td8139883924, NULL);
	    int Tu7992383912;
	    rotation83551[Ti8139683922].d = Td8139983923;
	    int Ti8140083918;
	    Ti8140083918 = 1;
	    int Tu8140183921;
	    Tu8140183921 = 1;
	    double Td8140283920;
	    Tu8140183921 = scanf("%lf", &Td8140283920);
	    double Td8140383919;
	    Td8140383919 = rad81929_fun(Td8140283920, NULL);
	    int Tu7992283913;
	    rotation83551[Ti8140083918].d = Td8140383919;
	    int Ti8140483914;
	    Ti8140483914 = 2;
	    int Tu8140583917;
	    Tu8140583917 = 1;
	    double Td8140683916;
	    Tu8140583917 = scanf("%lf", &Td8140683916);
	    double Td8140783915;
	    Td8140783915 = rad81929_fun(Td8140683916, NULL);
	    rotation83551[Ti8140483914].d = Td8140783915;
	}
	int Ti8140883910;
	Ti8140883910 = 2;
	bool m_invert283553;
	if(form83532 == Ti8140883910){
	    m_invert283553 = 1;
	}
	else{
	    m_invert283553 = m_invert83543;
	}
	int* obj83554;
	obj83554 = malloc(10 * sizeof(int));
	obj83554[0] = texture83530;
	obj83554[1] = form83532;
	obj83554[2] = refltype83533;
	obj83554[3] = isrot_p83534;
	obj83554[4] = abc83535;
	obj83554[5] = xyz83539;
	obj83554[6] = m_invert283553;
	obj83554[7] = reflparam83544;
	obj83554[8] = color83547;
	obj83554[9] = rotation83551;

	Value* Ta8140983909;
	Ta8140983909 = objects;
	int Tu7994883555;
	Ta8140983909[n81934].a = obj83554;
	int Ti8141083882;
	Ti8141083882 = 3;
	int Tu7994783556;
	if(form83532 == Ti8141083882){
	    int Ti8141183908;
	    Ti8141183908 = 0;
	    double a83886;
	    a83886 = abc83535[Ti8141183908].d;
	    int Ti8141283903;
	    Ti8141283903 = 0;
	    double Td8141383905;
	    Td8141383905 = 0.000000;
	    double Td8141683904;
	    if(Td8141383905 == a83886){
		Td8141683904 = 0.000000;
	    }
	    else{
		double Td8141483906;
		Td8141483906 = sgn81927_fun(a83886, NULL);
		double Td8141583907;
		Td8141583907 = fsqr81882_fun(a83886, NULL);
		Td8141683904 = Td8141483906 / Td8141583907;
	    }
	    int Tu7992583887;
	    abc83535[Ti8141283903].d = Td8141683904;
	    int Ti8141783902;
	    Ti8141783902 = 1;
	    double b83888;
	    b83888 = abc83535[Ti8141783902].d;
	    int Ti8141883897;
	    Ti8141883897 = 1;
	    double Td8141983899;
	    Td8141983899 = 0.000000;
	    double Td8142283898;
	    if(Td8141983899 == b83888){
		Td8142283898 = 0.000000;
	    }
	    else{
		double Td8142083900;
		Td8142083900 = sgn81927_fun(b83888, NULL);
		double Td8142183901;
		Td8142183901 = fsqr81882_fun(b83888, NULL);
		Td8142283898 = Td8142083900 / Td8142183901;
	    }
	    int Tu7992483889;
	    abc83535[Ti8141883897].d = Td8142283898;
	    int Ti8142383896;
	    Ti8142383896 = 2;
	    double c83890;
	    c83890 = abc83535[Ti8142383896].d;
	    int Ti8142483891;
	    Ti8142483891 = 2;
	    double Td8142583893;
	    Td8142583893 = 0.000000;
	    double Td8142883892;
	    if(Td8142583893 == c83890){
		Td8142883892 = 0.000000;
	    }
	    else{
		double Td8142683894;
		Td8142683894 = sgn81927_fun(c83890, NULL);
		double Td8142783895;
		Td8142783895 = fsqr81882_fun(c83890, NULL);
		Td8142883892 = Td8142683894 / Td8142783895;
	    }
	    abc83535[Ti8142483891].d = Td8142883892;
	}
	else{
	    int Ti8142983883;
	    Ti8142983883 = 2;
	    if(form83532 == Ti8142983883){
		int Ti8143083885;
		Ti8143083885 = 0;
		int Ti8143183884;
		if(m_invert83543 == Ti8143083885){
		    Ti8143183884 = 1;
		}
		else{
		    Ti8143183884 = 0;
		}
		Tu7994783556 = normalize_vector81924_fun(abc83535, Ti8143183884, NULL);
	    }
	    else{
		Tu7994783556 = 1;
	    }
	}
	int Ti8143283558;
	Ti8143283558 = 0;
	int Tu7994683557;
	if(isrot_p83534 == Ti8143283558){
	    Tu7994683557 = 1;
	}
	else{
	    Value* Ta8143383877;
	    Ta8143383877 = cs_temp;
	    int Ti8143483878;
	    Ti8143483878 = 10;
	    int Ti8143583881;
	    Ti8143583881 = 0;
	    double Td8143683880;
	    Td8143683880 = rotation83551[Ti8143583881].d;
	    double Td8143783879;
	    Td8143783879 = cos(Td8143683880);
	    int Tu7994583559;
	    Ta8143383877[Ti8143483878].d = Td8143783879;
	    Value* Ta8143883872;
	    Ta8143883872 = cs_temp;
	    int Ti8143983873;
	    Ti8143983873 = 11;
	    int Ti8144083876;
	    Ti8144083876 = 0;
	    double Td8144183875;
	    Td8144183875 = rotation83551[Ti8144083876].d;
	    double Td8144283874;
	    Td8144283874 = sin(Td8144183875);
	    int Tu7994483560;
	    Ta8143883872[Ti8143983873].d = Td8144283874;
	    Value* Ta8144383867;
	    Ta8144383867 = cs_temp;
	    int Ti8144483868;
	    Ti8144483868 = 12;
	    int Ti8144583871;
	    Ti8144583871 = 1;
	    double Td8144683870;
	    Td8144683870 = rotation83551[Ti8144583871].d;
	    double Td8144783869;
	    Td8144783869 = cos(Td8144683870);
	    int Tu7994383561;
	    Ta8144383867[Ti8144483868].d = Td8144783869;
	    Value* Ta8144883862;
	    Ta8144883862 = cs_temp;
	    int Ti8144983863;
	    Ti8144983863 = 13;
	    int Ti8145083866;
	    Ti8145083866 = 1;
	    double Td8145183865;
	    Td8145183865 = rotation83551[Ti8145083866].d;
	    double Td8145283864;
	    Td8145283864 = sin(Td8145183865);
	    int Tu7994283562;
	    Ta8144883862[Ti8144983863].d = Td8145283864;
	    Value* Ta8145383857;
	    Ta8145383857 = cs_temp;
	    int Ti8145483858;
	    Ti8145483858 = 14;
	    int Ti8145583861;
	    Ti8145583861 = 2;
	    double Td8145683860;
	    Td8145683860 = rotation83551[Ti8145583861].d;
	    double Td8145783859;
	    Td8145783859 = cos(Td8145683860);
	    int Tu7994183563;
	    Ta8145383857[Ti8145483858].d = Td8145783859;
	    Value* Ta8145883852;
	    Ta8145883852 = cs_temp;
	    int Ti8145983853;
	    Ti8145983853 = 15;
	    int Ti8146083856;
	    Ti8146083856 = 2;
	    double Td8146183855;
	    Td8146183855 = rotation83551[Ti8146083856].d;
	    double Td8146283854;
	    Td8146283854 = sin(Td8146183855);
	    int Tu7994083564;
	    Ta8145883852[Ti8145983853].d = Td8146283854;
	    Value* Ta8146383843;
	    Ta8146383843 = cs_temp;
	    int Ti8146483844;
	    Ti8146483844 = 0;
	    Value* Ta8146583850;
	    Ta8146583850 = cs_temp;
	    int Ti8146683851;
	    Ti8146683851 = 12;
	    double Td8146783846;
	    Td8146783846 = Ta8146583850[Ti8146683851].d;
	    Value* Ta8146883848;
	    Ta8146883848 = cs_temp;
	    int Ti8146983849;
	    Ti8146983849 = 14;
	    double Td8147083847;
	    Td8147083847 = Ta8146883848[Ti8146983849].d;
	    double Td8147183845;
	    Td8147183845 =  Td8146783846 * Td8147083847;
	    int Tu7993983565;
	    Ta8146383843[Ti8146483844].d = Td8147183845;
	    Value* Ta8147283822;
	    Ta8147283822 = cs_temp;
	    int Ti8147383823;
	    Ti8147383823 = 1;
	    Value* Ta8147483841;
	    Ta8147483841 = cs_temp;
	    int Ti8147583842;
	    Ti8147583842 = 11;
	    double Td8147683837;
	    Td8147683837 = Ta8147483841[Ti8147583842].d;
	    Value* Ta8147783839;
	    Ta8147783839 = cs_temp;
	    int Ti8147883840;
	    Ti8147883840 = 13;
	    double Td8147983838;
	    Td8147983838 = Ta8147783839[Ti8147883840].d;
	    double Td8148083833;
	    Td8148083833 =  Td8147683837 * Td8147983838;
	    Value* Ta8148183835;
	    Ta8148183835 = cs_temp;
	    int Ti8148283836;
	    Ti8148283836 = 14;
	    double Td8148383834;
	    Td8148383834 = Ta8148183835[Ti8148283836].d;
	    double Td8148483825;
	    Td8148483825 =  Td8148083833 * Td8148383834;
	    Value* Ta8148583831;
	    Ta8148583831 = cs_temp;
	    int Ti8148683832;
	    Ti8148683832 = 10;
	    double Td8148783827;
	    Td8148783827 = Ta8148583831[Ti8148683832].d;
	    Value* Ta8148883829;
	    Ta8148883829 = cs_temp;
	    int Ti8148983830;
	    Ti8148983830 = 15;
	    double Td8149083828;
	    Td8149083828 = Ta8148883829[Ti8148983830].d;
	    double Td8149183826;
	    Td8149183826 =  Td8148783827 * Td8149083828;
	    double Td8149283824;
	    Td8149283824 = Td8148483825 - Td8149183826;
	    int Tu7993883566;
	    Ta8147283822[Ti8147383823].d = Td8149283824;
	    Value* Ta8149383801;
	    Ta8149383801 = cs_temp;
	    int Ti8149483802;
	    Ti8149483802 = 2;
	    Value* Ta8149583820;
	    Ta8149583820 = cs_temp;
	    int Ti8149683821;
	    Ti8149683821 = 10;
	    double Td8149783816;
	    Td8149783816 = Ta8149583820[Ti8149683821].d;
	    Value* Ta8149883818;
	    Ta8149883818 = cs_temp;
	    int Ti8149983819;
	    Ti8149983819 = 13;
	    double Td8150083817;
	    Td8150083817 = Ta8149883818[Ti8149983819].d;
	    double Td8150183812;
	    Td8150183812 =  Td8149783816 * Td8150083817;
	    Value* Ta8150283814;
	    Ta8150283814 = cs_temp;
	    int Ti8150383815;
	    Ti8150383815 = 14;
	    double Td8150483813;
	    Td8150483813 = Ta8150283814[Ti8150383815].d;
	    double Td8150583804;
	    Td8150583804 =  Td8150183812 * Td8150483813;
	    Value* Ta8150683810;
	    Ta8150683810 = cs_temp;
	    int Ti8150783811;
	    Ti8150783811 = 11;
	    double Td8150883806;
	    Td8150883806 = Ta8150683810[Ti8150783811].d;
	    Value* Ta8150983808;
	    Ta8150983808 = cs_temp;
	    int Ti8151083809;
	    Ti8151083809 = 15;
	    double Td8151183807;
	    Td8151183807 = Ta8150983808[Ti8151083809].d;
	    double Td8151283805;
	    Td8151283805 =  Td8150883806 * Td8151183807;
	    double Td8151383803;
	    Td8151383803 = Td8150583804 + Td8151283805;
	    int Tu7993783567;
	    Ta8149383801[Ti8149483802].d = Td8151383803;
	    Value* Ta8151483792;
	    Ta8151483792 = cs_temp;
	    int Ti8151583793;
	    Ti8151583793 = 3;
	    Value* Ta8151683799;
	    Ta8151683799 = cs_temp;
	    int Ti8151783800;
	    Ti8151783800 = 12;
	    double Td8151883795;
	    Td8151883795 = Ta8151683799[Ti8151783800].d;
	    Value* Ta8151983797;
	    Ta8151983797 = cs_temp;
	    int Ti8152083798;
	    Ti8152083798 = 15;
	    double Td8152183796;
	    Td8152183796 = Ta8151983797[Ti8152083798].d;
	    double Td8152283794;
	    Td8152283794 =  Td8151883795 * Td8152183796;
	    int Tu7993683568;
	    Ta8151483792[Ti8151583793].d = Td8152283794;
	    Value* Ta8152383771;
	    Ta8152383771 = cs_temp;
	    int Ti8152483772;
	    Ti8152483772 = 4;
	    Value* Ta8152583790;
	    Ta8152583790 = cs_temp;
	    int Ti8152683791;
	    Ti8152683791 = 11;
	    double Td8152783786;
	    Td8152783786 = Ta8152583790[Ti8152683791].d;
	    Value* Ta8152883788;
	    Ta8152883788 = cs_temp;
	    int Ti8152983789;
	    Ti8152983789 = 13;
	    double Td8153083787;
	    Td8153083787 = Ta8152883788[Ti8152983789].d;
	    double Td8153183782;
	    Td8153183782 =  Td8152783786 * Td8153083787;
	    Value* Ta8153283784;
	    Ta8153283784 = cs_temp;
	    int Ti8153383785;
	    Ti8153383785 = 15;
	    double Td8153483783;
	    Td8153483783 = Ta8153283784[Ti8153383785].d;
	    double Td8153583774;
	    Td8153583774 =  Td8153183782 * Td8153483783;
	    Value* Ta8153683780;
	    Ta8153683780 = cs_temp;
	    int Ti8153783781;
	    Ti8153783781 = 10;
	    double Td8153883776;
	    Td8153883776 = Ta8153683780[Ti8153783781].d;
	    Value* Ta8153983778;
	    Ta8153983778 = cs_temp;
	    int Ti8154083779;
	    Ti8154083779 = 14;
	    double Td8154183777;
	    Td8154183777 = Ta8153983778[Ti8154083779].d;
	    double Td8154283775;
	    Td8154283775 =  Td8153883776 * Td8154183777;
	    double Td8154383773;
	    Td8154383773 = Td8153583774 + Td8154283775;
	    int Tu7993583569;
	    Ta8152383771[Ti8152483772].d = Td8154383773;
	    Value* Ta8154483750;
	    Ta8154483750 = cs_temp;
	    int Ti8154583751;
	    Ti8154583751 = 5;
	    Value* Ta8154683769;
	    Ta8154683769 = cs_temp;
	    int Ti8154783770;
	    Ti8154783770 = 10;
	    double Td8154883765;
	    Td8154883765 = Ta8154683769[Ti8154783770].d;
	    Value* Ta8154983767;
	    Ta8154983767 = cs_temp;
	    int Ti8155083768;
	    Ti8155083768 = 13;
	    double Td8155183766;
	    Td8155183766 = Ta8154983767[Ti8155083768].d;
	    double Td8155283761;
	    Td8155283761 =  Td8154883765 * Td8155183766;
	    Value* Ta8155383763;
	    Ta8155383763 = cs_temp;
	    int Ti8155483764;
	    Ti8155483764 = 15;
	    double Td8155583762;
	    Td8155583762 = Ta8155383763[Ti8155483764].d;
	    double Td8155683753;
	    Td8155683753 =  Td8155283761 * Td8155583762;
	    Value* Ta8155783759;
	    Ta8155783759 = cs_temp;
	    int Ti8155883760;
	    Ti8155883760 = 11;
	    double Td8155983755;
	    Td8155983755 = Ta8155783759[Ti8155883760].d;
	    Value* Ta8156083757;
	    Ta8156083757 = cs_temp;
	    int Ti8156183758;
	    Ti8156183758 = 14;
	    double Td8156283756;
	    Td8156283756 = Ta8156083757[Ti8156183758].d;
	    double Td8156383754;
	    Td8156383754 =  Td8155983755 * Td8156283756;
	    double Td8156483752;
	    Td8156483752 = Td8155683753 - Td8156383754;
	    int Tu7993483570;
	    Ta8154483750[Ti8154583751].d = Td8156483752;
	    Value* Ta8156583744;
	    Ta8156583744 = cs_temp;
	    int Ti8156683745;
	    Ti8156683745 = 6;
	    Value* Ta8156783748;
	    Ta8156783748 = cs_temp;
	    int Ti8156883749;
	    Ti8156883749 = 13;
	    double Td8156983747;
	    Td8156983747 = Ta8156783748[Ti8156883749].d;
	    double Td8157083746;
	    Td8157083746 = -Td8156983747;
	    int Tu7993383571;
	    Ta8156583744[Ti8156683745].d = Td8157083746;
	    Value* Ta8157183735;
	    Ta8157183735 = cs_temp;
	    int Ti8157283736;
	    Ti8157283736 = 7;
	    Value* Ta8157383742;
	    Ta8157383742 = cs_temp;
	    int Ti8157483743;
	    Ti8157483743 = 11;
	    double Td8157583738;
	    Td8157583738 = Ta8157383742[Ti8157483743].d;
	    Value* Ta8157683740;
	    Ta8157683740 = cs_temp;
	    int Ti8157783741;
	    Ti8157783741 = 12;
	    double Td8157883739;
	    Td8157883739 = Ta8157683740[Ti8157783741].d;
	    double Td8157983737;
	    Td8157983737 =  Td8157583738 * Td8157883739;
	    int Tu7993283572;
	    Ta8157183735[Ti8157283736].d = Td8157983737;
	    Value* Ta8158083726;
	    Ta8158083726 = cs_temp;
	    int Ti8158183727;
	    Ti8158183727 = 8;
	    Value* Ta8158283733;
	    Ta8158283733 = cs_temp;
	    int Ti8158383734;
	    Ti8158383734 = 10;
	    double Td8158483729;
	    Td8158483729 = Ta8158283733[Ti8158383734].d;
	    Value* Ta8158583731;
	    Ta8158583731 = cs_temp;
	    int Ti8158683732;
	    Ti8158683732 = 12;
	    double Td8158783730;
	    Td8158783730 = Ta8158583731[Ti8158683732].d;
	    double Td8158883728;
	    Td8158883728 =  Td8158483729 * Td8158783730;
	    int Tu7993183573;
	    Ta8158083726[Ti8158183727].d = Td8158883728;
	    int Ti8158983725;
	    Ti8158983725 = 0;
	    double ao83574;
	    ao83574 = abc83535[Ti8158983725].d;
	    int Ti8159083724;
	    Ti8159083724 = 1;
	    double bo83575;
	    bo83575 = abc83535[Ti8159083724].d;
	    int Ti8159183723;
	    Ti8159183723 = 2;
	    double co83576;
	    co83576 = abc83535[Ti8159183723].d;
	    int Ti8159283705;
	    Ti8159283705 = 0;
	    Value* Ta8159383721;
	    Ta8159383721 = cs_temp;
	    int Ti8159483722;
	    Ti8159483722 = 0;
	    double Td8159583720;
	    Td8159583720 = Ta8159383721[Ti8159483722].d;
	    double Td8159683719;
	    Td8159683719 = fsqr81882_fun(Td8159583720, NULL);
	    double Td8159783713;
	    Td8159783713 =  ao83574 * Td8159683719;
	    Value* Ta8159883717;
	    Ta8159883717 = cs_temp;
	    int Ti8159983718;
	    Ti8159983718 = 3;
	    double Td8160083716;
	    Td8160083716 = Ta8159883717[Ti8159983718].d;
	    double Td8160183715;
	    Td8160183715 = fsqr81882_fun(Td8160083716, NULL);
	    double Td8160283714;
	    Td8160283714 =  bo83575 * Td8160183715;
	    double Td8160383707;
	    Td8160383707 = Td8159783713 + Td8160283714;
	    Value* Ta8160483711;
	    Ta8160483711 = cs_temp;
	    int Ti8160583712;
	    Ti8160583712 = 6;
	    double Td8160683710;
	    Td8160683710 = Ta8160483711[Ti8160583712].d;
	    double Td8160783709;
	    Td8160783709 = fsqr81882_fun(Td8160683710, NULL);
	    double Td8160883708;
	    Td8160883708 =  co83576 * Td8160783709;
	    double Td8160983706;
	    Td8160983706 = Td8160383707 + Td8160883708;
	    int Tu7993083577;
	    abc83535[Ti8159283705].d = Td8160983706;
	    int Ti8161083687;
	    Ti8161083687 = 1;
	    Value* Ta8161183703;
	    Ta8161183703 = cs_temp;
	    int Ti8161283704;
	    Ti8161283704 = 1;
	    double Td8161383702;
	    Td8161383702 = Ta8161183703[Ti8161283704].d;
	    double Td8161483701;
	    Td8161483701 = fsqr81882_fun(Td8161383702, NULL);
	    double Td8161583695;
	    Td8161583695 =  ao83574 * Td8161483701;
	    Value* Ta8161683699;
	    Ta8161683699 = cs_temp;
	    int Ti8161783700;
	    Ti8161783700 = 4;
	    double Td8161883698;
	    Td8161883698 = Ta8161683699[Ti8161783700].d;
	    double Td8161983697;
	    Td8161983697 = fsqr81882_fun(Td8161883698, NULL);
	    double Td8162083696;
	    Td8162083696 =  bo83575 * Td8161983697;
	    double Td8162183689;
	    Td8162183689 = Td8161583695 + Td8162083696;
	    Value* Ta8162283693;
	    Ta8162283693 = cs_temp;
	    int Ti8162383694;
	    Ti8162383694 = 7;
	    double Td8162483692;
	    Td8162483692 = Ta8162283693[Ti8162383694].d;
	    double Td8162583691;
	    Td8162583691 = fsqr81882_fun(Td8162483692, NULL);
	    double Td8162683690;
	    Td8162683690 =  co83576 * Td8162583691;
	    double Td8162783688;
	    Td8162783688 = Td8162183689 + Td8162683690;
	    int Tu7992983578;
	    abc83535[Ti8161083687].d = Td8162783688;
	    int Ti8162883669;
	    Ti8162883669 = 2;
	    Value* Ta8162983685;
	    Ta8162983685 = cs_temp;
	    int Ti8163083686;
	    Ti8163083686 = 2;
	    double Td8163183684;
	    Td8163183684 = Ta8162983685[Ti8163083686].d;
	    double Td8163283683;
	    Td8163283683 = fsqr81882_fun(Td8163183684, NULL);
	    double Td8163383677;
	    Td8163383677 =  ao83574 * Td8163283683;
	    Value* Ta8163483681;
	    Ta8163483681 = cs_temp;
	    int Ti8163583682;
	    Ti8163583682 = 5;
	    double Td8163683680;
	    Td8163683680 = Ta8163483681[Ti8163583682].d;
	    double Td8163783679;
	    Td8163783679 = fsqr81882_fun(Td8163683680, NULL);
	    double Td8163883678;
	    Td8163883678 =  bo83575 * Td8163783679;
	    double Td8163983671;
	    Td8163983671 = Td8163383677 + Td8163883678;
	    Value* Ta8164083675;
	    Ta8164083675 = cs_temp;
	    int Ti8164183676;
	    Ti8164183676 = 8;
	    double Td8164283674;
	    Td8164283674 = Ta8164083675[Ti8164183676].d;
	    double Td8164383673;
	    Td8164383673 = fsqr81882_fun(Td8164283674, NULL);
	    double Td8164483672;
	    Td8164483672 =  co83576 * Td8164383673;
	    double Td8164583670;
	    Td8164583670 = Td8163983671 + Td8164483672;
	    int Tu7992883579;
	    abc83535[Ti8162883669].d = Td8164583670;
	    int Ti8164683640;
	    Ti8164683640 = 0;
	    double Td8164783642;
	    Td8164783642 = 2.000000;
	    Value* Ta8164883667;
	    Ta8164883667 = cs_temp;
	    int Ti8164983668;
	    Ti8164983668 = 1;
	    double Td8165083666;
	    Td8165083666 = Ta8164883667[Ti8164983668].d;
	    double Td8165183662;
	    Td8165183662 =  ao83574 * Td8165083666;
	    Value* Ta8165283664;
	    Ta8165283664 = cs_temp;
	    int Ti8165383665;
	    Ti8165383665 = 2;
	    double Td8165483663;
	    Td8165483663 = Ta8165283664[Ti8165383665].d;
	    double Td8165583653;
	    Td8165583653 =  Td8165183662 * Td8165483663;
	    Value* Ta8165683660;
	    Ta8165683660 = cs_temp;
	    int Ti8165783661;
	    Ti8165783661 = 4;
	    double Td8165883659;
	    Td8165883659 = Ta8165683660[Ti8165783661].d;
	    double Td8165983655;
	    Td8165983655 =  bo83575 * Td8165883659;
	    Value* Ta8166083657;
	    Ta8166083657 = cs_temp;
	    int Ti8166183658;
	    Ti8166183658 = 5;
	    double Td8166283656;
	    Td8166283656 = Ta8166083657[Ti8166183658].d;
	    double Td8166383654;
	    Td8166383654 =  Td8165983655 * Td8166283656;
	    double Td8166483644;
	    Td8166483644 = Td8165583653 + Td8166383654;
	    Value* Ta8166583651;
	    Ta8166583651 = cs_temp;
	    int Ti8166683652;
	    Ti8166683652 = 7;
	    double Td8166783650;
	    Td8166783650 = Ta8166583651[Ti8166683652].d;
	    double Td8166883646;
	    Td8166883646 =  co83576 * Td8166783650;
	    Value* Ta8166983648;
	    Ta8166983648 = cs_temp;
	    int Ti8167083649;
	    Ti8167083649 = 8;
	    double Td8167183647;
	    Td8167183647 = Ta8166983648[Ti8167083649].d;
	    double Td8167283645;
	    Td8167283645 =  Td8166883646 * Td8167183647;
	    double Td8167383643;
	    Td8167383643 = Td8166483644 + Td8167283645;
	    double Td8167483641;
	    Td8167483641 =  Td8164783642 * Td8167383643;
	    int Tu7992783580;
	    rotation83551[Ti8164683640].d = Td8167483641;
	    int Ti8167583611;
	    Ti8167583611 = 1;
	    double Td8167683613;
	    Td8167683613 = 2.000000;
	    Value* Ta8167783638;
	    Ta8167783638 = cs_temp;
	    int Ti8167883639;
	    Ti8167883639 = 0;
	    double Td8167983637;
	    Td8167983637 = Ta8167783638[Ti8167883639].d;
	    double Td8168083633;
	    Td8168083633 =  ao83574 * Td8167983637;
	    Value* Ta8168183635;
	    Ta8168183635 = cs_temp;
	    int Ti8168283636;
	    Ti8168283636 = 2;
	    double Td8168383634;
	    Td8168383634 = Ta8168183635[Ti8168283636].d;
	    double Td8168483624;
	    Td8168483624 =  Td8168083633 * Td8168383634;
	    Value* Ta8168583631;
	    Ta8168583631 = cs_temp;
	    int Ti8168683632;
	    Ti8168683632 = 3;
	    double Td8168783630;
	    Td8168783630 = Ta8168583631[Ti8168683632].d;
	    double Td8168883626;
	    Td8168883626 =  bo83575 * Td8168783630;
	    Value* Ta8168983628;
	    Ta8168983628 = cs_temp;
	    int Ti8169083629;
	    Ti8169083629 = 5;
	    double Td8169183627;
	    Td8169183627 = Ta8168983628[Ti8169083629].d;
	    double Td8169283625;
	    Td8169283625 =  Td8168883626 * Td8169183627;
	    double Td8169383615;
	    Td8169383615 = Td8168483624 + Td8169283625;
	    Value* Ta8169483622;
	    Ta8169483622 = cs_temp;
	    int Ti8169583623;
	    Ti8169583623 = 6;
	    double Td8169683621;
	    Td8169683621 = Ta8169483622[Ti8169583623].d;
	    double Td8169783617;
	    Td8169783617 =  co83576 * Td8169683621;
	    Value* Ta8169883619;
	    Ta8169883619 = cs_temp;
	    int Ti8169983620;
	    Ti8169983620 = 8;
	    double Td8170083618;
	    Td8170083618 = Ta8169883619[Ti8169983620].d;
	    double Td8170183616;
	    Td8170183616 =  Td8169783617 * Td8170083618;
	    double Td8170283614;
	    Td8170283614 = Td8169383615 + Td8170183616;
	    double Td8170383612;
	    Td8170383612 =  Td8167683613 * Td8170283614;
	    int Tu7992683581;
	    rotation83551[Ti8167583611].d = Td8170383612;
	    int Ti8170483582;
	    Ti8170483582 = 2;
	    double Td8170583584;
	    Td8170583584 = 2.000000;
	    Value* Ta8170683609;
	    Ta8170683609 = cs_temp;
	    int Ti8170783610;
	    Ti8170783610 = 0;
	    double Td8170883608;
	    Td8170883608 = Ta8170683609[Ti8170783610].d;
	    double Td8170983604;
	    Td8170983604 =  ao83574 * Td8170883608;
	    Value* Ta8171083606;
	    Ta8171083606 = cs_temp;
	    int Ti8171183607;
	    Ti8171183607 = 1;
	    double Td8171283605;
	    Td8171283605 = Ta8171083606[Ti8171183607].d;
	    double Td8171383595;
	    Td8171383595 =  Td8170983604 * Td8171283605;
	    Value* Ta8171483602;
	    Ta8171483602 = cs_temp;
	    int Ti8171583603;
	    Ti8171583603 = 3;
	    double Td8171683601;
	    Td8171683601 = Ta8171483602[Ti8171583603].d;
	    double Td8171783597;
	    Td8171783597 =  bo83575 * Td8171683601;
	    Value* Ta8171883599;
	    Ta8171883599 = cs_temp;
	    int Ti8171983600;
	    Ti8171983600 = 4;
	    double Td8172083598;
	    Td8172083598 = Ta8171883599[Ti8171983600].d;
	    double Td8172183596;
	    Td8172183596 =  Td8171783597 * Td8172083598;
	    double Td8172283586;
	    Td8172283586 = Td8171383595 + Td8172183596;
	    Value* Ta8172383593;
	    Ta8172383593 = cs_temp;
	    int Ti8172483594;
	    Ti8172483594 = 6;
	    double Td8172583592;
	    Td8172583592 = Ta8172383593[Ti8172483594].d;
	    double Td8172683588;
	    Td8172683588 =  co83576 * Td8172583592;
	    Value* Ta8172783590;
	    Ta8172783590 = cs_temp;
	    int Ti8172883591;
	    Ti8172883591 = 7;
	    double Td8172983589;
	    Td8172983589 = Ta8172783590[Ti8172883591].d;
	    double Td8173083587;
	    Td8173083587 =  Td8172683588 * Td8172983589;
	    double Td8173183585;
	    Td8173183585 = Td8172283586 + Td8173083587;
	    double Td8173283583;
	    Td8173283583 =  Td8170583584 * Td8173183585;
	    rotation83551[Ti8170483582].d = Td8173283583;
	}
	result = 1;
    }
    return result;
}

int read_object81935_fun(int n81936, Value *env){
    int result;
    int Ti8133883525;
    Ti8133883525 = 61;
    if(Ti8133883525 <= n81936){
	result = 1;
    }
    else{
	bool Tb8133983526;
	Tb8133983526 = read_nth_object81933_fun(n81936, NULL);
	int Ti8134083527;
	Ti8134083527 = 0;
	if(Tb8133983526 == Ti8134083527){
	    result = 1;
	}
	else{
	    int Ti8134183529;
	    Ti8134183529 = 1;
	    int Ti8134283528;
	    Ti8134283528 = n81936 + Ti8134183529;
	    result = read_object81935_fun(Ti8134283528, NULL);
	}
    }
    return result;
}

int read_all_object81937_fun(int Tu7996181938, Value *env){
    int result;
    int Ti8133783524;
    Ti8133783524 = 0;
    result = read_object81935_fun(Ti8133783524, NULL);
    return result;
}

Value* read_net_item81939_fun(int length81940, Value *env){
    Value* result;
    int Tu8132883523;
    Tu8132883523 = 1;
    int item83512;
    double ditem83512;
    Tu8132883523 = scanf("%lf", &ditem83512);
    item83512 = (int) ditem83512;
    int Ti8132983522;
    Ti8132983522 = 1;
    int Ti8133083513;
    Ti8133083513 = -Ti8132983522;
    if(item83512 == Ti8133083513){
	int Ti8133183521;
	Ti8133183521 = 1;
	int Ti8133283518;
	Ti8133283518 = length81940 + Ti8133183521;
	int Ti8133383520;
	Ti8133383520 = 1;
	int Ti8133483519;
	Ti8133483519 = -Ti8133383520;
	make_int_array(&result, Ti8133283518, Ti8133483519);
    }
    else{
	int Ti8133583517;
	Ti8133583517 = 1;
	int Ti8133683516;
	Ti8133683516 = length81940 + Ti8133583517;
	Value* v83514;
	v83514 = read_net_item81939_fun(Ti8133683516, NULL);
	int Tu7996283515;
	v83514[length81940].i = item83512;
	result = v83514;
    }
    return result;
}

Value* read_or_network81941_fun(int length81942, Value *env){
    Value* result;
    int Ti8131983511;
    Ti8131983511 = 0;
    Value* net83500;
    net83500 = read_net_item81939_fun(Ti8131983511, NULL);
    int Ti8132083510;
    Ti8132083510 = 0;
    int Ti8132183501;
    Ti8132183501 = net83500[Ti8132083510].i;
    int Ti8132283509;
    Ti8132283509 = 1;
    int Ti8132383502;
    Ti8132383502 = -Ti8132283509;
    if(Ti8132183501 == Ti8132383502){
	int Ti8132483508;
	Ti8132483508 = 1;
	int Ti8132583507;
	Ti8132583507 = length81942 + Ti8132483508;
	make_multi_array(&result, Ti8132583507, net83500);
    }
    else{
	int Ti8132683506;
	Ti8132683506 = 1;
	int Ti8132783505;
	Ti8132783505 = length81942 + Ti8132683506;
	Value* v83503;
	v83503 = read_or_network81941_fun(Ti8132783505, NULL);
	int Tu7996383504;
	v83503[length81942].a = net83500;
	result = v83503;
    }
    return result;
}

int read_and_network81943_fun(int n81944, Value *env){
    int result;
    int Ti8131183499;
    Ti8131183499 = 0;
    Value* net83490;
    net83490 = read_net_item81939_fun(Ti8131183499, NULL);
    int Ti8131283498;
    Ti8131283498 = 0;
    int Ti8131383491;
    Ti8131383491 = net83490[Ti8131283498].i;
    int Ti8131483497;
    Ti8131483497 = 1;
    int Ti8131583492;
    Ti8131583492 = -Ti8131483497;
    if(Ti8131383491 == Ti8131583492){
	result = 1;
    }
    else{
	Value* Ta8131683496;
	Ta8131683496 = and_net;
	int Tu7996483493;
	Ta8131683496[n81944].a = net83490;
	int Ti8131783495;
	Ti8131783495 = 1;
	int Ti8131883494;
	Ti8131883494 = n81944 + Ti8131783495;
	result = read_and_network81943_fun(Ti8131883494, NULL);
    }
    return result;
}

int read_parameter81945_fun(int Tu7996581946, Value *env){
    int result;
    int Tu8130483489;
    Tu8130483489 = 1;
    int Tu7996883480;
    Tu7996883480 = read_environ81931_fun(Tu8130483489, NULL);
    int Tu8130583488;
    Tu8130583488 = 1;
    int Tu7996783481;
    Tu7996783481 = read_all_object81937_fun(Tu8130583488, NULL);
    int Ti8130683487;
    Ti8130683487 = 0;
    int Tu7996683482;
    Tu7996683482 = read_and_network81943_fun(Ti8130683487, NULL);
    Value* Ta8130783483;
    Ta8130783483 = or_net;
    int Ti8130883484;
    Ti8130883484 = 0;
    int Ti8130983486;
    Ti8130983486 = 0;
    Value* Ta8131083485;
    Ta8131083485 = read_or_network81941_fun(Ti8130983486, NULL);
    Ta8130783483[Ti8130883484].a = Ta8131083485;
    return result;
}

int solver_rect81947_fun(int* m81948, Value* l81949, Value *env){
    int result;
    double Td8119083440;
    Td8119083440 = 0.000000;
    int Ti8119183479;
    Ti8119183479 = 0;
    double Td8119283441;
    Td8119283441 = l81949[Ti8119183479].d;
    bool answera83354;
    if(Td8119083440 == Td8119283441){
	answera83354 = 0;
    }
    else{
	bool Tb8119383474;
	Tb8119383474 = o_isinvert81892_fun(m81948, NULL);
	double Td8119483476;
	Td8119483476 = 0.000000;
	int Ti8119583478;
	Ti8119583478 = 0;
	double Td8119683477;
	Td8119683477 = l81949[Ti8119583478].d;
	int Ti8119783475;
	if(Td8119483476 <= Td8119683477){
	    Ti8119783475 = 0;
	}
	else{
	    Ti8119783475 = 1;
	}
	bool Tb8119883471;
	Tb8119883471 = xor81879_fun(Tb8119383474, Ti8119783475, NULL);
	int Ti8119983472;
	Ti8119983472 = 0;
	double d83442;
	if(Tb8119883471 == Ti8119983472){
	    double Td8120083473;
	    Td8120083473 = o_param_a81896_fun(m81948, NULL);
	    d83442 = -Td8120083473;
	}
	else{
	    d83442 = o_param_a81896_fun(m81948, NULL);
	}
	Value* Ta8120183469;
	Ta8120183469 = solver_w_vec;
	int Ti8120283470;
	Ti8120283470 = 0;
	double Td8120383468;
	Td8120383468 = Ta8120183469[Ti8120283470].d;
	double Td8120483465;
	Td8120483465 = d83442 - Td8120383468;
	int Ti8120583467;
	Ti8120583467 = 0;
	double Td8120683466;
	Td8120683466 = l81949[Ti8120583467].d;
	double d283443;
	d283443 = Td8120483465 / Td8120683466;
	double Td8120783444;
	Td8120783444 = o_param_b81898_fun(m81948, NULL);
	int Ti8120883464;
	Ti8120883464 = 1;
	double Td8120983463;
	Td8120983463 = l81949[Ti8120883464].d;
	double Td8121083459;
	Td8121083459 =  d283443 * Td8120983463;
	Value* Ta8121183461;
	Ta8121183461 = solver_w_vec;
	int Ti8121283462;
	Ti8121283462 = 1;
	double Td8121383460;
	Td8121383460 = Ta8121183461[Ti8121283462].d;
	double Td8121483458;
	Td8121483458 = Td8121083459 + Td8121383460;
	double Td8121583445;
	Td8121583445 = fabs(Td8121483458);
	if(Td8120783444 <= Td8121583445){
	    answera83354 = 0;
	}
	else{
	    double Td8121683446;
	    Td8121683446 = o_param_c81900_fun(m81948, NULL);
	    int Ti8121783457;
	    Ti8121783457 = 2;
	    double Td8121883456;
	    Td8121883456 = l81949[Ti8121783457].d;
	    double Td8121983452;
	    Td8121983452 =  d283443 * Td8121883456;
	    Value* Ta8122083454;
	    Ta8122083454 = solver_w_vec;
	    int Ti8122183455;
	    Ti8122183455 = 2;
	    double Td8122283453;
	    Td8122283453 = Ta8122083454[Ti8122183455].d;
	    double Td8122383451;
	    Td8122383451 = Td8121983452 + Td8122283453;
	    double Td8122483447;
	    Td8122483447 = fabs(Td8122383451);
	    if(Td8121683446 <= Td8122483447){
		answera83354 = 0;
	    }
	    else{
		Value* Ta8122583449;
		Ta8122583449 = solver_dist;
		int Ti8122683450;
		Ti8122683450 = 0;
		int Tu7996983448;
		Ta8122583449[Ti8122683450].d = d283443;
		answera83354 = 1;
	    }
	}
    }
    int Ti8122783355;
    Ti8122783355 = 0;
    if(answera83354 == Ti8122783355){
	double Td8122883400;
	Td8122883400 = 0.000000;
	int Ti8122983439;
	Ti8122983439 = 1;
	double Td8123083401;
	Td8123083401 = l81949[Ti8122983439].d;
	bool answerb83356;
	if(Td8122883400 == Td8123083401){
	    answerb83356 = 0;
	}
	else{
	    bool Tb8123183434;
	    Tb8123183434 = o_isinvert81892_fun(m81948, NULL);
	    double Td8123283436;
	    Td8123283436 = 0.000000;
	    int Ti8123383438;
	    Ti8123383438 = 1;
	    double Td8123483437;
	    Td8123483437 = l81949[Ti8123383438].d;
	    int Ti8123583435;
	    if(Td8123283436 <= Td8123483437){
		Ti8123583435 = 0;
	    }
	    else{
		Ti8123583435 = 1;
	    }
	    bool Tb8123683431;
	    Tb8123683431 = xor81879_fun(Tb8123183434, Ti8123583435, NULL);
	    int Ti8123783432;
	    Ti8123783432 = 0;
	    double d83402;
	    if(Tb8123683431 == Ti8123783432){
		double Td8123883433;
		Td8123883433 = o_param_b81898_fun(m81948, NULL);
		d83402 = -Td8123883433;
	    }
	    else{
		d83402 = o_param_b81898_fun(m81948, NULL);
	    }
	    Value* Ta8123983429;
	    Ta8123983429 = solver_w_vec;
	    int Ti8124083430;
	    Ti8124083430 = 1;
	    double Td8124183428;
	    Td8124183428 = Ta8123983429[Ti8124083430].d;
	    double Td8124283425;
	    Td8124283425 = d83402 - Td8124183428;
	    int Ti8124383427;
	    Ti8124383427 = 1;
	    double Td8124483426;
	    Td8124483426 = l81949[Ti8124383427].d;
	    double d283403;
	    d283403 = Td8124283425 / Td8124483426;
	    double Td8124583404;
	    Td8124583404 = o_param_c81900_fun(m81948, NULL);
	    int Ti8124683424;
	    Ti8124683424 = 2;
	    double Td8124783423;
	    Td8124783423 = l81949[Ti8124683424].d;
	    double Td8124883419;
	    Td8124883419 =  d283403 * Td8124783423;
	    Value* Ta8124983421;
	    Ta8124983421 = solver_w_vec;
	    int Ti8125083422;
	    Ti8125083422 = 2;
	    double Td8125183420;
	    Td8125183420 = Ta8124983421[Ti8125083422].d;
	    double Td8125283418;
	    Td8125283418 = Td8124883419 + Td8125183420;
	    double Td8125383405;
	    Td8125383405 = fabs(Td8125283418);
	    if(Td8124583404 <= Td8125383405){
		answerb83356 = 0;
	    }
	    else{
		double Td8125483406;
		Td8125483406 = o_param_a81896_fun(m81948, NULL);
		int Ti8125583417;
		Ti8125583417 = 0;
		double Td8125683416;
		Td8125683416 = l81949[Ti8125583417].d;
		double Td8125783412;
		Td8125783412 =  d283403 * Td8125683416;
		Value* Ta8125883414;
		Ta8125883414 = solver_w_vec;
		int Ti8125983415;
		Ti8125983415 = 0;
		double Td8126083413;
		Td8126083413 = Ta8125883414[Ti8125983415].d;
		double Td8126183411;
		Td8126183411 = Td8125783412 + Td8126083413;
		double Td8126283407;
		Td8126283407 = fabs(Td8126183411);
		if(Td8125483406 <= Td8126283407){
		    answerb83356 = 0;
		}
		else{
		    Value* Ta8126383409;
		    Ta8126383409 = solver_dist;
		    int Ti8126483410;
		    Ti8126483410 = 0;
		    int Tu7997083408;
		    Ta8126383409[Ti8126483410].d = d283403;
		    answerb83356 = 1;
		}
	    }
	}
	int Ti8126583357;
	Ti8126583357 = 0;
	if(answerb83356 == Ti8126583357){
	    double Td8126683360;
	    Td8126683360 = 0.000000;
	    int Ti8126783399;
	    Ti8126783399 = 2;
	    double Td8126883361;
	    Td8126883361 = l81949[Ti8126783399].d;
	    bool answerc83358;
	    if(Td8126683360 == Td8126883361){
		answerc83358 = 0;
	    }
	    else{
		bool Tb8126983394;
		Tb8126983394 = o_isinvert81892_fun(m81948, NULL);
		double Td8127083396;
		Td8127083396 = 0.000000;
		int Ti8127183398;
		Ti8127183398 = 2;
		double Td8127283397;
		Td8127283397 = l81949[Ti8127183398].d;
		int Ti8127383395;
		if(Td8127083396 <= Td8127283397){
		    Ti8127383395 = 0;
		}
		else{
		    Ti8127383395 = 1;
		}
		bool Tb8127483391;
		Tb8127483391 = xor81879_fun(Tb8126983394, Ti8127383395, NULL);
		int Ti8127583392;
		Ti8127583392 = 0;
		double d83362;
		if(Tb8127483391 == Ti8127583392){
		    double Td8127683393;
		    Td8127683393 = o_param_c81900_fun(m81948, NULL);
		    d83362 = -Td8127683393;
		}
		else{
		    d83362 = o_param_c81900_fun(m81948, NULL);
		}
		Value* Ta8127783389;
		Ta8127783389 = solver_w_vec;
		int Ti8127883390;
		Ti8127883390 = 2;
		double Td8127983388;
		Td8127983388 = Ta8127783389[Ti8127883390].d;
		double Td8128083385;
		Td8128083385 = d83362 - Td8127983388;
		int Ti8128183387;
		Ti8128183387 = 2;
		double Td8128283386;
		Td8128283386 = l81949[Ti8128183387].d;
		double d283363;
		d283363 = Td8128083385 / Td8128283386;
		double Td8128383364;
		Td8128383364 = o_param_a81896_fun(m81948, NULL);
		int Ti8128483384;
		Ti8128483384 = 0;
		double Td8128583383;
		Td8128583383 = l81949[Ti8128483384].d;
		double Td8128683379;
		Td8128683379 =  d283363 * Td8128583383;
		Value* Ta8128783381;
		Ta8128783381 = solver_w_vec;
		int Ti8128883382;
		Ti8128883382 = 0;
		double Td8128983380;
		Td8128983380 = Ta8128783381[Ti8128883382].d;
		double Td8129083378;
		Td8129083378 = Td8128683379 + Td8128983380;
		double Td8129183365;
		Td8129183365 = fabs(Td8129083378);
		if(Td8128383364 <= Td8129183365){
		    answerc83358 = 0;
		}
		else{
		    double Td8129283366;
		    Td8129283366 = o_param_b81898_fun(m81948, NULL);
		    int Ti8129383377;
		    Ti8129383377 = 1;
		    double Td8129483376;
		    Td8129483376 = l81949[Ti8129383377].d;
		    double Td8129583372;
		    Td8129583372 =  d283363 * Td8129483376;
		    Value* Ta8129683374;
		    Ta8129683374 = solver_w_vec;
		    int Ti8129783375;
		    Ti8129783375 = 1;
		    double Td8129883373;
		    Td8129883373 = Ta8129683374[Ti8129783375].d;
		    double Td8129983371;
		    Td8129983371 = Td8129583372 + Td8129883373;
		    double Td8130083367;
		    Td8130083367 = fabs(Td8129983371);
		    if(Td8129283366 <= Td8130083367){
			answerc83358 = 0;
		    }
		    else{
			Value* Ta8130183369;
			Ta8130183369 = solver_dist;
			int Ti8130283370;
			Ti8130283370 = 0;
			int Tu7997183368;
			Ta8130183369[Ti8130283370].d = d283363;
			answerc83358 = 1;
		    }
		}
	    }
	    int Ti8130383359;
	    Ti8130383359 = 0;
	    if(answerc83358 == Ti8130383359){
		result = 0;
	    }
	    else{
		result = 3;
	    }
	}
	else{
	    result = 2;
	}
    }
    else{
	result = 1;
    }
    return result;
}

int solver_surface81950_fun(int* m81951, Value* l81952, Value *env){
    int result;
    int Ti8115683353;
    Ti8115683353 = 0;
    double Td8115783351;
    Td8115783351 = l81952[Ti8115683353].d;
    double Td8115883352;
    Td8115883352 = o_param_a81896_fun(m81951, NULL);
    double Td8115983346;
    Td8115983346 =  Td8115783351 * Td8115883352;
    int Ti8116083350;
    Ti8116083350 = 1;
    double Td8116183348;
    Td8116183348 = l81952[Ti8116083350].d;
    double Td8116283349;
    Td8116283349 = o_param_b81898_fun(m81951, NULL);
    double Td8116383347;
    Td8116383347 =  Td8116183348 * Td8116283349;
    double Td8116483341;
    Td8116483341 = Td8115983346 + Td8116383347;
    int Ti8116583345;
    Ti8116583345 = 2;
    double Td8116683343;
    Td8116683343 = l81952[Ti8116583345].d;
    double Td8116783344;
    Td8116783344 = o_param_c81900_fun(m81951, NULL);
    double Td8116883342;
    Td8116883342 =  Td8116683343 * Td8116783344;
    double q83317;
    q83317 = Td8116483341 + Td8116883342;
    double Td8116983318;
    Td8116983318 = 0.000000;
    if(q83317 <= Td8116983318){
	result = 0;
    }
    else{
	Value* Ta8117083339;
	Ta8117083339 = solver_w_vec;
	int Ti8117183340;
	Ti8117183340 = 0;
	double Td8117283337;
	Td8117283337 = Ta8117083339[Ti8117183340].d;
	double Td8117383338;
	Td8117383338 = o_param_a81896_fun(m81951, NULL);
	double Td8117483331;
	Td8117483331 =  Td8117283337 * Td8117383338;
	Value* Ta8117583335;
	Ta8117583335 = solver_w_vec;
	int Ti8117683336;
	Ti8117683336 = 1;
	double Td8117783333;
	Td8117783333 = Ta8117583335[Ti8117683336].d;
	double Td8117883334;
	Td8117883334 = o_param_b81898_fun(m81951, NULL);
	double Td8117983332;
	Td8117983332 =  Td8117783333 * Td8117883334;
	double Td8118083325;
	Td8118083325 = Td8117483331 + Td8117983332;
	Value* Ta8118183329;
	Ta8118183329 = solver_w_vec;
	int Ti8118283330;
	Ti8118283330 = 2;
	double Td8118383327;
	Td8118383327 = Ta8118183329[Ti8118283330].d;
	double Td8118483328;
	Td8118483328 = o_param_c81900_fun(m81951, NULL);
	double Td8118583326;
	Td8118583326 =  Td8118383327 * Td8118483328;
	double Td8118683324;
	Td8118683324 = Td8118083325 + Td8118583326;
	double t83319;
	t83319 = Td8118683324 / q83317;
	Value* Ta8118783321;
	Ta8118783321 = solver_dist;
	int Ti8118883322;
	Ti8118883322 = 0;
	double Td8118983323;
	Td8118983323 = -t83319;
	int Tu7997283320;
	Ta8118783321[Ti8118883322].d = Td8118983323;
	result = 1;
    }
    return result;
}

double in_prod_sqr_obj81953_fun(int* m81954, Value* v81955, Value *env){
    double result;
    int Ti8114083316;
    Ti8114083316 = 0;
    double Td8114183315;
    Td8114183315 = v81955[Ti8114083316].d;
    double Td8114283313;
    Td8114283313 = fsqr81882_fun(Td8114183315, NULL);
    double Td8114383314;
    Td8114383314 = o_param_a81896_fun(m81954, NULL);
    double Td8114483307;
    Td8114483307 =  Td8114283313 * Td8114383314;
    int Ti8114583312;
    Ti8114583312 = 1;
    double Td8114683311;
    Td8114683311 = v81955[Ti8114583312].d;
    double Td8114783309;
    Td8114783309 = fsqr81882_fun(Td8114683311, NULL);
    double Td8114883310;
    Td8114883310 = o_param_b81898_fun(m81954, NULL);
    double Td8114983308;
    Td8114983308 =  Td8114783309 * Td8114883310;
    double Td8115083301;
    Td8115083301 = Td8114483307 + Td8114983308;
    int Ti8115183306;
    Ti8115183306 = 2;
    double Td8115283305;
    Td8115283305 = v81955[Ti8115183306].d;
    double Td8115383303;
    Td8115383303 = fsqr81882_fun(Td8115283305, NULL);
    double Td8115483304;
    Td8115483304 = o_param_c81900_fun(m81954, NULL);
    double Td8115583302;
    Td8115583302 =  Td8115383303 * Td8115483304;
    result = Td8115083301 + Td8115583302;
    return result;
}

double in_prod_co_objrot81956_fun(int* m81957, Value* v81958, Value *env){
    double result;
    int Ti8111883300;
    Ti8111883300 = 1;
    double Td8111983297;
    Td8111983297 = v81958[Ti8111883300].d;
    int Ti8112083299;
    Ti8112083299 = 2;
    double Td8112183298;
    Td8112183298 = v81958[Ti8112083299].d;
    double Td8112283295;
    Td8112283295 =  Td8111983297 * Td8112183298;
    double Td8112383296;
    Td8112383296 = o_param_r181918_fun(m81957, NULL);
    double Td8112483287;
    Td8112483287 =  Td8112283295 * Td8112383296;
    int Ti8112583294;
    Ti8112583294 = 0;
    double Td8112683291;
    Td8112683291 = v81958[Ti8112583294].d;
    int Ti8112783293;
    Ti8112783293 = 2;
    double Td8112883292;
    Td8112883292 = v81958[Ti8112783293].d;
    double Td8112983289;
    Td8112983289 =  Td8112683291 * Td8112883292;
    double Td8113083290;
    Td8113083290 = o_param_r281920_fun(m81957, NULL);
    double Td8113183288;
    Td8113183288 =  Td8112983289 * Td8113083290;
    double Td8113283279;
    Td8113283279 = Td8112483287 + Td8113183288;
    int Ti8113383286;
    Ti8113383286 = 0;
    double Td8113483283;
    Td8113483283 = v81958[Ti8113383286].d;
    int Ti8113583285;
    Ti8113583285 = 1;
    double Td8113683284;
    Td8113683284 = v81958[Ti8113583285].d;
    double Td8113783281;
    Td8113783281 =  Td8113483283 * Td8113683284;
    double Td8113883282;
    Td8113883282 = o_param_r381922_fun(m81957, NULL);
    double Td8113983280;
    Td8113983280 =  Td8113783281 * Td8113883282;
    result = Td8113283279 + Td8113983280;
    return result;
}

double solver2nd_mul_b81959_fun(int* m81960, Value* l81961, Value *env){
    double result;
    Value* Ta8109383277;
    Ta8109383277 = solver_w_vec;
    int Ti8109483278;
    Ti8109483278 = 0;
    double Td8109583274;
    Td8109583274 = Ta8109383277[Ti8109483278].d;
    int Ti8109683276;
    Ti8109683276 = 0;
    double Td8109783275;
    Td8109783275 = l81961[Ti8109683276].d;
    double Td8109883272;
    Td8109883272 =  Td8109583274 * Td8109783275;
    double Td8109983273;
    Td8109983273 = o_param_a81896_fun(m81960, NULL);
    double Td8110083263;
    Td8110083263 =  Td8109883272 * Td8109983273;
    Value* Ta8110183270;
    Ta8110183270 = solver_w_vec;
    int Ti8110283271;
    Ti8110283271 = 1;
    double Td8110383267;
    Td8110383267 = Ta8110183270[Ti8110283271].d;
    int Ti8110483269;
    Ti8110483269 = 1;
    double Td8110583268;
    Td8110583268 = l81961[Ti8110483269].d;
    double Td8110683265;
    Td8110683265 =  Td8110383267 * Td8110583268;
    double Td8110783266;
    Td8110783266 = o_param_b81898_fun(m81960, NULL);
    double Td8110883264;
    Td8110883264 =  Td8110683265 * Td8110783266;
    double Td8110983254;
    Td8110983254 = Td8110083263 + Td8110883264;
    Value* Ta8111083261;
    Ta8111083261 = solver_w_vec;
    int Ti8111183262;
    Ti8111183262 = 2;
    double Td8111283258;
    Td8111283258 = Ta8111083261[Ti8111183262].d;
    int Ti8111383260;
    Ti8111383260 = 2;
    double Td8111483259;
    Td8111483259 = l81961[Ti8111383260].d;
    double Td8111583256;
    Td8111583256 =  Td8111283258 * Td8111483259;
    double Td8111683257;
    Td8111683257 = o_param_c81900_fun(m81960, NULL);
    double Td8111783255;
    Td8111783255 =  Td8111583256 * Td8111683257;
    result = Td8110983254 + Td8111783255;
    return result;
}

double solver2nd_rot_b81962_fun(int* m81963, Value* l81964, Value *env){
    double result;
    Value* Ta8104783252;
    Ta8104783252 = solver_w_vec;
    int Ti8104883253;
    Ti8104883253 = 2;
    double Td8104983249;
    Td8104983249 = Ta8104783252[Ti8104883253].d;
    int Ti8105083251;
    Ti8105083251 = 1;
    double Td8105183250;
    Td8105183250 = l81964[Ti8105083251].d;
    double Td8105283242;
    Td8105283242 =  Td8104983249 * Td8105183250;
    Value* Ta8105383247;
    Ta8105383247 = solver_w_vec;
    int Ti8105483248;
    Ti8105483248 = 1;
    double Td8105583244;
    Td8105583244 = Ta8105383247[Ti8105483248].d;
    int Ti8105683246;
    Ti8105683246 = 2;
    double Td8105783245;
    Td8105783245 = l81964[Ti8105683246].d;
    double Td8105883243;
    Td8105883243 =  Td8105583244 * Td8105783245;
    double Td8105983240;
    Td8105983240 = Td8105283242 + Td8105883243;
    double Td8106083241;
    Td8106083241 = o_param_r181918_fun(m81963, NULL);
    double Td8106183224;
    Td8106183224 =  Td8105983240 * Td8106083241;
    Value* Ta8106283238;
    Ta8106283238 = solver_w_vec;
    int Ti8106383239;
    Ti8106383239 = 0;
    double Td8106483235;
    Td8106483235 = Ta8106283238[Ti8106383239].d;
    int Ti8106583237;
    Ti8106583237 = 2;
    double Td8106683236;
    Td8106683236 = l81964[Ti8106583237].d;
    double Td8106783228;
    Td8106783228 =  Td8106483235 * Td8106683236;
    Value* Ta8106883233;
    Ta8106883233 = solver_w_vec;
    int Ti8106983234;
    Ti8106983234 = 2;
    double Td8107083230;
    Td8107083230 = Ta8106883233[Ti8106983234].d;
    int Ti8107183232;
    Ti8107183232 = 0;
    double Td8107283231;
    Td8107283231 = l81964[Ti8107183232].d;
    double Td8107383229;
    Td8107383229 =  Td8107083230 * Td8107283231;
    double Td8107483226;
    Td8107483226 = Td8106783228 + Td8107383229;
    double Td8107583227;
    Td8107583227 = o_param_r281920_fun(m81963, NULL);
    double Td8107683225;
    Td8107683225 =  Td8107483226 * Td8107583227;
    double Td8107783208;
    Td8107783208 = Td8106183224 + Td8107683225;
    Value* Ta8107883222;
    Ta8107883222 = solver_w_vec;
    int Ti8107983223;
    Ti8107983223 = 0;
    double Td8108083219;
    Td8108083219 = Ta8107883222[Ti8107983223].d;
    int Ti8108183221;
    Ti8108183221 = 1;
    double Td8108283220;
    Td8108283220 = l81964[Ti8108183221].d;
    double Td8108383212;
    Td8108383212 =  Td8108083219 * Td8108283220;
    Value* Ta8108483217;
    Ta8108483217 = solver_w_vec;
    int Ti8108583218;
    Ti8108583218 = 1;
    double Td8108683214;
    Td8108683214 = Ta8108483217[Ti8108583218].d;
    int Ti8108783216;
    Ti8108783216 = 0;
    double Td8108883215;
    Td8108883215 = l81964[Ti8108783216].d;
    double Td8108983213;
    Td8108983213 =  Td8108683214 * Td8108883215;
    double Td8109083210;
    Td8109083210 = Td8108383212 + Td8108983213;
    double Td8109183211;
    Td8109183211 = o_param_r381922_fun(m81963, NULL);
    double Td8109283209;
    Td8109283209 =  Td8109083210 * Td8109183211;
    result = Td8107783208 + Td8109283209;
    return result;
}

int solver_second81965_fun(int* m81966, Value* l81967, Value *env){
    int result;
    double aa083167;
    aa083167 = in_prod_sqr_obj81953_fun(m81966, l81967, NULL);
    int Ti8101883205;
    Ti8101883205 = o_isrot81894_fun(m81966, NULL);
    int Ti8101983206;
    Ti8101983206 = 0;
    double aa83168;
    if(Ti8101883205 == Ti8101983206){
	aa83168 = aa083167;
    }
    else{
	double Td8102083207;
	Td8102083207 = in_prod_co_objrot81956_fun(m81966, l81967, NULL);
	aa83168 = aa083167 + Td8102083207;
    }
    double Td8102183169;
    Td8102183169 = 0.000000;
    if(Td8102183169 == aa83168){
	result = 0;
    }
    else{
	double Td8102283203;
	Td8102283203 = 2.000000;
	double Td8102383204;
	Td8102383204 = solver2nd_mul_b81959_fun(m81966, l81967, NULL);
	double bb083170;
	bb083170 =  Td8102283203 * Td8102383204;
	int Ti8102483200;
	Ti8102483200 = o_isrot81894_fun(m81966, NULL);
	int Ti8102583201;
	Ti8102583201 = 0;
	double bb83171;
	if(Ti8102483200 == Ti8102583201){
	    bb83171 = bb083170;
	}
	else{
	    double Td8102683202;
	    Td8102683202 = solver2nd_rot_b81962_fun(m81966, l81967, NULL);
	    bb83171 = bb083170 + Td8102683202;
	}
	Value* Ta8102783199;
	Ta8102783199 = solver_w_vec;
	double cc083172;
	cc083172 = in_prod_sqr_obj81953_fun(m81966, Ta8102783199, NULL);
	int Ti8102883195;
	Ti8102883195 = o_isrot81894_fun(m81966, NULL);
	int Ti8102983196;
	Ti8102983196 = 0;
	double cc183173;
	if(Ti8102883195 == Ti8102983196){
	    cc183173 = cc083172;
	}
	else{
	    Value* Ta8103083198;
	    Ta8103083198 = solver_w_vec;
	    double Td8103183197;
	    Td8103183197 = in_prod_co_objrot81956_fun(m81966, Ta8103083198, NULL);
	    cc183173 = cc083172 + Td8103183197;
	}
	int Ti8103283192;
	Ti8103283192 = o_form81888_fun(m81966, NULL);
	int Ti8103383193;
	Ti8103383193 = 3;
	double cc83174;
	if(Ti8103283192 == Ti8103383193){
	    double Td8103483194;
	    Td8103483194 = 1.000000;
	    cc83174 = cc183173 - Td8103483194;
	}
	else{
	    cc83174 = cc183173;
	}
	double Td8103583191;
	Td8103583191 = 4.000000;
	double Td8103683190;
	Td8103683190 =  Td8103583191 * aa83168;
	double d283188;
	d283188 =  Td8103683190 * cc83174;
	double Td8103783189;
	Td8103783189 = fsqr81882_fun(bb83171, NULL);
	double d83175;
	d83175 = Td8103783189 - d283188;
	double Td8103883176;
	Td8103883176 = 0.000000;
	if(d83175 <= Td8103883176){
	    result = 0;
	}
	else{
	    double sd83177;
	    sd83177 = sqrt(d83175);
	    bool Tb8103983186;
	    Tb8103983186 = o_isinvert81892_fun(m81966, NULL);
	    int Ti8104083187;
	    Ti8104083187 = 0;
	    double t183178;
	    if(Tb8103983186 == Ti8104083187){
		t183178 = -sd83177;
	    }
	    else{
		t183178 = sd83177;
	    }
	    Value* Ta8104183180;
	    Ta8104183180 = solver_dist;
	    int Ti8104283181;
	    Ti8104283181 = 0;
	    double Td8104383184;
	    Td8104383184 = t183178 - bb83171;
	    double Td8104483185;
	    Td8104483185 = 2.000000;
	    double Td8104583183;
	    Td8104583183 = Td8104383184 / Td8104483185;
	    double Td8104683182;
	    Td8104683182 = Td8104583183 / aa83168;
	    int Tu7997383179;
	    Ta8104183180[Ti8104283181].d = Td8104683182;
	    result = 1;
	}
    }
    return result;
}

int solver81968_fun(int index81969, Value* l81970, Value* p81971, Value *env){
    int result;
    Value* Ta8099783166;
    Ta8099783166 = objects;
    int* m83141;
    m83141 = Ta8099783166[index81969].a;
    Value* Ta8099883160;
    Ta8099883160 = solver_w_vec;
    int Ti8099983161;
    Ti8099983161 = 0;
    int Ti8100083165;
    Ti8100083165 = 0;
    double Td8100183163;
    Td8100183163 = p81971[Ti8100083165].d;
    double Td8100283164;
    Td8100283164 = o_param_x81902_fun(m83141, NULL);
    double Td8100383162;
    Td8100383162 = Td8100183163 - Td8100283164;
    int Tu7997683142;
    Ta8099883160[Ti8099983161].d = Td8100383162;
    Value* Ta8100483154;
    Ta8100483154 = solver_w_vec;
    int Ti8100583155;
    Ti8100583155 = 1;
    int Ti8100683159;
    Ti8100683159 = 1;
    double Td8100783157;
    Td8100783157 = p81971[Ti8100683159].d;
    double Td8100883158;
    Td8100883158 = o_param_y81904_fun(m83141, NULL);
    double Td8100983156;
    Td8100983156 = Td8100783157 - Td8100883158;
    int Tu7997583143;
    Ta8100483154[Ti8100583155].d = Td8100983156;
    Value* Ta8101083148;
    Ta8101083148 = solver_w_vec;
    int Ti8101183149;
    Ti8101183149 = 2;
    int Ti8101283153;
    Ti8101283153 = 2;
    double Td8101383151;
    Td8101383151 = p81971[Ti8101283153].d;
    double Td8101483152;
    Td8101483152 = o_param_z81906_fun(m83141, NULL);
    double Td8101583150;
    Td8101583150 = Td8101383151 - Td8101483152;
    int Tu7997483144;
    Ta8101083148[Ti8101183149].d = Td8101583150;
    int m_shape83145;
    m_shape83145 = o_form81888_fun(m83141, NULL);
    int Ti8101683146;
    Ti8101683146 = 1;
    if(m_shape83145 == Ti8101683146){
	result = solver_rect81947_fun(m83141, l81970, NULL);
    }
    else{
	int Ti8101783147;
	Ti8101783147 = 2;
	if(m_shape83145 == Ti8101783147){
	    result = solver_surface81950_fun(m83141, l81970, NULL);
	}
	else{
	    result = solver_second81965_fun(m83141, l81970, NULL);
	}
    }
    return result;
}

bool is_rect_outside81972_fun(int* m81973, Value *env){
    bool result;
    double Td8097883126;
    Td8097883126 = o_param_a81896_fun(m81973, NULL);
    Value* Ta8097983139;
    Ta8097983139 = isoutside_q;
    int Ti8098083140;
    Ti8098083140 = 0;
    double Td8098183138;
    Td8098183138 = Ta8097983139[Ti8098083140].d;
    double Td8098283127;
    Td8098283127 = fabs(Td8098183138);
    int Ti8099383122;
    if(Td8097883126 <= Td8098283127){
	Ti8099383122 = 0;
    }
    else{
	double Td8098383128;
	Td8098383128 = o_param_b81898_fun(m81973, NULL);
	Value* Ta8098483136;
	Ta8098483136 = isoutside_q;
	int Ti8098583137;
	Ti8098583137 = 1;
	double Td8098683135;
	Td8098683135 = Ta8098483136[Ti8098583137].d;
	double Td8098783129;
	Td8098783129 = fabs(Td8098683135);
	if(Td8098383128 <= Td8098783129){
	    Ti8099383122 = 0;
	}
	else{
	    double Td8098883130;
	    Td8098883130 = o_param_c81900_fun(m81973, NULL);
	    Value* Ta8098983133;
	    Ta8098983133 = isoutside_q;
	    int Ti8099083134;
	    Ti8099083134 = 2;
	    double Td8099183132;
	    Td8099183132 = Ta8098983133[Ti8099083134].d;
	    double Td8099283131;
	    Td8099283131 = fabs(Td8099183132);
	    if(Td8098883130 <= Td8099283131){
		Ti8099383122 = 0;
	    }
	    else{
		Ti8099383122 = 1;
	    }
	}
    }
    int Ti8099483123;
    Ti8099483123 = 0;
    if(Ti8099383122 == Ti8099483123){
	bool Tb8099583124;
	Tb8099583124 = o_isinvert81892_fun(m81973, NULL);
	int Ti8099683125;
	Ti8099683125 = 0;
	if(Tb8099583124 == Ti8099683125){
	    result = 1;
	}
	else{
	    result = 0;
	}
    }
    else{
	result = o_isinvert81892_fun(m81973, NULL);
    }
    return result;
}

bool is_plane_outside81974_fun(int* m81975, Value *env){
    bool result;
    double Td8095883118;
    Td8095883118 = o_param_a81896_fun(m81975, NULL);
    Value* Ta8095983120;
    Ta8095983120 = isoutside_q;
    int Ti8096083121;
    Ti8096083121 = 0;
    double Td8096183119;
    Td8096183119 = Ta8095983120[Ti8096083121].d;
    double Td8096283112;
    Td8096283112 =  Td8095883118 * Td8096183119;
    double Td8096383114;
    Td8096383114 = o_param_b81898_fun(m81975, NULL);
    Value* Ta8096483116;
    Ta8096483116 = isoutside_q;
    int Ti8096583117;
    Ti8096583117 = 1;
    double Td8096683115;
    Td8096683115 = Ta8096483116[Ti8096583117].d;
    double Td8096783113;
    Td8096783113 =  Td8096383114 * Td8096683115;
    double Td8096883106;
    Td8096883106 = Td8096283112 + Td8096783113;
    double Td8096983108;
    Td8096983108 = o_param_c81900_fun(m81975, NULL);
    Value* Ta8097083110;
    Ta8097083110 = isoutside_q;
    int Ti8097183111;
    Ti8097183111 = 2;
    double Td8097283109;
    Td8097283109 = Ta8097083110[Ti8097183111].d;
    double Td8097383107;
    Td8097383107 =  Td8096983108 * Td8097283109;
    double w83100;
    w83100 = Td8096883106 + Td8097383107;
    double Td8097483105;
    Td8097483105 = 0.000000;
    bool s83101;
    if(Td8097483105 <= w83100){
	s83101 = 0;
    }
    else{
	s83101 = 1;
    }
    bool Tb8097583104;
    Tb8097583104 = o_isinvert81892_fun(m81975, NULL);
    bool Tb8097683102;
    Tb8097683102 = xor81879_fun(Tb8097583104, s83101, NULL);
    int Ti8097783103;
    Ti8097783103 = 0;
    if(Tb8097683102 == Ti8097783103){
	result = 1;
    }
    else{
	result = 0;
    }
    return result;
}

bool is_second_outside81976_fun(int* m81977, Value *env){
    bool result;
    Value* Ta8094683099;
    Ta8094683099 = isoutside_q;
    double w83084;
    w83084 = in_prod_sqr_obj81953_fun(m81977, Ta8094683099, NULL);
    int Ti8094783096;
    Ti8094783096 = o_form81888_fun(m81977, NULL);
    int Ti8094883097;
    Ti8094883097 = 3;
    double w283085;
    if(Ti8094783096 == Ti8094883097){
	double Td8094983098;
	Td8094983098 = 1.000000;
	w283085 = w83084 - Td8094983098;
    }
    else{
	w283085 = w83084;
    }
    int Ti8095083092;
    Ti8095083092 = o_isrot81894_fun(m81977, NULL);
    int Ti8095183093;
    Ti8095183093 = 0;
    double w383086;
    if(Ti8095083092 == Ti8095183093){
	w383086 = w283085;
    }
    else{
	Value* Ta8095283095;
	Ta8095283095 = isoutside_q;
	double Td8095383094;
	Td8095383094 = in_prod_co_objrot81956_fun(m81977, Ta8095283095, NULL);
	w383086 = w283085 + Td8095383094;
    }
    double Td8095483091;
    Td8095483091 = 0.000000;
    bool s83087;
    if(Td8095483091 <= w383086){
	s83087 = 0;
    }
    else{
	s83087 = 1;
    }
    bool Tb8095583090;
    Tb8095583090 = o_isinvert81892_fun(m81977, NULL);
    bool Tb8095683088;
    Tb8095683088 = xor81879_fun(Tb8095583090, s83087, NULL);
    int Ti8095783089;
    Ti8095783089 = 0;
    if(Tb8095683088 == Ti8095783089){
	result = 1;
    }
    else{
	result = 0;
    }
    return result;
}

bool is_outside81978_fun(int* m81979, Value *env){
    bool result;
    Value* Ta8092383077;
    Ta8092383077 = isoutside_q;
    int Ti8092483078;
    Ti8092483078 = 0;
    Value* Ta8092583082;
    Ta8092583082 = chkinside_p;
    int Ti8092683083;
    Ti8092683083 = 0;
    double Td8092783080;
    Td8092783080 = Ta8092583082[Ti8092683083].d;
    double Td8092883081;
    Td8092883081 = o_param_x81902_fun(m81979, NULL);
    double Td8092983079;
    Td8092983079 = Td8092783080 - Td8092883081;
    int Tu7997983057;
    Ta8092383077[Ti8092483078].d = Td8092983079;
    Value* Ta8093083070;
    Ta8093083070 = isoutside_q;
    int Ti8093183071;
    Ti8093183071 = 1;
    Value* Ta8093283075;
    Ta8093283075 = chkinside_p;
    int Ti8093383076;
    Ti8093383076 = 1;
    double Td8093483073;
    Td8093483073 = Ta8093283075[Ti8093383076].d;
    double Td8093583074;
    Td8093583074 = o_param_y81904_fun(m81979, NULL);
    double Td8093683072;
    Td8093683072 = Td8093483073 - Td8093583074;
    int Tu7997883058;
    Ta8093083070[Ti8093183071].d = Td8093683072;
    Value* Ta8093783063;
    Ta8093783063 = isoutside_q;
    int Ti8093883064;
    Ti8093883064 = 2;
    Value* Ta8093983068;
    Ta8093983068 = chkinside_p;
    int Ti8094083069;
    Ti8094083069 = 2;
    double Td8094183066;
    Td8094183066 = Ta8093983068[Ti8094083069].d;
    double Td8094283067;
    Td8094283067 = o_param_z81906_fun(m81979, NULL);
    double Td8094383065;
    Td8094383065 = Td8094183066 - Td8094283067;
    int Tu7997783059;
    Ta8093783063[Ti8093883064].d = Td8094383065;
    int m_shape83060;
    m_shape83060 = o_form81888_fun(m81979, NULL);
    int Ti8094483061;
    Ti8094483061 = 1;
    if(m_shape83060 == Ti8094483061){
	result = is_rect_outside81972_fun(m81979, NULL);
    }
    else{
	int Ti8094583062;
	Ti8094583062 = 2;
	if(m_shape83060 == Ti8094583062){
	    result = is_plane_outside81974_fun(m81979, NULL);
	}
	else{
	    result = is_second_outside81976_fun(m81979, NULL);
	}
    }
    return result;
}

bool check_all_inside81980_fun(int ofs81981, Value* iand81982, Value *env){
    bool result;
    int head83048;
    head83048 = iand81982[ofs81981].i;
    int Ti8091583056;
    Ti8091583056 = 1;
    int Ti8091683049;
    Ti8091683049 = -Ti8091583056;
    if(head83048 == Ti8091683049){
	result = 1;
    }
    else{
	Value* Ta8091783055;
	Ta8091783055 = objects;
	int* Tt8091883054;
	Tt8091883054 = Ta8091783055[head83048].a;
	bool Tb8091983050;
	Tb8091983050 = is_outside81978_fun(Tt8091883054, NULL);
	int Ti8092083051;
	Ti8092083051 = 0;
	if(Tb8091983050 == Ti8092083051){
	    int Ti8092183053;
	    Ti8092183053 = 1;
	    int Ti8092283052;
	    Ti8092283052 = ofs81981 + Ti8092183053;
	    result = check_all_inside81980_fun(Ti8092283052, iand81982, NULL);
	}
	else{
	    result = 0;
	}
    }
    return result;
}

bool shadow_check_and_group81983_fun(int iand_ofs81984, Value* and_group81985, Value* p81986, Value *env){
    bool result;
    int Ti8086682992;
    Ti8086682992 = and_group81985[iand_ofs81984].i;
    int Ti8086783047;
    Ti8086783047 = 1;
    int Ti8086882993;
    Ti8086882993 = -Ti8086783047;
    if(Ti8086682992 == Ti8086882993){
	result = 0;
    }
    else{
	int obj82994;
	obj82994 = and_group81985[iand_ofs81984].i;
	Value* Ta8086983046;
	Ta8086983046 = light;
	int t082995;
	t082995 = solver81968_fun(obj82994, Ta8086983046, p81986, NULL);
	Value* Ta8087083044;
	Ta8087083044 = solver_dist;
	int Ti8087183045;
	Ti8087183045 = 0;
	double t0p82996;
	t0p82996 = Ta8087083044[Ti8087183045].d;
	int Ti8087283042;
	Ti8087283042 = 0;
	int Ti8087482997;
	if(t082995 == Ti8087283042){
	    Ti8087482997 = 0;
	}
	else{
	    double Td8087383043;
	    Td8087383043 = -0.200000;
	    if(Td8087383043 <= t0p82996){
		Ti8087482997 = 0;
	    }
	    else{
		Ti8087482997 = 1;
	    }
	}
	int Ti8087582998;
	Ti8087582998 = 0;
	if(Ti8087482997 == Ti8087582998){
	    Value* Ta8087683041;
	    Ta8087683041 = objects;
	    int* Tt8087783040;
	    Tt8087783040 = Ta8087683041[obj82994].a;
	    bool Tb8087883036;
	    Tb8087883036 = o_isinvert81892_fun(Tt8087783040, NULL);
	    int Ti8087983037;
	    Ti8087983037 = 0;
	    if(Tb8087883036 == Ti8087983037){
		result = 0;
	    }
	    else{
		int Ti8088083039;
		Ti8088083039 = 1;
		int Ti8088183038;
		Ti8088183038 = iand_ofs81984 + Ti8088083039;
		result = shadow_check_and_group81983_fun(Ti8088183038, and_group81985, p81986, NULL);
	    }
	}
	else{
	    double Td8088283035;
	    Td8088283035 = 0.010000;
	    double t82999;
	    t82999 = t0p82996 + Td8088283035;
	    Value* Ta8088383026;
	    Ta8088383026 = chkinside_p;
	    int Ti8088483027;
	    Ti8088483027 = 0;
	    Value* Ta8088583033;
	    Ta8088583033 = light;
	    int Ti8088683034;
	    Ti8088683034 = 0;
	    double Td8088783032;
	    Td8088783032 = Ta8088583033[Ti8088683034].d;
	    double Td8088883029;
	    Td8088883029 =  Td8088783032 * t82999;
	    int Ti8088983031;
	    Ti8088983031 = 0;
	    double Td8089083030;
	    Td8089083030 = p81986[Ti8088983031].d;
	    double Td8089183028;
	    Td8089183028 = Td8088883029 + Td8089083030;
	    int Tu7998283000;
	    Ta8088383026[Ti8088483027].d = Td8089183028;
	    Value* Ta8089283017;
	    Ta8089283017 = chkinside_p;
	    int Ti8089383018;
	    Ti8089383018 = 1;
	    Value* Ta8089483024;
	    Ta8089483024 = light;
	    int Ti8089583025;
	    Ti8089583025 = 1;
	    double Td8089683023;
	    Td8089683023 = Ta8089483024[Ti8089583025].d;
	    double Td8089783020;
	    Td8089783020 =  Td8089683023 * t82999;
	    int Ti8089883022;
	    Ti8089883022 = 1;
	    double Td8089983021;
	    Td8089983021 = p81986[Ti8089883022].d;
	    double Td8090083019;
	    Td8090083019 = Td8089783020 + Td8089983021;
	    int Tu7998183001;
	    Ta8089283017[Ti8089383018].d = Td8090083019;
	    Value* Ta8090183008;
	    Ta8090183008 = chkinside_p;
	    int Ti8090283009;
	    Ti8090283009 = 2;
	    Value* Ta8090383015;
	    Ta8090383015 = light;
	    int Ti8090483016;
	    Ti8090483016 = 2;
	    double Td8090583014;
	    Td8090583014 = Ta8090383015[Ti8090483016].d;
	    double Td8090683011;
	    Td8090683011 =  Td8090583014 * t82999;
	    int Ti8090783013;
	    Ti8090783013 = 2;
	    double Td8090883012;
	    Td8090883012 = p81986[Ti8090783013].d;
	    double Td8090983010;
	    Td8090983010 = Td8090683011 + Td8090883012;
	    int Tu7998083002;
	    Ta8090183008[Ti8090283009].d = Td8090983010;
	    int Ti8091083007;
	    Ti8091083007 = 0;
	    bool Tb8091183003;
	    Tb8091183003 = check_all_inside81980_fun(Ti8091083007, and_group81985, NULL);
	    int Ti8091283004;
	    Ti8091283004 = 0;
	    if(Tb8091183003 == Ti8091283004){
		int Ti8091383006;
		Ti8091383006 = 1;
		int Ti8091483005;
		Ti8091483005 = iand_ofs81984 + Ti8091383006;
		result = shadow_check_and_group81983_fun(Ti8091483005, and_group81985, p81986, NULL);
	    }
	    else{
		result = 1;
	    }
	}
    }
    return result;
}

bool shadow_check_one_or_group81987_fun(int ofs81988, Value* or_group81989, Value* p81990, Value *env){
    bool result;
    int head82982;
    head82982 = or_group81989[ofs81988].i;
    int Ti8085982991;
    Ti8085982991 = 1;
    int Ti8086082983;
    Ti8086082983 = -Ti8085982991;
    if(head82982 == Ti8086082983){
	result = 0;
    }
    else{
	Value* Ta8086182990;
	Ta8086182990 = and_net;
	Value* and_group82984;
	and_group82984 = Ta8086182990[head82982].a;
	int Ti8086282989;
	Ti8086282989 = 0;
	bool shadow_p82985;
	shadow_p82985 = shadow_check_and_group81983_fun(Ti8086282989, and_group82984, p81990, NULL);
	int Ti8086382986;
	Ti8086382986 = 0;
	if(shadow_p82985 == Ti8086382986){
	    int Ti8086482988;
	    Ti8086482988 = 1;
	    int Ti8086582987;
	    Ti8086582987 = ofs81988 + Ti8086482988;
	    result = shadow_check_one_or_group81987_fun(Ti8086582987, or_group81989, p81990, NULL);
	}
	else{
	    result = 1;
	}
    }
    return result;
}

bool shadow_check_one_or_matrix81991_fun(int ofs81992, Value* or_matrix81993, Value* p81994, Value *env){
    bool result;
    Value* head82955;
    head82955 = or_matrix81993[ofs81992].a;
    int Ti8083582981;
    Ti8083582981 = 0;
    int range_primitive82956;
    range_primitive82956 = head82955[Ti8083582981].i;
    int Ti8083682980;
    Ti8083682980 = 1;
    int Ti8083782957;
    Ti8083782957 = -Ti8083682980;
    if(range_primitive82956 == Ti8083782957){
	result = 0;
    }
    else{
	int Ti8083882958;
	Ti8083882958 = 99;
	if(range_primitive82956 == Ti8083882958){
	    int Ti8083982979;
	    Ti8083982979 = 1;
	    bool Tb8084082975;
	    Tb8084082975 = shadow_check_one_or_group81987_fun(Ti8083982979, head82955, p81994, NULL);
	    int Ti8084182976;
	    Ti8084182976 = 0;
	    if(Tb8084082975 == Ti8084182976){
		int Ti8084282978;
		Ti8084282978 = 1;
		int Ti8084382977;
		Ti8084382977 = ofs81992 + Ti8084282978;
		result = shadow_check_one_or_matrix81991_fun(Ti8084382977, or_matrix81993, p81994, NULL);
	    }
	    else{
		result = 1;
	    }
	}
	else{
	    Value* Ta8084482974;
	    Ta8084482974 = light;
	    int t82959;
	    t82959 = solver81968_fun(range_primitive82956, Ta8084482974, p81994, NULL);
	    int Ti8084582960;
	    Ti8084582960 = 0;
	    if(t82959 == Ti8084582960){
		int Ti8084682973;
		Ti8084682973 = 1;
		int Ti8084782972;
		Ti8084782972 = ofs81992 + Ti8084682973;
		result = shadow_check_one_or_matrix81991_fun(Ti8084782972, or_matrix81993, p81994, NULL);
	    }
	    else{
		double Td8084882961;
		Td8084882961 = -0.100000;
		Value* Ta8084982970;
		Ta8084982970 = solver_dist;
		int Ti8085082971;
		Ti8085082971 = 0;
		double Td8085182962;
		Td8085182962 = Ta8084982970[Ti8085082971].d;
		if(Td8084882961 <= Td8085182962){
		    int Ti8085282969;
		    Ti8085282969 = 1;
		    int Ti8085382968;
		    Ti8085382968 = ofs81992 + Ti8085282969;
		    result = shadow_check_one_or_matrix81991_fun(Ti8085382968, or_matrix81993, p81994, NULL);
		}
		else{
		    int Ti8085482967;
		    Ti8085482967 = 1;
		    bool Tb8085582963;
		    Tb8085582963 = shadow_check_one_or_group81987_fun(Ti8085482967, head82955, p81994, NULL);
		    int Ti8085682964;
		    Ti8085682964 = 0;
		    if(Tb8085582963 == Ti8085682964){
			int Ti8085782966;
			Ti8085782966 = 1;
			int Ti8085882965;
			Ti8085882965 = ofs81992 + Ti8085782966;
			result = shadow_check_one_or_matrix81991_fun(Ti8085882965, or_matrix81993, p81994, NULL);
		    }
		    else{
			result = 1;
		    }
		}
	    }
	}
    }
    return result;
}

int solve_each_element81995_fun(int iand_ofs81996, Value* and_group81997, Value *env){
    int result;
    int iobj82863;
    iobj82863 = and_group81997[iand_ofs81996].i;
    int Ti8075682954;
    Ti8075682954 = 1;
    int Ti8075782864;
    Ti8075782864 = -Ti8075682954;
    if(iobj82863 == Ti8075782864){
	result = 1;
    }
    else{
	Value* Ta8075882952;
	Ta8075882952 = vscan;
	Value* Ta8075982953;
	Ta8075982953 = viewpoint;
	int t082865;
	t082865 = solver81968_fun(iobj82863, Ta8075882952, Ta8075982953, NULL);
	int Ti8076082873;
	Ti8076082873 = 0;
	int Tu7999182866;
	if(t082865 == Ti8076082873){
	    Value* Ta8076182951;
	    Ta8076182951 = objects;
	    int* Tt8076282950;
	    Tt8076282950 = Ta8076182951[iobj82863].a;
	    bool Tb8076382945;
	    Tb8076382945 = o_isinvert81892_fun(Tt8076282950, NULL);
	    int Ti8076482946;
	    Ti8076482946 = 0;
	    if(Tb8076382945 == Ti8076482946){
		Value* Ta8076582947;
		Ta8076582947 = end_flag;
		int Ti8076682948;
		Ti8076682948 = 0;
		int Ti8076782949;
		Ti8076782949 = 1;
		Ta8076582947[Ti8076682948].i = Ti8076782949;
	    }
	    else{
		Tu7999182866 = 1;
	    }
	}
	else{
	    Value* Ta8076882943;
	    Ta8076882943 = solver_dist;
	    int Ti8076982944;
	    Ti8076982944 = 0;
	    double t0p82874;
	    t0p82874 = Ta8076882943[Ti8076982944].d;
	    double Td8077082875;
	    Td8077082875 = -0.100000;
	    if(t0p82874 <= Td8077082875){
		Tu7999182866 = 1;
	    }
	    else{
		Value* Ta8077182941;
		Ta8077182941 = tmin;
		int Ti8077282942;
		Ti8077282942 = 0;
		double Td8077382876;
		Td8077382876 = Ta8077182941[Ti8077282942].d;
		if(Td8077382876 <= t0p82874){
		    Tu7999182866 = 1;
		}
		else{
		    double Td8077482940;
		    Td8077482940 = 0.010000;
		    double t82877;
		    t82877 = t0p82874 + Td8077482940;
		    Value* Ta8077582930;
		    Ta8077582930 = chkinside_p;
		    int Ti8077682931;
		    Ti8077682931 = 0;
		    Value* Ta8077782938;
		    Ta8077782938 = vscan;
		    int Ti8077882939;
		    Ti8077882939 = 0;
		    double Td8077982937;
		    Td8077982937 = Ta8077782938[Ti8077882939].d;
		    double Td8078082933;
		    Td8078082933 =  Td8077982937 * t82877;
		    Value* Ta8078182935;
		    Ta8078182935 = viewpoint;
		    int Ti8078282936;
		    Ti8078282936 = 0;
		    double Td8078382934;
		    Td8078382934 = Ta8078182935[Ti8078282936].d;
		    double Td8078482932;
		    Td8078482932 = Td8078082933 + Td8078382934;
		    int Tu7999082878;
		    Ta8077582930[Ti8077682931].d = Td8078482932;
		    Value* Ta8078582920;
		    Ta8078582920 = chkinside_p;
		    int Ti8078682921;
		    Ti8078682921 = 1;
		    Value* Ta8078782928;
		    Ta8078782928 = vscan;
		    int Ti8078882929;
		    Ti8078882929 = 1;
		    double Td8078982927;
		    Td8078982927 = Ta8078782928[Ti8078882929].d;
		    double Td8079082923;
		    Td8079082923 =  Td8078982927 * t82877;
		    Value* Ta8079182925;
		    Ta8079182925 = viewpoint;
		    int Ti8079282926;
		    Ti8079282926 = 1;
		    double Td8079382924;
		    Td8079382924 = Ta8079182925[Ti8079282926].d;
		    double Td8079482922;
		    Td8079482922 = Td8079082923 + Td8079382924;
		    int Tu7998982879;
		    Ta8078582920[Ti8078682921].d = Td8079482922;
		    Value* Ta8079582910;
		    Ta8079582910 = chkinside_p;
		    int Ti8079682911;
		    Ti8079682911 = 2;
		    Value* Ta8079782918;
		    Ta8079782918 = vscan;
		    int Ti8079882919;
		    Ti8079882919 = 2;
		    double Td8079982917;
		    Td8079982917 = Ta8079782918[Ti8079882919].d;
		    double Td8080082913;
		    Td8080082913 =  Td8079982917 * t82877;
		    Value* Ta8080182915;
		    Ta8080182915 = viewpoint;
		    int Ti8080282916;
		    Ti8080282916 = 2;
		    double Td8080382914;
		    Td8080382914 = Ta8080182915[Ti8080282916].d;
		    double Td8080482912;
		    Td8080482912 = Td8080082913 + Td8080382914;
		    int Tu7998882880;
		    Ta8079582910[Ti8079682911].d = Td8080482912;
		    int Ti8080582909;
		    Ti8080582909 = 0;
		    bool Tb8080682881;
		    Tb8080682881 = check_all_inside81980_fun(Ti8080582909, and_group81997, NULL);
		    int Ti8080782882;
		    Ti8080782882 = 0;
		    if(Tb8080682881 == Ti8080782882){
			Tu7999182866 = 1;
		    }
		    else{
			Value* Ta8080882907;
			Ta8080882907 = tmin;
			int Ti8080982908;
			Ti8080982908 = 0;
			int Tu7998782883;
			Ta8080882907[Ti8080982908].d = t82877;
			Value* Ta8081082902;
			Ta8081082902 = crashed_point;
			int Ti8081182903;
			Ti8081182903 = 0;
			Value* Ta8081282905;
			Ta8081282905 = chkinside_p;
			int Ti8081382906;
			Ti8081382906 = 0;
			double Td8081482904;
			Td8081482904 = Ta8081282905[Ti8081382906].d;
			int Tu7998682884;
			Ta8081082902[Ti8081182903].d = Td8081482904;
			Value* Ta8081582897;
			Ta8081582897 = crashed_point;
			int Ti8081682898;
			Ti8081682898 = 1;
			Value* Ta8081782900;
			Ta8081782900 = chkinside_p;
			int Ti8081882901;
			Ti8081882901 = 1;
			double Td8081982899;
			Td8081982899 = Ta8081782900[Ti8081882901].d;
			int Tu7998582885;
			Ta8081582897[Ti8081682898].d = Td8081982899;
			Value* Ta8082082892;
			Ta8082082892 = crashed_point;
			int Ti8082182893;
			Ti8082182893 = 2;
			Value* Ta8082282895;
			Ta8082282895 = chkinside_p;
			int Ti8082382896;
			Ti8082382896 = 2;
			double Td8082482894;
			Td8082482894 = Ta8082282895[Ti8082382896].d;
			int Tu7998482886;
			Ta8082082892[Ti8082182893].d = Td8082482894;
			Value* Ta8082582890;
			Ta8082582890 = intsec_rectside;
			int Ti8082682891;
			Ti8082682891 = 0;
			int Tu7998382887;
			Ta8082582890[Ti8082682891].i = t082865;
			Value* Ta8082782888;
			Ta8082782888 = crashed_object;
			int Ti8082882889;
			Ti8082882889 = 0;
			Ta8082782888[Ti8082882889].i = iobj82863;
		    }
		}
	    }
	}
	Value* Ta8082982871;
	Ta8082982871 = end_flag;
	int Ti8083082872;
	Ti8083082872 = 0;
	bool Tb8083182867;
	Tb8083182867 = Ta8082982871[Ti8083082872].b;
	int Ti8083282868;
	Ti8083282868 = 0;
	if(Tb8083182867 == Ti8083282868){
	    int Ti8083382870;
	    Ti8083382870 = 1;
	    int Ti8083482869;
	    Ti8083482869 = iand_ofs81996 + Ti8083382870;
	    result = solve_each_element81995_fun(Ti8083482869, and_group81997, NULL);
	}
	else{
	    result = 1;
	}
    }
    return result;
}

int solve_one_or_network81998_fun(int ofs81999, Value* or_group82000, Value *env){
    int result;
    int head82850;
    head82850 = or_group82000[ofs81999].i;
    int Ti8074782862;
    Ti8074782862 = 1;
    int Ti8074882851;
    Ti8074882851 = -Ti8074782862;
    if(head82850 == Ti8074882851){
	result = 1;
    }
    else{
	Value* Ta8074982861;
	Ta8074982861 = and_net;
	Value* and_group82852;
	and_group82852 = Ta8074982861[head82850].a;
	Value* Ta8075082858;
	Ta8075082858 = end_flag;
	int Ti8075182859;
	Ti8075182859 = 0;
	int Ti8075282860;
	Ti8075282860 = 0;
	int Tu7999382853;
	Ta8075082858[Ti8075182859].i = Ti8075282860;
	int Ti8075382857;
	Ti8075382857 = 0;
	int Tu7999282854;
	Tu7999282854 = solve_each_element81995_fun(Ti8075382857, and_group82852, NULL);
	int Ti8075482856;
	Ti8075482856 = 1;
	int Ti8075582855;
	Ti8075582855 = ofs81999 + Ti8075482856;
	result = solve_one_or_network81998_fun(Ti8075582855, or_group82000, NULL);
    }
    return result;
}

int trace_or_matrix82001_fun(int ofs82002, Value* or_network82003, Value *env){
    int result;
    Value* head82829;
    head82829 = or_network82003[ofs82002].a;
    int Ti8073182849;
    Ti8073182849 = 0;
    int range_primitive82830;
    range_primitive82830 = head82829[Ti8073182849].i;
    int Ti8073282848;
    Ti8073282848 = 1;
    int Ti8073382831;
    Ti8073382831 = -Ti8073282848;
    if(range_primitive82830 == Ti8073382831){
	result = 1;
    }
    else{
	int Ti8073482835;
	Ti8073482835 = 99;
	int Tu7999482832;
	if(range_primitive82830 == Ti8073482835){
	    int Ti8073582847;
	    Ti8073582847 = 1;
	    Tu7999482832 = solve_one_or_network81998_fun(Ti8073582847, head82829, NULL);
	}
	else{
	    Value* Ta8073682845;
	    Ta8073682845 = vscan;
	    Value* Ta8073782846;
	    Ta8073782846 = viewpoint;
	    int t82836;
	    t82836 = solver81968_fun(range_primitive82830, Ta8073682845, Ta8073782846, NULL);
	    int Ti8073882837;
	    Ti8073882837 = 0;
	    if(t82836 == Ti8073882837){
		Tu7999482832 = 1;
	    }
	    else{
		Value* Ta8073982843;
		Ta8073982843 = solver_dist;
		int Ti8074082844;
		Ti8074082844 = 0;
		double tp82838;
		tp82838 = Ta8073982843[Ti8074082844].d;
		Value* Ta8074182841;
		Ta8074182841 = tmin;
		int Ti8074282842;
		Ti8074282842 = 0;
		double Td8074382839;
		Td8074382839 = Ta8074182841[Ti8074282842].d;
		if(Td8074382839 <= tp82838){
		    Tu7999482832 = 1;
		}
		else{
		    int Ti8074482840;
		    Ti8074482840 = 1;
		    Tu7999482832 = solve_one_or_network81998_fun(Ti8074482840, head82829, NULL);
		}
	    }
	}
	int Ti8074582834;
	Ti8074582834 = 1;
	int Ti8074682833;
	Ti8074682833 = ofs82002 + Ti8074582834;
	result = trace_or_matrix82001_fun(Ti8074682833, or_network82003, NULL);
    }
    return result;
}

bool tracer82004_fun(Value* viewpoint82005, Value* vscan82006, Value *env){
    bool result;
    Value* Ta8072082826;
    Ta8072082826 = tmin;
    int Ti8072182827;
    Ti8072182827 = 0;
    double Td8072282828;
    Td8072282828 = 1000000000.000000;
    int Tu7999682815;
    Ta8072082826[Ti8072182827].d = Td8072282828;
    int Ti8072382822;
    Ti8072382822 = 0;
    Value* Ta8072482824;
    Ta8072482824 = or_net;
    int Ti8072582825;
    Ti8072582825 = 0;
    Value* Ta8072682823;
    Ta8072682823 = Ta8072482824[Ti8072582825].a;
    int Tu7999582816;
    Tu7999582816 = trace_or_matrix82001_fun(Ti8072382822, Ta8072682823, NULL);
    Value* Ta8072782820;
    Ta8072782820 = tmin;
    int Ti8072882821;
    Ti8072882821 = 0;
    double t82817;
    t82817 = Ta8072782820[Ti8072882821].d;
    double Td8072982818;
    Td8072982818 = -0.100000;
    if(t82817 <= Td8072982818){
	result = 0;
    }
    else{
	double Td8073082819;
	Td8073082819 = 100000000.000000;
	if(Td8073082819 <= t82817){
	    result = 0;
	}
	else{
	    result = 1;
	}
    }
    return result;
}

int get_nvector_rect82007_fun(int Tu7999782008, Value *env){
    int result;
    Value* Ta8067682813;
    Ta8067682813 = intsec_rectside;
    int Ti8067782814;
    Ti8067782814 = 0;
    int rectside82764;
    rectside82764 = Ta8067682813[Ti8067782814].i;
    int Ti8067882765;
    Ti8067882765 = 1;
    if(rectside82764 == Ti8067882765){
	Value* Ta8067982806;
	Ta8067982806 = nvector;
	int Ti8068082807;
	Ti8068082807 = 0;
	Value* Ta8068182811;
	Ta8068182811 = vscan;
	int Ti8068282812;
	Ti8068282812 = 0;
	double Td8068382810;
	Td8068382810 = Ta8068182811[Ti8068282812].d;
	double Td8068482809;
	Td8068482809 = sgn81927_fun(Td8068382810, NULL);
	double Td8068582808;
	Td8068582808 = -Td8068482809;
	int Tu7999982798;
	Ta8067982806[Ti8068082807].d = Td8068582808;
	Value* Ta8068682803;
	Ta8068682803 = nvector;
	int Ti8068782804;
	Ti8068782804 = 1;
	double Td8068882805;
	Td8068882805 = 0.000000;
	int Tu7999882799;
	Ta8068682803[Ti8068782804].d = Td8068882805;
	Value* Ta8068982800;
	Ta8068982800 = nvector;
	int Ti8069082801;
	Ti8069082801 = 2;
	double Td8069182802;
	Td8069182802 = 0.000000;
	Ta8068982800[Ti8069082801].d = Td8069182802;
    }
    else{
	int Ti8069282766;
	Ti8069282766 = 2;
	if(rectside82764 == Ti8069282766){
	    Value* Ta8069382795;
	    Ta8069382795 = nvector;
	    int Ti8069482796;
	    Ti8069482796 = 0;
	    double Td8069582797;
	    Td8069582797 = 0.000000;
	    int Tu8000182783;
	    Ta8069382795[Ti8069482796].d = Td8069582797;
	    Value* Ta8069682788;
	    Ta8069682788 = nvector;
	    int Ti8069782789;
	    Ti8069782789 = 1;
	    Value* Ta8069882793;
	    Ta8069882793 = vscan;
	    int Ti8069982794;
	    Ti8069982794 = 1;
	    double Td8070082792;
	    Td8070082792 = Ta8069882793[Ti8069982794].d;
	    double Td8070182791;
	    Td8070182791 = sgn81927_fun(Td8070082792, NULL);
	    double Td8070282790;
	    Td8070282790 = -Td8070182791;
	    int Tu8000082784;
	    Ta8069682788[Ti8069782789].d = Td8070282790;
	    Value* Ta8070382785;
	    Ta8070382785 = nvector;
	    int Ti8070482786;
	    Ti8070482786 = 2;
	    double Td8070582787;
	    Td8070582787 = 0.000000;
	    Ta8070382785[Ti8070482786].d = Td8070582787;
	}
	else{
	    int Ti8070682767;
	    Ti8070682767 = 3;
	    if(rectside82764 == Ti8070682767){
		Value* Ta8070782780;
		Ta8070782780 = nvector;
		int Ti8070882781;
		Ti8070882781 = 0;
		double Td8070982782;
		Td8070982782 = 0.000000;
		int Tu8000382768;
		Ta8070782780[Ti8070882781].d = Td8070982782;
		Value* Ta8071082777;
		Ta8071082777 = nvector;
		int Ti8071182778;
		Ti8071182778 = 1;
		double Td8071282779;
		Td8071282779 = 0.000000;
		int Tu8000282769;
		Ta8071082777[Ti8071182778].d = Td8071282779;
		Value* Ta8071382770;
		Ta8071382770 = nvector;
		int Ti8071482771;
		Ti8071482771 = 2;
		Value* Ta8071582775;
		Ta8071582775 = vscan;
		int Ti8071682776;
		Ti8071682776 = 2;
		double Td8071782774;
		Td8071782774 = Ta8071582775[Ti8071682776].d;
		double Td8071882773;
		Td8071882773 = sgn81927_fun(Td8071782774, NULL);
		double Td8071982772;
		Td8071982772 = -Td8071882773;
		Ta8071382770[Ti8071482771].d = Td8071982772;
	    }
	    else{
		result = 1;
	    }
	}
    }
    return result;
}

int get_nvector_plane82009_fun(int* m82010, Value *env){
    int result;
    Value* Ta8066482760;
    Ta8066482760 = nvector;
    int Ti8066582761;
    Ti8066582761 = 0;
    double Td8066682763;
    Td8066682763 = o_param_a81896_fun(m82010, NULL);
    double Td8066782762;
    Td8066782762 = -Td8066682763;
    int Tu8000582750;
    Ta8066482760[Ti8066582761].d = Td8066782762;
    Value* Ta8066882756;
    Ta8066882756 = nvector;
    int Ti8066982757;
    Ti8066982757 = 1;
    double Td8067082759;
    Td8067082759 = o_param_b81898_fun(m82010, NULL);
    double Td8067182758;
    Td8067182758 = -Td8067082759;
    int Tu8000482751;
    Ta8066882756[Ti8066982757].d = Td8067182758;
    Value* Ta8067282752;
    Ta8067282752 = nvector;
    int Ti8067382753;
    Ti8067382753 = 2;
    double Td8067482755;
    Td8067482755 = o_param_c81900_fun(m82010, NULL);
    double Td8067582754;
    Td8067582754 = -Td8067482755;
    Ta8067282752[Ti8067382753].d = Td8067582754;
    return result;
}

int get_nvector_second_norot82011_fun(int* m82012, Value* p82013, Value *env){
    int result;
    Value* Ta8063882742;
    Ta8063882742 = nvector;
    int Ti8063982743;
    Ti8063982743 = 0;
    int Ti8064082749;
    Ti8064082749 = 0;
    double Td8064182747;
    Td8064182747 = p82013[Ti8064082749].d;
    double Td8064282748;
    Td8064282748 = o_param_x81902_fun(m82012, NULL);
    double Td8064382745;
    Td8064382745 = Td8064182747 - Td8064282748;
    double Td8064482746;
    Td8064482746 = o_param_a81896_fun(m82012, NULL);
    double Td8064582744;
    Td8064582744 =  Td8064382745 * Td8064482746;
    int Tu8000882721;
    Ta8063882742[Ti8063982743].d = Td8064582744;
    Value* Ta8064682734;
    Ta8064682734 = nvector;
    int Ti8064782735;
    Ti8064782735 = 1;
    int Ti8064882741;
    Ti8064882741 = 1;
    double Td8064982739;
    Td8064982739 = p82013[Ti8064882741].d;
    double Td8065082740;
    Td8065082740 = o_param_y81904_fun(m82012, NULL);
    double Td8065182737;
    Td8065182737 = Td8064982739 - Td8065082740;
    double Td8065282738;
    Td8065282738 = o_param_b81898_fun(m82012, NULL);
    double Td8065382736;
    Td8065382736 =  Td8065182737 * Td8065282738;
    int Tu8000782722;
    Ta8064682734[Ti8064782735].d = Td8065382736;
    Value* Ta8065482726;
    Ta8065482726 = nvector;
    int Ti8065582727;
    Ti8065582727 = 2;
    int Ti8065682733;
    Ti8065682733 = 2;
    double Td8065782731;
    Td8065782731 = p82013[Ti8065682733].d;
    double Td8065882732;
    Td8065882732 = o_param_z81906_fun(m82012, NULL);
    double Td8065982729;
    Td8065982729 = Td8065782731 - Td8065882732;
    double Td8066082730;
    Td8066082730 = o_param_c81900_fun(m82012, NULL);
    double Td8066182728;
    Td8066182728 =  Td8065982729 * Td8066082730;
    int Tu8000682723;
    Ta8065482726[Ti8065582727].d = Td8066182728;
    Value* Ta8066282724;
    Ta8066282724 = nvector;
    bool Tb8066382725;
    Tb8066382725 = o_isinvert81892_fun(m82012, NULL);
    result = normalize_vector81924_fun(Ta8066282724, Tb8066382725, NULL);
    return result;
}

int get_nvector_second_rot82014_fun(int* m82015, Value* p82016, Value *env){
    int result;
    Value* Ta8055882715;
    Ta8055882715 = nvector_w;
    int Ti8055982716;
    Ti8055982716 = 0;
    int Ti8056082720;
    Ti8056082720 = 0;
    double Td8056182718;
    Td8056182718 = p82016[Ti8056082720].d;
    double Td8056282719;
    Td8056282719 = o_param_x81902_fun(m82015, NULL);
    double Td8056382717;
    Td8056382717 = Td8056182718 - Td8056282719;
    int Tu8001482635;
    Ta8055882715[Ti8055982716].d = Td8056382717;
    Value* Ta8056482709;
    Ta8056482709 = nvector_w;
    int Ti8056582710;
    Ti8056582710 = 1;
    int Ti8056682714;
    Ti8056682714 = 1;
    double Td8056782712;
    Td8056782712 = p82016[Ti8056682714].d;
    double Td8056882713;
    Td8056882713 = o_param_y81904_fun(m82015, NULL);
    double Td8056982711;
    Td8056982711 = Td8056782712 - Td8056882713;
    int Tu8001382636;
    Ta8056482709[Ti8056582710].d = Td8056982711;
    Value* Ta8057082703;
    Ta8057082703 = nvector_w;
    int Ti8057182704;
    Ti8057182704 = 2;
    int Ti8057282708;
    Ti8057282708 = 2;
    double Td8057382706;
    Td8057382706 = p82016[Ti8057282708].d;
    double Td8057482707;
    Td8057482707 = o_param_z81906_fun(m82015, NULL);
    double Td8057582705;
    Td8057582705 = Td8057382706 - Td8057482707;
    int Tu8001282637;
    Ta8057082703[Ti8057182704].d = Td8057582705;
    Value* Ta8057682683;
    Ta8057682683 = nvector;
    int Ti8057782684;
    Ti8057782684 = 0;
    Value* Ta8057882701;
    Ta8057882701 = nvector_w;
    int Ti8057982702;
    Ti8057982702 = 0;
    double Td8058082699;
    Td8058082699 = Ta8057882701[Ti8057982702].d;
    double Td8058182700;
    Td8058182700 = o_param_a81896_fun(m82015, NULL);
    double Td8058282686;
    Td8058282686 =  Td8058082699 * Td8058182700;
    Value* Ta8058382697;
    Ta8058382697 = nvector_w;
    int Ti8058482698;
    Ti8058482698 = 1;
    double Td8058582695;
    Td8058582695 = Ta8058382697[Ti8058482698].d;
    double Td8058682696;
    Td8058682696 = o_param_r381922_fun(m82015, NULL);
    double Td8058782689;
    Td8058782689 =  Td8058582695 * Td8058682696;
    Value* Ta8058882693;
    Ta8058882693 = nvector_w;
    int Ti8058982694;
    Ti8058982694 = 2;
    double Td8059082691;
    Td8059082691 = Ta8058882693[Ti8058982694].d;
    double Td8059182692;
    Td8059182692 = o_param_r281920_fun(m82015, NULL);
    double Td8059282690;
    Td8059282690 =  Td8059082691 * Td8059182692;
    double Td8059382688;
    Td8059382688 = Td8058782689 + Td8059282690;
    double Td8059482687;
    Td8059482687 = fhalf81884_fun(Td8059382688, NULL);
    double Td8059582685;
    Td8059582685 = Td8058282686 + Td8059482687;
    int Tu8001182638;
    Ta8057682683[Ti8057782684].d = Td8059582685;
    Value* Ta8059682663;
    Ta8059682663 = nvector;
    int Ti8059782664;
    Ti8059782664 = 1;
    Value* Ta8059882681;
    Ta8059882681 = nvector_w;
    int Ti8059982682;
    Ti8059982682 = 1;
    double Td8060082679;
    Td8060082679 = Ta8059882681[Ti8059982682].d;
    double Td8060182680;
    Td8060182680 = o_param_b81898_fun(m82015, NULL);
    double Td8060282666;
    Td8060282666 =  Td8060082679 * Td8060182680;
    Value* Ta8060382677;
    Ta8060382677 = nvector_w;
    int Ti8060482678;
    Ti8060482678 = 0;
    double Td8060582675;
    Td8060582675 = Ta8060382677[Ti8060482678].d;
    double Td8060682676;
    Td8060682676 = o_param_r381922_fun(m82015, NULL);
    double Td8060782669;
    Td8060782669 =  Td8060582675 * Td8060682676;
    Value* Ta8060882673;
    Ta8060882673 = nvector_w;
    int Ti8060982674;
    Ti8060982674 = 2;
    double Td8061082671;
    Td8061082671 = Ta8060882673[Ti8060982674].d;
    double Td8061182672;
    Td8061182672 = o_param_r181918_fun(m82015, NULL);
    double Td8061282670;
    Td8061282670 =  Td8061082671 * Td8061182672;
    double Td8061382668;
    Td8061382668 = Td8060782669 + Td8061282670;
    double Td8061482667;
    Td8061482667 = fhalf81884_fun(Td8061382668, NULL);
    double Td8061582665;
    Td8061582665 = Td8060282666 + Td8061482667;
    int Tu8001082639;
    Ta8059682663[Ti8059782664].d = Td8061582665;
    Value* Ta8061682643;
    Ta8061682643 = nvector;
    int Ti8061782644;
    Ti8061782644 = 2;
    Value* Ta8061882661;
    Ta8061882661 = nvector_w;
    int Ti8061982662;
    Ti8061982662 = 2;
    double Td8062082659;
    Td8062082659 = Ta8061882661[Ti8061982662].d;
    double Td8062182660;
    Td8062182660 = o_param_c81900_fun(m82015, NULL);
    double Td8062282646;
    Td8062282646 =  Td8062082659 * Td8062182660;
    Value* Ta8062382657;
    Ta8062382657 = nvector_w;
    int Ti8062482658;
    Ti8062482658 = 0;
    double Td8062582655;
    Td8062582655 = Ta8062382657[Ti8062482658].d;
    double Td8062682656;
    Td8062682656 = o_param_r281920_fun(m82015, NULL);
    double Td8062782649;
    Td8062782649 =  Td8062582655 * Td8062682656;
    Value* Ta8062882653;
    Ta8062882653 = nvector_w;
    int Ti8062982654;
    Ti8062982654 = 1;
    double Td8063082651;
    Td8063082651 = Ta8062882653[Ti8062982654].d;
    double Td8063182652;
    Td8063182652 = o_param_r181918_fun(m82015, NULL);
    double Td8063282650;
    Td8063282650 =  Td8063082651 * Td8063182652;
    double Td8063382648;
    Td8063382648 = Td8062782649 + Td8063282650;
    double Td8063482647;
    Td8063482647 = fhalf81884_fun(Td8063382648, NULL);
    double Td8063582645;
    Td8063582645 = Td8062282646 + Td8063482647;
    int Tu8000982640;
    Ta8061682643[Ti8061782644].d = Td8063582645;
    Value* Ta8063682641;
    Ta8063682641 = nvector;
    bool Tb8063782642;
    Tb8063782642 = o_isinvert81892_fun(m82015, NULL);
    result = normalize_vector81924_fun(Ta8063682641, Tb8063782642, NULL);
    return result;
}

int get_nvector82017_fun(int* m82018, Value* p82019, Value *env){
    int result;
    int m_shape82629;
    m_shape82629 = o_form81888_fun(m82018, NULL);
    int Ti8055382630;
    Ti8055382630 = 1;
    if(m_shape82629 == Ti8055382630){
	int Tu8055482634;
	Tu8055482634 = 1;
	result = get_nvector_rect82007_fun(Tu8055482634, NULL);
    }
    else{
	int Ti8055582631;
	Ti8055582631 = 2;
	if(m_shape82629 == Ti8055582631){
	    result = get_nvector_plane82009_fun(m82018, NULL);
	}
	else{
	    int Ti8055682632;
	    Ti8055682632 = o_isrot81894_fun(m82018, NULL);
	    int Ti8055782633;
	    Ti8055782633 = 0;
	    if(Ti8055682632 == Ti8055782633){
		result = get_nvector_second_norot82011_fun(m82018, p82019, NULL);
	    }
	    else{
		result = get_nvector_second_rot82014_fun(m82018, p82019, NULL);
	    }
	}
    }
    return result;
}

int utexture82020_fun(int* m82021, Value* p82022, Value *env){
    int result;
    int m_tex82471;
    m_tex82471 = o_texturetype81886_fun(m82021, NULL);
    Value* Ta8042482626;
    Ta8042482626 = texture_color;
    int Ti8042582627;
    Ti8042582627 = 0;
    double Td8042682628;
    Td8042682628 = o_color_red81912_fun(m82021, NULL);
    int Tu8001982472;
    Ta8042482626[Ti8042582627].d = Td8042682628;
    Value* Ta8042782623;
    Ta8042782623 = texture_color;
    int Ti8042882624;
    Ti8042882624 = 1;
    double Td8042982625;
    Td8042982625 = o_color_green81914_fun(m82021, NULL);
    int Tu8001882473;
    Ta8042782623[Ti8042882624].d = Td8042982625;
    Value* Ta8043082620;
    Ta8043082620 = texture_color;
    int Ti8043182621;
    Ti8043182621 = 2;
    double Td8043282622;
    Td8043282622 = o_color_blue81916_fun(m82021, NULL);
    int Tu8001782474;
    Ta8043082620[Ti8043182621].d = Td8043282622;
    int Ti8043382475;
    Ti8043382475 = 1;
    if(m_tex82471 == Ti8043382475){
	int Ti8043482619;
	Ti8043482619 = 0;
	double Td8043582617;
	Td8043582617 = p82022[Ti8043482619].d;
	double Td8043682618;
	Td8043682618 = o_param_x81902_fun(m82021, NULL);
	double w182590;
	w182590 = Td8043582617 - Td8043682618;
	double Td8043782616;
	Td8043782616 = 0.050000;
	double Td8043882615;
	Td8043882615 =  w182590 * Td8043782616;
	double Td8043982613;
	Td8043982613 = floor(Td8043882615);
	double Td8044082614;
	Td8044082614 = 20.000000;
	double d182610;
	d182610 =  Td8043982613 * Td8044082614;
	double Td8044182611;
	Td8044182611 = 10.000000;
	double Td8044282612;
	Td8044282612 = w182590 - d182610;
	bool flag182591;
	if(Td8044182611 <= Td8044282612){
	    flag182591 = 0;
	}
	else{
	    flag182591 = 1;
	}
	int Ti8044382609;
	Ti8044382609 = 2;
	double Td8044482607;
	Td8044482607 = p82022[Ti8044382609].d;
	double Td8044582608;
	Td8044582608 = o_param_z81906_fun(m82021, NULL);
	double w382592;
	w382592 = Td8044482607 - Td8044582608;
	double Td8044682606;
	Td8044682606 = 0.050000;
	double Td8044782605;
	Td8044782605 =  w382592 * Td8044682606;
	double Td8044882603;
	Td8044882603 = floor(Td8044782605);
	double Td8044982604;
	Td8044982604 = 20.000000;
	double d282600;
	d282600 =  Td8044882603 * Td8044982604;
	double Td8045082601;
	Td8045082601 = 10.000000;
	double Td8045182602;
	Td8045182602 = w382592 - d282600;
	bool flag282593;
	if(Td8045082601 <= Td8045182602){
	    flag282593 = 0;
	}
	else{
	    flag282593 = 1;
	}
	Value* Ta8045282594;
	Ta8045282594 = texture_color;
	int Ti8045382595;
	Ti8045382595 = 1;
	int Ti8045482597;
	Ti8045482597 = 0;
	double Td8045782596;
	if(flag182591 == Ti8045482597){
	    int Ti8045582599;
	    Ti8045582599 = 0;
	    if(flag282593 == Ti8045582599){
		Td8045782596 = 255.000000;
	    }
	    else{
		Td8045782596 = 0.000000;
	    }
	}
	else{
	    int Ti8045682598;
	    Ti8045682598 = 0;
	    if(flag282593 == Ti8045682598){
		Td8045782596 = 0.000000;
	    }
	    else{
		Td8045782596 = 255.000000;
	    }
	}
	Ta8045282594[Ti8045382595].d = Td8045782596;
    }
    else{
	int Ti8045882476;
	Ti8045882476 = 2;
	if(m_tex82471 == Ti8045882476){
	    int Ti8045982589;
	    Ti8045982589 = 1;
	    double Td8046082587;
	    Td8046082587 = p82022[Ti8045982589].d;
	    double Td8046182588;
	    Td8046182588 = 0.250000;
	    double Td8046282586;
	    Td8046282586 =  Td8046082587 * Td8046182588;
	    double Td8046382585;
	    Td8046382585 = sin(Td8046282586);
	    double w282573;
	    w282573 = fsqr81882_fun(Td8046382585, NULL);
	    Value* Ta8046482581;
	    Ta8046482581 = texture_color;
	    int Ti8046582582;
	    Ti8046582582 = 0;
	    double Td8046682584;
	    Td8046682584 = 255.000000;
	    double Td8046782583;
	    Td8046782583 =  Td8046682584 * w282573;
	    int Tu8001582574;
	    Ta8046482581[Ti8046582582].d = Td8046782583;
	    Value* Ta8046882575;
	    Ta8046882575 = texture_color;
	    int Ti8046982576;
	    Ti8046982576 = 1;
	    double Td8047082578;
	    Td8047082578 = 255.000000;
	    double Td8047182580;
	    Td8047182580 = 1.000000;
	    double Td8047282579;
	    Td8047282579 = Td8047182580 - w282573;
	    double Td8047382577;
	    Td8047382577 =  Td8047082578 * Td8047282579;
	    Ta8046882575[Ti8046982576].d = Td8047382577;
	}
	else{
	    int Ti8047482477;
	    Ti8047482477 = 3;
	    if(m_tex82471 == Ti8047482477){
		int Ti8047582572;
		Ti8047582572 = 0;
		double Td8047682570;
		Td8047682570 = p82022[Ti8047582572].d;
		double Td8047782571;
		Td8047782571 = o_param_x81902_fun(m82021, NULL);
		double w182542;
		w182542 = Td8047682570 - Td8047782571;
		int Ti8047882569;
		Ti8047882569 = 2;
		double Td8047982567;
		Td8047982567 = p82022[Ti8047882569].d;
		double Td8048082568;
		Td8048082568 = o_param_z81906_fun(m82021, NULL);
		double w382543;
		w382543 = Td8047982567 - Td8048082568;
		double Td8048182565;
		Td8048182565 = fsqr81882_fun(w182542, NULL);
		double Td8048282566;
		Td8048282566 = fsqr81882_fun(w382543, NULL);
		double Td8048382564;
		Td8048382564 = Td8048182565 + Td8048282566;
		double Td8048482562;
		Td8048482562 = sqrt(Td8048382564);
		double Td8048582563;
		Td8048582563 = 10.000000;
		double w282544;
		w282544 = Td8048482562 / Td8048582563;
		double Td8048682561;
		Td8048682561 = floor(w282544);
		double Td8048782559;
		Td8048782559 = w282544 - Td8048682561;
		double Td8048882560;
		Td8048882560 = 3.141593;
		double w482545;
		w482545 =  Td8048782559 * Td8048882560;
		double Td8048982558;
		Td8048982558 = cos(w482545);
		double cws82546;
		cws82546 = fsqr81882_fun(Td8048982558, NULL);
		Value* Ta8049082554;
		Ta8049082554 = texture_color;
		int Ti8049182555;
		Ti8049182555 = 1;
		double Td8049282557;
		Td8049282557 = 255.000000;
		double Td8049382556;
		Td8049382556 =  cws82546 * Td8049282557;
		int Tu8001682547;
		Ta8049082554[Ti8049182555].d = Td8049382556;
		Value* Ta8049482548;
		Ta8049482548 = texture_color;
		int Ti8049582549;
		Ti8049582549 = 2;
		double Td8049682553;
		Td8049682553 = 1.000000;
		double Td8049782551;
		Td8049782551 = Td8049682553 - cws82546;
		double Td8049882552;
		Td8049882552 = 255.000000;
		double Td8049982550;
		Td8049982550 =  Td8049782551 * Td8049882552;
		Ta8049482548[Ti8049582549].d = Td8049982550;
	    }
	    else{
		int Ti8050082478;
		Ti8050082478 = 4;
		if(m_tex82471 == Ti8050082478){
		    int Ti8050182541;
		    Ti8050182541 = 0;
		    double Td8050282539;
		    Td8050282539 = p82022[Ti8050182541].d;
		    double Td8050382540;
		    Td8050382540 = o_param_x81902_fun(m82021, NULL);
		    double Td8050482536;
		    Td8050482536 = Td8050282539 - Td8050382540;
		    double Td8050582538;
		    Td8050582538 = o_param_a81896_fun(m82021, NULL);
		    double Td8050682537;
		    Td8050682537 = sqrt(Td8050582538);
		    double w182479;
		    w182479 =  Td8050482536 * Td8050682537;
		    int Ti8050782535;
		    Ti8050782535 = 2;
		    double Td8050882533;
		    Td8050882533 = p82022[Ti8050782535].d;
		    double Td8050982534;
		    Td8050982534 = o_param_z81906_fun(m82021, NULL);
		    double Td8051082530;
		    Td8051082530 = Td8050882533 - Td8050982534;
		    double Td8051182532;
		    Td8051182532 = o_param_c81900_fun(m82021, NULL);
		    double Td8051282531;
		    Td8051282531 = sqrt(Td8051182532);
		    double w382480;
		    w382480 =  Td8051082530 * Td8051282531;
		    double Td8051382528;
		    Td8051382528 = fsqr81882_fun(w182479, NULL);
		    double Td8051482529;
		    Td8051482529 = fsqr81882_fun(w382480, NULL);
		    double Td8051582527;
		    Td8051582527 = Td8051382528 + Td8051482529;
		    double w482481;
		    w482481 = sqrt(Td8051582527);
		    double Td8051682519;
		    Td8051682519 = 0.000100;
		    double Td8051782520;
		    Td8051782520 = fabs(w182479);
		    double w782482;
		    if(Td8051682519 <= Td8051782520){
			double Td8051882526;
			Td8051882526 = w382480 / w182479;
			double w582521;
			w582521 = fabs(Td8051882526);
			double Td8051982522;
			Td8051982522 = atan(w582521);
			double Td8052082524;
			Td8052082524 = 30.000000;
			double Td8052182525;
			Td8052182525 = 3.141593;
			double Td8052282523;
			Td8052282523 = Td8052082524 / Td8052182525;
			w782482 =  Td8051982522 * Td8052282523;
		    }
		    else{
			w782482 = 15.000000;
		    }
		    double Td8052382518;
		    Td8052382518 = floor(w782482);
		    double w982483;
		    w982483 = w782482 - Td8052382518;
		    int Ti8052482517;
		    Ti8052482517 = 1;
		    double Td8052582515;
		    Td8052582515 = p82022[Ti8052482517].d;
		    double Td8052682516;
		    Td8052682516 = o_param_y81904_fun(m82021, NULL);
		    double Td8052782512;
		    Td8052782512 = Td8052582515 - Td8052682516;
		    double Td8052882514;
		    Td8052882514 = o_param_b81898_fun(m82021, NULL);
		    double Td8052982513;
		    Td8052982513 = sqrt(Td8052882514);
		    double w282484;
		    w282484 =  Td8052782512 * Td8052982513;
		    double Td8053082504;
		    Td8053082504 = 0.000100;
		    double Td8053182505;
		    Td8053182505 = fabs(w782482);
		    double w882485;
		    if(Td8053082504 <= Td8053182505){
			double Td8053282511;
			Td8053282511 = w282484 / w482481;
			double w682506;
			w682506 = fabs(Td8053282511);
			double Td8053382507;
			Td8053382507 = atan(w682506);
			double Td8053482509;
			Td8053482509 = 30.000000;
			double Td8053582510;
			Td8053582510 = 3.141593;
			double Td8053682508;
			Td8053682508 = Td8053482509 / Td8053582510;
			w882485 =  Td8053382507 * Td8053682508;
		    }
		    else{
			w882485 = 15.000000;
		    }
		    double Td8053782503;
		    Td8053782503 = floor(w882485);
		    double w1082486;
		    w1082486 = w882485 - Td8053782503;
		    double Td8053882499;
		    Td8053882499 = 0.150000;
		    double Td8053982502;
		    Td8053982502 = 0.500000;
		    double Td8054082501;
		    Td8054082501 = Td8053982502 - w982483;
		    double Td8054182500;
		    Td8054182500 = fsqr81882_fun(Td8054082501, NULL);
		    double Td8054282495;
		    Td8054282495 = Td8053882499 - Td8054182500;
		    double Td8054382498;
		    Td8054382498 = 0.500000;
		    double Td8054482497;
		    Td8054482497 = Td8054382498 - w1082486;
		    double Td8054582496;
		    Td8054582496 = fsqr81882_fun(Td8054482497, NULL);
		    double w1182487;
		    w1182487 = Td8054282495 - Td8054582496;
		    Value* Ta8054682488;
		    Ta8054682488 = texture_color;
		    int Ti8054782489;
		    Ti8054782489 = 2;
		    double Td8054882491;
		    Td8054882491 = 0.000000;
		    double Td8055282490;
		    if(w1182487 <= Td8054882491){
			Td8055282490 = 0.000000;
		    }
		    else{
			double Td8054982493;
			Td8054982493 = 255.000000;
			double Td8055082494;
			Td8055082494 = 0.300000;
			double Td8055182492;
			Td8055182492 = Td8054982493 / Td8055082494;
			Td8055282490 =  w1182487 * Td8055182492;
		    }
		    Ta8054682488[Ti8054782489].d = Td8055282490;
		}
		else{
		    result = 1;
		}
	    }
	}
    }
    return result;
}

double in_prod82023_fun(Value* v182024, Value* v282025, Value *env){
    double result;
    int Ti8040882470;
    Ti8040882470 = 0;
    double Td8040982467;
    Td8040982467 = v182024[Ti8040882470].d;
    int Ti8041082469;
    Ti8041082469 = 0;
    double Td8041182468;
    Td8041182468 = v282025[Ti8041082469].d;
    double Td8041282461;
    Td8041282461 =  Td8040982467 * Td8041182468;
    int Ti8041382466;
    Ti8041382466 = 1;
    double Td8041482463;
    Td8041482463 = v182024[Ti8041382466].d;
    int Ti8041582465;
    Ti8041582465 = 1;
    double Td8041682464;
    Td8041682464 = v282025[Ti8041582465].d;
    double Td8041782462;
    Td8041782462 =  Td8041482463 * Td8041682464;
    double Td8041882455;
    Td8041882455 = Td8041282461 + Td8041782462;
    int Ti8041982460;
    Ti8041982460 = 2;
    double Td8042082457;
    Td8042082457 = v182024[Ti8041982460].d;
    int Ti8042182459;
    Ti8042182459 = 2;
    double Td8042282458;
    Td8042282458 = v282025[Ti8042182459].d;
    double Td8042382456;
    Td8042382456 =  Td8042082457 * Td8042282458;
    result = Td8041882455 + Td8042382456;
    return result;
}

int accumulate_vec_mul82026_fun(Value* v182027, Value* v282028, double w82029, Value *env){
    int result;
    int Ti8038782448;
    Ti8038782448 = 0;
    int Ti8038882454;
    Ti8038882454 = 0;
    double Td8038982450;
    Td8038982450 = v182027[Ti8038882454].d;
    int Ti8039082453;
    Ti8039082453 = 0;
    double Td8039182452;
    Td8039182452 = v282028[Ti8039082453].d;
    double Td8039282451;
    Td8039282451 =  w82029 * Td8039182452;
    double Td8039382449;
    Td8039382449 = Td8038982450 + Td8039282451;
    int Tu8002182432;
    v182027[Ti8038782448].d = Td8039382449;
    int Ti8039482441;
    Ti8039482441 = 1;
    int Ti8039582447;
    Ti8039582447 = 1;
    double Td8039682443;
    Td8039682443 = v182027[Ti8039582447].d;
    int Ti8039782446;
    Ti8039782446 = 1;
    double Td8039882445;
    Td8039882445 = v282028[Ti8039782446].d;
    double Td8039982444;
    Td8039982444 =  w82029 * Td8039882445;
    double Td8040082442;
    Td8040082442 = Td8039682443 + Td8039982444;
    int Tu8002082433;
    v182027[Ti8039482441].d = Td8040082442;
    int Ti8040182434;
    Ti8040182434 = 2;
    int Ti8040282440;
    Ti8040282440 = 2;
    double Td8040382436;
    Td8040382436 = v182027[Ti8040282440].d;
    int Ti8040482439;
    Ti8040482439 = 2;
    double Td8040582438;
    Td8040582438 = v282028[Ti8040482439].d;
    double Td8040682437;
    Td8040682437 =  w82029 * Td8040582438;
    double Td8040782435;
    Td8040782435 = Td8040382436 + Td8040682437;
    v182027[Ti8040182434].d = Td8040782435;
    return result;
}

int raytracing82030_fun(int nref82031, double energy82032, Value *env){
    int result;
    Value* Ta8027382430;
    Ta8027382430 = viewpoint;
    Value* Ta8027482431;
    Ta8027482431 = vscan;
    bool crashed_p82294;
    crashed_p82294 = tracer82004_fun(Ta8027382430, Ta8027482431, NULL);
    int Ti8027582396;
    Ti8027582396 = 0;
    int Tu8003382295;
    if(crashed_p82294 == Ti8027582396){
	int Ti8027682397;
	Ti8027682397 = 0;
	if(nref82031 == Ti8027682397){
	    Tu8003382295 = 1;
	}
	else{
	    Value* Ta8027782428;
	    Ta8027782428 = vscan;
	    Value* Ta8027882429;
	    Ta8027882429 = light;
	    double Td8027982427;
	    Td8027982427 = in_prod82023_fun(Ta8027782428, Ta8027882429, NULL);
	    double hl82398;
	    hl82398 = -Td8027982427;
	    double Td8028082399;
	    Td8028082399 = 0.000000;
	    if(hl82398 <= Td8028082399){
		Tu8003382295 = 1;
	    }
	    else{
		double Td8028182426;
		Td8028182426 = fsqr81882_fun(hl82398, NULL);
		double Td8028282425;
		Td8028282425 =  Td8028182426 * hl82398;
		double Td8028382421;
		Td8028382421 =  Td8028282425 * energy82032;
		Value* Ta8028482423;
		Ta8028482423 = beam;
		int Ti8028582424;
		Ti8028582424 = 0;
		double Td8028682422;
		Td8028682422 = Ta8028482423[Ti8028582424].d;
		double ihl82400;
		ihl82400 =  Td8028382421 * Td8028682422;
		Value* Ta8028782415;
		Ta8028782415 = rgb;
		int Ti8028882416;
		Ti8028882416 = 0;
		Value* Ta8028982419;
		Ta8028982419 = rgb;
		int Ti8029082420;
		Ti8029082420 = 0;
		double Td8029182418;
		Td8029182418 = Ta8028982419[Ti8029082420].d;
		double Td8029282417;
		Td8029282417 = Td8029182418 + ihl82400;
		int Tu8002382401;
		Ta8028782415[Ti8028882416].d = Td8029282417;
		Value* Ta8029382409;
		Ta8029382409 = rgb;
		int Ti8029482410;
		Ti8029482410 = 1;
		Value* Ta8029582413;
		Ta8029582413 = rgb;
		int Ti8029682414;
		Ti8029682414 = 1;
		double Td8029782412;
		Td8029782412 = Ta8029582413[Ti8029682414].d;
		double Td8029882411;
		Td8029882411 = Td8029782412 + ihl82400;
		int Tu8002282402;
		Ta8029382409[Ti8029482410].d = Td8029882411;
		Value* Ta8029982403;
		Ta8029982403 = rgb;
		int Ti8030082404;
		Ti8030082404 = 2;
		Value* Ta8030182407;
		Ta8030182407 = rgb;
		int Ti8030282408;
		Ti8030282408 = 2;
		double Td8030382406;
		Td8030382406 = Ta8030182407[Ti8030282408].d;
		double Td8030482405;
		Td8030482405 = Td8030382406 + ihl82400;
		Ta8029982403[Ti8030082404].d = Td8030482405;
	    }
	}
    }
    else{
	Tu8003382295 = 1;
    }
    int Ti8030582296;
    Ti8030582296 = 0;
    if(crashed_p82294 == Ti8030582296){
	result = 1;
    }
    else{
	Value* Ta8030682392;
	Ta8030682392 = objects;
	Value* Ta8030782394;
	Ta8030782394 = crashed_object;
	int Ti8030882395;
	Ti8030882395 = 0;
	int Ti8030982393;
	Ti8030982393 = Ta8030782394[Ti8030882395].i;
	int* cobj82297;
	cobj82297 = Ta8030682392[Ti8030982393].a;
	Value* Ta8031082391;
	Ta8031082391 = crashed_point;
	int Tu8003282298;
	Tu8003282298 = get_nvector82017_fun(cobj82297, Ta8031082391, NULL);
	int Ti8031182386;
	Ti8031182386 = 0;
	Value* Ta8031282389;
	Ta8031282389 = or_net;
	int Ti8031382390;
	Ti8031382390 = 0;
	Value* Ta8031482387;
	Ta8031482387 = Ta8031282389[Ti8031382390].a;
	Value* Ta8031582388;
	Ta8031582388 = crashed_point;
	bool Tb8031682375;
	Tb8031682375 = shadow_check_one_or_matrix81991_fun(Ti8031182386, Ta8031482387, Ta8031582388, NULL);
	int Ti8031782376;
	Ti8031782376 = 0;
	double bright82299;
	if(Tb8031682375 == Ti8031782376){
	    Value* Ta8031882384;
	    Ta8031882384 = nvector;
	    Value* Ta8031982385;
	    Ta8031982385 = light;
	    double Td8032082383;
	    Td8032082383 = in_prod82023_fun(Ta8031882384, Ta8031982385, NULL);
	    double br82377;
	    br82377 = -Td8032082383;
	    double Td8032182381;
	    Td8032182381 = 0.000000;
	    double br182378;
	    if(Td8032182381 <= br82377){
		double Td8032282382;
		Td8032282382 = 0.200000;
		br182378 = br82377 + Td8032282382;
	    }
	    else{
		br182378 = 0.200000;
	    }
	    double Td8032382379;
	    Td8032382379 =  br182378 * energy82032;
	    double Td8032482380;
	    Td8032482380 = o_diffuse81908_fun(cobj82297, NULL);
	    bright82299 =  Td8032382379 * Td8032482380;
	}
	else{
	    bright82299 = 0.000000;
	}
	Value* Ta8032582374;
	Ta8032582374 = crashed_point;
	int Tu8003182300;
	Tu8003182300 = utexture82020_fun(cobj82297, Ta8032582374, NULL);
	Value* Ta8032682372;
	Ta8032682372 = rgb;
	Value* Ta8032782373;
	Ta8032782373 = texture_color;
	int Tu8003082301;
	Tu8003082301 = accumulate_vec_mul82026_fun(Ta8032682372, Ta8032782373, bright82299, NULL);
	int Ti8032882302;
	Ti8032882302 = 4;
	if(nref82031 <= Ti8032882302){
	    double Td8032982303;
	    Td8032982303 = 0.100000;
	    if(energy82032 <= Td8032982303){
		result = 1;
	    }
	    else{
		double Td8033082368;
		Td8033082368 = -2.000000;
		Value* Ta8033182370;
		Ta8033182370 = vscan;
		Value* Ta8033282371;
		Ta8033282371 = nvector;
		double Td8033382369;
		Td8033382369 = in_prod82023_fun(Ta8033182370, Ta8033282371, NULL);
		double w82304;
		w82304 =  Td8033082368 * Td8033382369;
		Value* Ta8033482366;
		Ta8033482366 = vscan;
		Value* Ta8033582367;
		Ta8033582367 = nvector;
		int Tu8002982305;
		Tu8002982305 = accumulate_vec_mul82026_fun(Ta8033482366, Ta8033582367, w82304, NULL);
		int m_surface82306;
		m_surface82306 = o_reflectiontype81890_fun(cobj82297, NULL);
		int Ti8033682307;
		Ti8033682307 = 1;
		if(m_surface82306 == Ti8033682307){
		    double Td8033782333;
		    Td8033782333 = 0.000000;
		    double Td8033882334;
		    Td8033882334 = o_hilight81910_fun(cobj82297, NULL);
		    if(Td8033782333 == Td8033882334){
			result = 1;
		    }
		    else{
			Value* Ta8033982364;
			Ta8033982364 = vscan;
			Value* Ta8034082365;
			Ta8034082365 = light;
			double Td8034182363;
			Td8034182363 = in_prod82023_fun(Ta8033982364, Ta8034082365, NULL);
			double hl82335;
			hl82335 = -Td8034182363;
			double Td8034282336;
			Td8034282336 = 0.000000;
			if(hl82335 <= Td8034282336){
			    result = 1;
			}
			else{
			    double Td8034382362;
			    Td8034382362 = fsqr81882_fun(hl82335, NULL);
			    double Td8034482361;
			    Td8034482361 = fsqr81882_fun(Td8034382362, NULL);
			    double Td8034582360;
			    Td8034582360 =  Td8034482361 * energy82032;
			    double Td8034682358;
			    Td8034682358 =  Td8034582360 * bright82299;
			    double Td8034782359;
			    Td8034782359 = o_hilight81910_fun(cobj82297, NULL);
			    double ihl82337;
			    ihl82337 =  Td8034682358 * Td8034782359;
			    Value* Ta8034882352;
			    Ta8034882352 = rgb;
			    int Ti8034982353;
			    Ti8034982353 = 0;
			    Value* Ta8035082356;
			    Ta8035082356 = rgb;
			    int Ti8035182357;
			    Ti8035182357 = 0;
			    double Td8035282355;
			    Td8035282355 = Ta8035082356[Ti8035182357].d;
			    double Td8035382354;
			    Td8035382354 = Td8035282355 + ihl82337;
			    int Tu8002582338;
			    Ta8034882352[Ti8034982353].d = Td8035382354;
			    Value* Ta8035482346;
			    Ta8035482346 = rgb;
			    int Ti8035582347;
			    Ti8035582347 = 1;
			    Value* Ta8035682350;
			    Ta8035682350 = rgb;
			    int Ti8035782351;
			    Ti8035782351 = 1;
			    double Td8035882349;
			    Td8035882349 = Ta8035682350[Ti8035782351].d;
			    double Td8035982348;
			    Td8035982348 = Td8035882349 + ihl82337;
			    int Tu8002482339;
			    Ta8035482346[Ti8035582347].d = Td8035982348;
			    Value* Ta8036082340;
			    Ta8036082340 = rgb;
			    int Ti8036182341;
			    Ti8036182341 = 2;
			    Value* Ta8036282344;
			    Ta8036282344 = rgb;
			    int Ti8036382345;
			    Ti8036382345 = 2;
			    double Td8036482343;
			    Td8036482343 = Ta8036282344[Ti8036382345].d;
			    double Td8036582342;
			    Td8036582342 = Td8036482343 + ihl82337;
			    Ta8036082340[Ti8036182341].d = Td8036582342;
			}
		    }
		}
		else{
		    int Ti8036682308;
		    Ti8036682308 = 2;
		    if(m_surface82306 == Ti8036682308){
			Value* Ta8036782328;
			Ta8036782328 = viewpoint;
			int Ti8036882329;
			Ti8036882329 = 0;
			Value* Ta8036982331;
			Ta8036982331 = crashed_point;
			int Ti8037082332;
			Ti8037082332 = 0;
			double Td8037182330;
			Td8037182330 = Ta8036982331[Ti8037082332].d;
			int Tu8002882309;
			Ta8036782328[Ti8036882329].d = Td8037182330;
			Value* Ta8037282323;
			Ta8037282323 = viewpoint;
			int Ti8037382324;
			Ti8037382324 = 1;
			Value* Ta8037482326;
			Ta8037482326 = crashed_point;
			int Ti8037582327;
			Ti8037582327 = 1;
			double Td8037682325;
			Td8037682325 = Ta8037482326[Ti8037582327].d;
			int Tu8002782310;
			Ta8037282323[Ti8037382324].d = Td8037682325;
			Value* Ta8037782318;
			Ta8037782318 = viewpoint;
			int Ti8037882319;
			Ti8037882319 = 2;
			Value* Ta8037982321;
			Ta8037982321 = crashed_point;
			int Ti8038082322;
			Ti8038082322 = 2;
			double Td8038182320;
			Td8038182320 = Ta8037982321[Ti8038082322].d;
			int Tu8002682311;
			Ta8037782318[Ti8037882319].d = Td8038182320;
			double Td8038282316;
			Td8038282316 = 1.000000;
			double Td8038382317;
			Td8038382317 = o_diffuse81908_fun(cobj82297, NULL);
			double Td8038482315;
			Td8038482315 = Td8038282316 - Td8038382317;
			double energy282312;
			energy282312 =  energy82032 * Td8038482315;
			int Ti8038582314;
			Ti8038582314 = 1;
			int Ti8038682313;
			Ti8038682313 = nref82031 + Ti8038582314;
			result = raytracing82030_fun(Ti8038682313, energy282312, NULL);
		    }
		    else{
			result = 1;
		    }
		}
	    }
	}
	else{
	    result = 1;
	}
    }
    return result;
}

int write_rgb82033_fun(int Tu8003482034, Value *env){
    int result;
    Value* Ta8026182292;
    Ta8026182292 = rgb;
    int Ti8026282293;
    Ti8026282293 = 0;
    double Td8026382291;
    Td8026382291 = Ta8026182292[Ti8026282293].d;
    int red82274;
    red82274 = (int) Td8026382291;
    int Ti8026482290;
    Ti8026482290 = 255;
    int red82275;
    if(red82274 <= Ti8026482290){
	red82275 = red82274;
    }
    else{
	red82275 = 255;
    }
    int Tu8003682276;
    putchar(red82275);
    Value* Ta8026582288;
    Ta8026582288 = rgb;
    int Ti8026682289;
    Ti8026682289 = 1;
    double Td8026782287;
    Td8026782287 = Ta8026582288[Ti8026682289].d;
    int green82277;
    green82277 = (int) Td8026782287;
    int Ti8026882286;
    Ti8026882286 = 255;
    int green82278;
    if(green82277 <= Ti8026882286){
	green82278 = green82277;
    }
    else{
	green82278 = 255;
    }
    int Tu8003582279;
    putchar(green82278);
    Value* Ta8026982284;
    Ta8026982284 = rgb;
    int Ti8027082285;
    Ti8027082285 = 2;
    double Td8027182283;
    Td8027182283 = Ta8026982284[Ti8027082285].d;
    int blue82280;
    blue82280 = (int) Td8027182283;
    int Ti8027282282;
    Ti8027282282 = 255;
    int blue82281;
    if(blue82280 <= Ti8027282282){
	blue82281 = blue82280;
    }
    else{
	blue82281 = 255;
    }
    putchar(blue82281);
    return result;
}

int write_ppm_header82035_fun(int Tu8003782036, Value *env){
    int result;
    int Ti8024682273;
    Ti8024682273 = 80;
    int Tu8004582251;
    putchar(Ti8024682273);
    int Ti8024782271;
    Ti8024782271 = 48;
    int Ti8024882272;
    Ti8024882272 = 6;
    int Ti8024982270;
    Ti8024982270 = Ti8024782271 + Ti8024882272;
    int Tu8004482252;
    putchar(Ti8024982270);
    int Ti8025082269;
    Ti8025082269 = 10;
    int Tu8004382253;
    putchar(Ti8025082269);
    Value* Ta8025182267;
    Ta8025182267 = size;
    int Ti8025282268;
    Ti8025282268 = 0;
    int Ti8025382266;
    Ti8025382266 = Ta8025182267[Ti8025282268].i;
    int Tu8004282254;
    printf("%d", Ti8025382266);
    int Ti8025482265;
    Ti8025482265 = 32;
    int Tu8004182255;
    putchar(Ti8025482265);
    Value* Ta8025582263;
    Ta8025582263 = size;
    int Ti8025682264;
    Ti8025682264 = 1;
    int Ti8025782262;
    Ti8025782262 = Ta8025582263[Ti8025682264].i;
    int Tu8004082256;
    printf("%d", Ti8025782262);
    int Ti8025882261;
    Ti8025882261 = 10;
    int Tu8003982257;
    putchar(Ti8025882261);
    int Ti8025982260;
    Ti8025982260 = 255;
    int Tu8003882258;
    printf("%d", Ti8025982260);
    int Ti8026082259;
    Ti8026082259 = 10;
    putchar(Ti8026082259);
    return result;
}

int scan_point82037_fun(int scanx82038, Value *env){
    int result;
    Value* Ta8014982249;
    Ta8014982249 = size;
    int Ti8015082250;
    Ti8015082250 = 0;
    int Ti8015182138;
    Ti8015182138 = Ta8014982249[Ti8015082250].i;
    if(Ti8015182138 <= scanx82038){
	result = 1;
    }
    else{
	double Td8015282245;
	Td8015282245 = (double) scanx82038;
	Value* Ta8015382247;
	Ta8015382247 = scan_offset;
	int Ti8015482248;
	Ti8015482248 = 0;
	double Td8015582246;
	Td8015582246 = Ta8015382247[Ti8015482248].d;
	double Td8015682241;
	Td8015682241 = Td8015282245 - Td8015582246;
	Value* Ta8015782243;
	Ta8015782243 = scan_d;
	int Ti8015882244;
	Ti8015882244 = 0;
	double Td8015982242;
	Td8015982242 = Ta8015782243[Ti8015882244].d;
	double sscanx82139;
	sscanx82139 =  Td8015682241 * Td8015982242;
	Value* Ta8016082231;
	Ta8016082231 = vscan;
	int Ti8016182232;
	Ti8016182232 = 0;
	Value* Ta8016282239;
	Ta8016282239 = cos_v;
	int Ti8016382240;
	Ti8016382240 = 1;
	double Td8016482238;
	Td8016482238 = Ta8016282239[Ti8016382240].d;
	double Td8016582234;
	Td8016582234 =  sscanx82139 * Td8016482238;
	Value* Ta8016682236;
	Ta8016682236 = wscan;
	int Ti8016782237;
	Ti8016782237 = 0;
	double Td8016882235;
	Td8016882235 = Ta8016682236[Ti8016782237].d;
	double Td8016982233;
	Td8016982233 = Td8016582234 + Td8016882235;
	int Tu8005982140;
	Ta8016082231[Ti8016182232].d = Td8016982233;
	Value* Ta8017082218;
	Ta8017082218 = vscan;
	int Ti8017182219;
	Ti8017182219 = 1;
	Value* Ta8017282229;
	Ta8017282229 = scan_sscany;
	int Ti8017382230;
	Ti8017382230 = 0;
	double Td8017482225;
	Td8017482225 = Ta8017282229[Ti8017382230].d;
	Value* Ta8017582227;
	Ta8017582227 = cos_v;
	int Ti8017682228;
	Ti8017682228 = 0;
	double Td8017782226;
	Td8017782226 = Ta8017582227[Ti8017682228].d;
	double Td8017882221;
	Td8017882221 =  Td8017482225 * Td8017782226;
	Value* Ta8017982223;
	Ta8017982223 = vp;
	int Ti8018082224;
	Ti8018082224 = 1;
	double Td8018182222;
	Td8018182222 = Ta8017982223[Ti8018082224].d;
	double Td8018282220;
	Td8018282220 = Td8017882221 - Td8018182222;
	int Tu8005882141;
	Ta8017082218[Ti8017182219].d = Td8018282220;
	Value* Ta8018382207;
	Ta8018382207 = vscan;
	int Ti8018482208;
	Ti8018482208 = 2;
	double Td8018582214;
	Td8018582214 = -sscanx82139;
	Value* Ta8018682216;
	Ta8018682216 = sin_v;
	int Ti8018782217;
	Ti8018782217 = 1;
	double Td8018882215;
	Td8018882215 = Ta8018682216[Ti8018782217].d;
	double Td8018982210;
	Td8018982210 =  Td8018582214 * Td8018882215;
	Value* Ta8019082212;
	Ta8019082212 = wscan;
	int Ti8019182213;
	Ti8019182213 = 2;
	double Td8019282211;
	Td8019282211 = Ta8019082212[Ti8019182213].d;
	double Td8019382209;
	Td8019382209 = Td8018982210 + Td8019282211;
	int Tu8005782142;
	Ta8018382207[Ti8018482208].d = Td8019382209;
	double Td8019482203;
	Td8019482203 = fsqr81882_fun(sscanx82139, NULL);
	Value* Ta8019582205;
	Ta8019582205 = scan_met1;
	int Ti8019682206;
	Ti8019682206 = 0;
	double Td8019782204;
	Td8019782204 = Ta8019582205[Ti8019682206].d;
	double Td8019882202;
	Td8019882202 = Td8019482203 + Td8019782204;
	double metric82143;
	metric82143 = sqrt(Td8019882202);
	Value* Ta8019982196;
	Ta8019982196 = vscan;
	int Ti8020082197;
	Ti8020082197 = 0;
	Value* Ta8020182200;
	Ta8020182200 = vscan;
	int Ti8020282201;
	Ti8020282201 = 0;
	double Td8020382199;
	Td8020382199 = Ta8020182200[Ti8020282201].d;
	double Td8020482198;
	Td8020482198 = Td8020382199 / metric82143;
	int Tu8005682144;
	Ta8019982196[Ti8020082197].d = Td8020482198;
	Value* Ta8020582190;
	Ta8020582190 = vscan;
	int Ti8020682191;
	Ti8020682191 = 1;
	Value* Ta8020782194;
	Ta8020782194 = vscan;
	int Ti8020882195;
	Ti8020882195 = 1;
	double Td8020982193;
	Td8020982193 = Ta8020782194[Ti8020882195].d;
	double Td8021082192;
	Td8021082192 = Td8020982193 / metric82143;
	int Tu8005582145;
	Ta8020582190[Ti8020682191].d = Td8021082192;
	Value* Ta8021182184;
	Ta8021182184 = vscan;
	int Ti8021282185;
	Ti8021282185 = 2;
	Value* Ta8021382188;
	Ta8021382188 = vscan;
	int Ti8021482189;
	Ti8021482189 = 2;
	double Td8021582187;
	Td8021582187 = Ta8021382188[Ti8021482189].d;
	double Td8021682186;
	Td8021682186 = Td8021582187 / metric82143;
	int Tu8005482146;
	Ta8021182184[Ti8021282185].d = Td8021682186;
	Value* Ta8021782179;
	Ta8021782179 = viewpoint;
	int Ti8021882180;
	Ti8021882180 = 0;
	Value* Ta8021982182;
	Ta8021982182 = view;
	int Ti8022082183;
	Ti8022082183 = 0;
	double Td8022182181;
	Td8022182181 = Ta8021982182[Ti8022082183].d;
	int Tu8005382147;
	Ta8021782179[Ti8021882180].d = Td8022182181;
	Value* Ta8022282174;
	Ta8022282174 = viewpoint;
	int Ti8022382175;
	Ti8022382175 = 1;
	Value* Ta8022482177;
	Ta8022482177 = view;
	int Ti8022582178;
	Ti8022582178 = 1;
	double Td8022682176;
	Td8022682176 = Ta8022482177[Ti8022582178].d;
	int Tu8005282148;
	Ta8022282174[Ti8022382175].d = Td8022682176;
	Value* Ta8022782169;
	Ta8022782169 = viewpoint;
	int Ti8022882170;
	Ti8022882170 = 2;
	Value* Ta8022982172;
	Ta8022982172 = view;
	int Ti8023082173;
	Ti8023082173 = 2;
	double Td8023182171;
	Td8023182171 = Ta8022982172[Ti8023082173].d;
	int Tu8005182149;
	Ta8022782169[Ti8022882170].d = Td8023182171;
	Value* Ta8023282166;
	Ta8023282166 = rgb;
	int Ti8023382167;
	Ti8023382167 = 0;
	double Td8023482168;
	Td8023482168 = 0.000000;
	int Tu8005082150;
	Ta8023282166[Ti8023382167].d = Td8023482168;
	Value* Ta8023582163;
	Ta8023582163 = rgb;
	int Ti8023682164;
	Ti8023682164 = 1;
	double Td8023782165;
	Td8023782165 = 0.000000;
	int Tu8004982151;
	Ta8023582163[Ti8023682164].d = Td8023782165;
	Value* Ta8023882160;
	Ta8023882160 = rgb;
	int Ti8023982161;
	Ti8023982161 = 2;
	double Td8024082162;
	Td8024082162 = 0.000000;
	int Tu8004882152;
	Ta8023882160[Ti8023982161].d = Td8024082162;
	int Ti8024182158;
	Ti8024182158 = 0;
	double Td8024282159;
	Td8024282159 = 1.000000;
	int Tu8004782153;
	Tu8004782153 = raytracing82030_fun(Ti8024182158, Td8024282159, NULL);
	int Tu8024382157;
	Tu8024382157 = 1;
	int Tu8004682154;
	Tu8004682154 = write_rgb82033_fun(Tu8024382157, NULL);
	int Ti8024482156;
	Ti8024482156 = 1;
	int Ti8024582155;
	Ti8024582155 = scanx82038 + Ti8024482156;
	result = scan_point82037_fun(Ti8024582155, NULL);
    }
    return result;
}

int scan_line82039_fun(int scany82040, Value *env){
    int result;
    Value* Ta8009782136;
    Ta8009782136 = size;
    int Ti8009882137;
    Ti8009882137 = 0;
    int Ti8009982079;
    Ti8009982079 = Ta8009782136[Ti8009882137].i;
    if(Ti8009982079 <= scany82040){
	result = 1;
    }
    else{
	Value* Ta8010082123;
	Ta8010082123 = scan_sscany;
	int Ti8010182124;
	Ti8010182124 = 0;
	Value* Ta8010282134;
	Ta8010282134 = scan_offset;
	int Ti8010382135;
	Ti8010382135 = 0;
	double Td8010482132;
	Td8010482132 = Ta8010282134[Ti8010382135].d;
	double Td8010582133;
	Td8010582133 = 1.000000;
	double Td8010682130;
	Td8010682130 = Td8010482132 - Td8010582133;
	double Td8010782131;
	Td8010782131 = (double) scany82040;
	double t82126;
	t82126 = Td8010682130 - Td8010782131;
	Value* Ta8010882128;
	Ta8010882128 = scan_d;
	int Ti8010982129;
	Ti8010982129 = 0;
	double Td8011082127;
	Td8011082127 = Ta8010882128[Ti8010982129].d;
	double Td8011182125;
	Td8011182125 =  Td8011082127 * t82126;
	int Tu8006482080;
	Ta8010082123[Ti8010182124].d = Td8011182125;
	Value* Ta8011282115;
	Ta8011282115 = scan_met1;
	int Ti8011382116;
	Ti8011382116 = 0;
	Value* Ta8011482121;
	Ta8011482121 = scan_sscany;
	int Ti8011582122;
	Ti8011582122 = 0;
	double Td8011682120;
	Td8011682120 = Ta8011482121[Ti8011582122].d;
	double Td8011782118;
	Td8011782118 = fsqr81882_fun(Td8011682120, NULL);
	double Td8011882119;
	Td8011882119 = 40000.000000;
	double Td8011982117;
	Td8011982117 = Td8011782118 + Td8011882119;
	int Tu8006382081;
	Ta8011282115[Ti8011382116].d = Td8011982117;
	Value* Ta8012082113;
	Ta8012082113 = scan_sscany;
	int Ti8012182114;
	Ti8012182114 = 0;
	double Td8012282109;
	Td8012282109 = Ta8012082113[Ti8012182114].d;
	Value* Ta8012382111;
	Ta8012382111 = sin_v;
	int Ti8012482112;
	Ti8012482112 = 0;
	double Td8012582110;
	Td8012582110 = Ta8012382111[Ti8012482112].d;
	double t182082;
	t182082 =  Td8012282109 * Td8012582110;
	Value* Ta8012682099;
	Ta8012682099 = wscan;
	int Ti8012782100;
	Ti8012782100 = 0;
	Value* Ta8012882107;
	Ta8012882107 = sin_v;
	int Ti8012982108;
	Ti8012982108 = 1;
	double Td8013082106;
	Td8013082106 = Ta8012882107[Ti8012982108].d;
	double Td8013182102;
	Td8013182102 =  t182082 * Td8013082106;
	Value* Ta8013282104;
	Ta8013282104 = vp;
	int Ti8013382105;
	Ti8013382105 = 0;
	double Td8013482103;
	Td8013482103 = Ta8013282104[Ti8013382105].d;
	double Td8013582101;
	Td8013582101 = Td8013182102 - Td8013482103;
	int Tu8006282083;
	Ta8012682099[Ti8012782100].d = Td8013582101;
	Value* Ta8013682089;
	Ta8013682089 = wscan;
	int Ti8013782090;
	Ti8013782090 = 2;
	Value* Ta8013882097;
	Ta8013882097 = cos_v;
	int Ti8013982098;
	Ti8013982098 = 1;
	double Td8014082096;
	Td8014082096 = Ta8013882097[Ti8013982098].d;
	double Td8014182092;
	Td8014182092 =  t182082 * Td8014082096;
	Value* Ta8014282094;
	Ta8014282094 = vp;
	int Ti8014382095;
	Ti8014382095 = 2;
	double Td8014482093;
	Td8014482093 = Ta8014282094[Ti8014382095].d;
	double Td8014582091;
	Td8014582091 = Td8014182092 - Td8014482093;
	int Tu8006182084;
	Ta8013682089[Ti8013782090].d = Td8014582091;
	int Ti8014682088;
	Ti8014682088 = 0;
	int Tu8006082085;
	Tu8006082085 = scan_point82037_fun(Ti8014682088, NULL);
	int Ti8014782087;
	Ti8014782087 = 1;
	int Ti8014882086;
	Ti8014882086 = scany82040 + Ti8014782087;
	result = scan_line82039_fun(Ti8014882086, NULL);
    }
    return result;
}

int scan_start82041_fun(int Tu8006582042, Value *env){
    int result;
    int Tu8008482078;
    Tu8008482078 = 1;
    int Tu8006882062;
    Tu8006882062 = write_ppm_header82035_fun(Tu8008482078, NULL);
    Value* Ta8008582076;
    Ta8008582076 = size;
    int Ti8008682077;
    Ti8008682077 = 0;
    int Ti8008782075;
    Ti8008782075 = Ta8008582076[Ti8008682077].i;
    double sizex82063;
    sizex82063 = (double) Ti8008782075;
    Value* Ta8008882071;
    Ta8008882071 = scan_d;
    int Ti8008982072;
    Ti8008982072 = 0;
    double Td8009082074;
    Td8009082074 = 128.000000;
    double Td8009182073;
    Td8009182073 = Td8009082074 / sizex82063;
    int Tu8006782064;
    Ta8008882071[Ti8008982072].d = Td8009182073;
    Value* Ta8009282067;
    Ta8009282067 = scan_offset;
    int Ti8009382068;
    Ti8009382068 = 0;
    double Td8009482070;
    Td8009482070 = 2.000000;
    double Td8009582069;
    Td8009582069 = sizex82063 / Td8009482070;
    int Tu8006682065;
    Ta8009282067[Ti8009382068].d = Td8009582069;
    int Ti8009682066;
    Ti8009682066 = 0;
    result = scan_line82039_fun(Ti8009682066, NULL);
    return result;
}

int rt82043_fun(int size_x82044, int size_y82045, bool debug_p82046, Value *env){
    int result;
    Value* Ta8007682060;
    Ta8007682060 = size;
    int Ti8007782061;
    Ti8007782061 = 0;
    int Tu8007282050;
    Ta8007682060[Ti8007782061].i = size_x82044;
    Value* Ta8007882058;
    Ta8007882058 = size;
    int Ti8007982059;
    Ti8007982059 = 1;
    int Tu8007182051;
    Ta8007882058[Ti8007982059].i = size_y82045;
    Value* Ta8008082056;
    Ta8008082056 = dbg;
    int Ti8008182057;
    Ti8008182057 = 0;
    int Tu8007082052;
    Ta8008082056[Ti8008182057].b = debug_p82046;
    int Tu8008282055;
    Tu8008282055 = 1;
    int Tu8006982053;
    Tu8006982053 = read_parameter81945_fun(Tu8008282055, NULL);
    int Tu8008382054;
    Tu8008382054 = 1;
    result = scan_start82041_fun(Tu8008382054, NULL);
    return result;
}

int main(){
    and_net = malloc(200 * sizeof(Value));
    beam = malloc(8 * sizeof(Value));
    chkinside_p = malloc(24 * sizeof(Value));
    cos_v = malloc(16 * sizeof(Value));
    crashed_object = malloc(4 * sizeof(Value));
    crashed_point = malloc(4 * sizeof(Value));
    cs_temp = malloc(128 * sizeof(Value));
    dbg = malloc(4 * sizeof(Value));
    end_flag = malloc(4 * sizeof(Value));
    intsec_rectside = malloc(4 * sizeof(Value));
    isoutside_q = malloc(24 * sizeof(Value));
    light = malloc(24 * sizeof(Value));
    nvector = malloc(24 * sizeof(Value));
    nvector_w = malloc(24 * sizeof(Value));
    objects = malloc(240 * sizeof(Value));
    or_net = malloc(4 * sizeof(Value));
    rgb = malloc(24 * sizeof(Value));
    scan_d = malloc(8 * sizeof(Value));
    scan_met1 = malloc(8 * sizeof(Value));
    scan_offset = malloc(8 * sizeof(Value));
    scan_sscany = malloc(8 * sizeof(Value));
    screen = malloc(24 * sizeof(Value));
    sin_v = malloc(16 * sizeof(Value));
    size = malloc(8 * sizeof(Value));
    solver_dist = malloc(8 * sizeof(Value));
    solver_w_vec = malloc(24 * sizeof(Value));
    texture_color = malloc(24 * sizeof(Value));
    tmin = malloc(8 * sizeof(Value));
    view = malloc(24 * sizeof(Value));
    viewpoint = malloc(24 * sizeof(Value));
    vp = malloc(24 * sizeof(Value));
    vscan = malloc(24 * sizeof(Value));
    wscan = malloc(24 * sizeof(Value));
    int ans = 1;
    int Ti8007382047;
    Ti8007382047 = 768;
    int Ti8007482048;
    Ti8007482048 = 768;
    int Ti8007582049;
    Ti8007582049 = 0;
    ans = rt82043_fun(Ti8007382047, Ti8007482048, Ti8007582049, NULL);
    return ans;
}
