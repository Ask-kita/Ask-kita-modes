/* Generated code for Python module 'PyQt5.uic.properties'
 * created by Nuitka version 0.7.3
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_PyQt5$uic$properties" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PyQt5$uic$properties;
PyDictObject *moduledict_PyQt5$uic$properties;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[370];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[370];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("PyQt5.uic.properties"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 370; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_PyQt5$uic$properties(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 370; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_3f50f7fc2c57b8429321432c377f7c48;
static PyCodeObject *codeobj_88fa0c087e634522eda5db83a0596635;
static PyCodeObject *codeobj_8bc6cbabc622c93b8b6a0139e3a02883;
static PyCodeObject *codeobj_1864f9fc836afd5568f98878101f39ad;
static PyCodeObject *codeobj_5772021e875fe423b4dcdaabb12d2acd;
static PyCodeObject *codeobj_44a9a6121ae1386c16ced158d2ab4dc5;
static PyCodeObject *codeobj_84649733920aca3deef177809c4a21ac;
static PyCodeObject *codeobj_c778cb831ce022a271809015478d7462;
static PyCodeObject *codeobj_7112fc4cbe9cc21b0cfcd38008c8bf28;
static PyCodeObject *codeobj_7bf84473c69a3d0c4b19e72f43f75c60;
static PyCodeObject *codeobj_e1acac80a81458d76ac0bf29bdecdf35;
static PyCodeObject *codeobj_996f2a057396ed92baebb8388a6143c4;
static PyCodeObject *codeobj_f3cf78ccf5d100bfd524f9c979097b3d;
static PyCodeObject *codeobj_5e787ce4efbe320f6e134188a30a79d7;
static PyCodeObject *codeobj_0c56f34a4387b376b3c5bb160a542b72;
static PyCodeObject *codeobj_e9771d95f7d088bbca10776bde0a55b5;
static PyCodeObject *codeobj_8694ea8d00ef88f8a7ea32f74348af31;
static PyCodeObject *codeobj_d0b67fafc5f57770ef95e016a23c9060;
static PyCodeObject *codeobj_be133bfffed819c7d45e47c289868f60;
static PyCodeObject *codeobj_905d002371fbf8a07c64a45a5bf9169a;
static PyCodeObject *codeobj_cab2da6e036d4031d263aa85ee55148c;
static PyCodeObject *codeobj_8e0c5b63f752f34f68fb10f8a0e7d4e0;
static PyCodeObject *codeobj_70808b353ca0a80498a697a319892983;
static PyCodeObject *codeobj_bbcab014a6f6c92e10e933e5fb0a975a;
static PyCodeObject *codeobj_6ff57f15d437397b044ae1e85ce8a1a6;
static PyCodeObject *codeobj_fc7b94138e7cfd7c04fbe71a73c59a31;
static PyCodeObject *codeobj_5d37814c3c1fab85f80c8db481db9902;
static PyCodeObject *codeobj_da9b9a719ba8ff0867d365330bca7d8e;
static PyCodeObject *codeobj_95ce0ed7c75908a5e252622162dcdab0;
static PyCodeObject *codeobj_038fe9bd98b84c2651a5f5c338fbf42c;
static PyCodeObject *codeobj_f615656da651adcd7d0db75582416a1a;
static PyCodeObject *codeobj_139f933b149090a76fa8111ee1e17f2c;
static PyCodeObject *codeobj_cfe8d9f04fb7498dbef2b79113250807;
static PyCodeObject *codeobj_6e714898b0f8ec2302e9620e3e63a028;
static PyCodeObject *codeobj_b5d39ce8c592ae74ace6102193d9e8a3;
static PyCodeObject *codeobj_149463902e5b9f8c6d369f203dd37a2b;
static PyCodeObject *codeobj_2e684e62d2e4560b8eef24134c51e31e;
static PyCodeObject *codeobj_a86f27bc20e282b659dd54db51d5279a;
static PyCodeObject *codeobj_890daef3892da59cddeac017f0c7f6b9;
static PyCodeObject *codeobj_d209434123926b9a98520e74fecb8201;
static PyCodeObject *codeobj_84b3f13ba2f8b89143699e98b1fbaee1;
static PyCodeObject *codeobj_d43ae9c04c89d7e8b6b91adcec00b6f9;
static PyCodeObject *codeobj_f6f63bda9f2baf4bd814ee0ee28a0423;
static PyCodeObject *codeobj_e6f744dafdefa8e49c79e5d952c53d8d;
static PyCodeObject *codeobj_66b5ad636556b27414b674f28b4a5ddf;
static PyCodeObject *codeobj_cac7723c05df665aa820086392073287;
static PyCodeObject *codeobj_671542f4e09ce347afa137ad43a2ce8c;
static PyCodeObject *codeobj_2a2f650c9e91b136a38303051e82d9ca;
static PyCodeObject *codeobj_abfde152eb80e4671a27fbbd2fc93304;
static PyCodeObject *codeobj_35061fa8c7b70e6755e95141c65a2749;
static PyCodeObject *codeobj_08c65a48b67c08b96a1860f92a847793;
static PyCodeObject *codeobj_38a85b53ed0846efe21a3d12c8dc1618;
static PyCodeObject *codeobj_e87bd88670ea9b1e6e9e018129d7469d;
static PyCodeObject *codeobj_0f9357d518d4e813e599d447c080ff05;
static PyCodeObject *codeobj_c74b0040d0dc847e909bdf993a4ccb8f;
static PyCodeObject *codeobj_bcc8e56885daf2901f4cb87c7311cedc;
static PyCodeObject *codeobj_b1b1b219dd293e8694d8c30f379e1aef;
static PyCodeObject *codeobj_3444c8b9faf62e9a1e46eff43d8419d5;
static PyCodeObject *codeobj_9341a4783312edf09ab4cee782e1ef90;
static PyCodeObject *codeobj_73182bc2580af34bceeb254e77535031;
static PyCodeObject *codeobj_f3e5af376b7655b2acc6fc1dbfc86453;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[333]); CHECK_OBJECT(module_filename_obj);
    codeobj_3f50f7fc2c57b8429321432c377f7c48 = MAKE_CODEOBJECT(module_filename_obj, 340, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[205], mod_consts[334], NULL, 1, 0, 0);
    codeobj_88fa0c087e634522eda5db83a0596635 = MAKE_CODEOBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[205], mod_consts[335], NULL, 1, 0, 0);
    codeobj_8bc6cbabc622c93b8b6a0139e3a02883 = MAKE_CODEOBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[336], mod_consts[337], NULL, 1, 0, 0);
    codeobj_1864f9fc836afd5568f98878101f39ad = MAKE_CODEOBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[336], mod_consts[337], NULL, 1, 0, 0);
    codeobj_5772021e875fe423b4dcdaabb12d2acd = MAKE_CODEOBJECT(module_filename_obj, 319, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[336], mod_consts[337], NULL, 1, 0, 0);
    codeobj_44a9a6121ae1386c16ced158d2ab4dc5 = MAKE_CODEOBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[336], mod_consts[338], NULL, 1, 0, 0);
    codeobj_84649733920aca3deef177809c4a21ac = MAKE_CODEOBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[336], mod_consts[339], NULL, 1, 0, 0);
    codeobj_c778cb831ce022a271809015478d7462 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[340], NULL, NULL, 0, 0, 0);
    codeobj_7112fc4cbe9cc21b0cfcd38008c8bf28 = MAKE_CODEOBJECT(module_filename_obj, 79, CO_NOFREE, mod_consts[211], mod_consts[341], NULL, 0, 0, 0);
    codeobj_7bf84473c69a3d0c4b19e72f43f75c60 = MAKE_CODEOBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[219], mod_consts[342], NULL, 5, 0, 0);
    codeobj_e1acac80a81458d76ac0bf29bdecdf35 = MAKE_CODEOBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[235], mod_consts[343], NULL, 2, 0, 0);
    codeobj_996f2a057396ed92baebb8388a6143c4 = MAKE_CODEOBJECT(module_filename_obj, 300, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[114], mod_consts[344], NULL, 2, 0, 0);
    codeobj_f3cf78ccf5d100bfd524f9c979097b3d = MAKE_CODEOBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[101], mod_consts[345], NULL, 2, 0, 0);
    codeobj_5e787ce4efbe320f6e134188a30a79d7 = MAKE_CODEOBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[242], mod_consts[343], NULL, 2, 0, 0);
    codeobj_0c56f34a4387b376b3c5bb160a542b72 = MAKE_CODEOBJECT(module_filename_obj, 361, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[289], mod_consts[343], NULL, 2, 0, 0);
    codeobj_e9771d95f7d088bbca10776bde0a55b5 = MAKE_CODEOBJECT(module_filename_obj, 364, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[291], mod_consts[343], NULL, 2, 0, 0);
    codeobj_8694ea8d00ef88f8a7ea32f74348af31 = MAKE_CODEOBJECT(module_filename_obj, 214, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[264], mod_consts[343], NULL, 2, 0, 0);
    codeobj_d0b67fafc5f57770ef95e016a23c9060 = MAKE_CODEOBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[266], mod_consts[346], NULL, 2, 0, 0);
    codeobj_be133bfffed819c7d45e47c289868f60 = MAKE_CODEOBJECT(module_filename_obj, 428, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[301], mod_consts[347], NULL, 3, 0, 0);
    codeobj_905d002371fbf8a07c64a45a5bf9169a = MAKE_CODEOBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[233], mod_consts[343], NULL, 2, 0, 0);
    codeobj_cab2da6e036d4031d263aa85ee55148c = MAKE_CODEOBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[181], mod_consts[343], NULL, 2, 0, 0);
    codeobj_8e0c5b63f752f34f68fb10f8a0e7d4e0 = MAKE_CODEOBJECT(module_filename_obj, 350, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[287], mod_consts[348], NULL, 2, 0, 0);
    codeobj_70808b353ca0a80498a697a319892983 = MAKE_CODEOBJECT(module_filename_obj, 381, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[147], mod_consts[349], NULL, 5, 0, 0);
    codeobj_bbcab014a6f6c92e10e933e5fb0a975a = MAKE_CODEOBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[118], mod_consts[350], NULL, 2, 0, 0);
    codeobj_6ff57f15d437397b044ae1e85ce8a1a6 = MAKE_CODEOBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[258], mod_consts[343], NULL, 2, 0, 0);
    codeobj_fc7b94138e7cfd7c04fbe71a73c59a31 = MAKE_CODEOBJECT(module_filename_obj, 451, CO_NOFREE, mod_consts[304], mod_consts[351], NULL, 3, 0, 0);
    codeobj_5d37814c3c1fab85f80c8db481db9902 = MAKE_CODEOBJECT(module_filename_obj, 209, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[262], mod_consts[352], NULL, 2, 0, 0);
    codeobj_da9b9a719ba8ff0867d365330bca7d8e = MAKE_CODEOBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[227], mod_consts[343], NULL, 2, 0, 0);
    codeobj_95ce0ed7c75908a5e252622162dcdab0 = MAKE_CODEOBJECT(module_filename_obj, 279, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[271], mod_consts[353], NULL, 2, 0, 0);
    codeobj_038fe9bd98b84c2651a5f5c338fbf42c = MAKE_CODEOBJECT(module_filename_obj, 192, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[256], mod_consts[354], NULL, 2, 0, 0);
    codeobj_f615656da651adcd7d0db75582416a1a = MAKE_CODEOBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[245], mod_consts[343], NULL, 2, 0, 0);
    codeobj_139f933b149090a76fa8111ee1e17f2c = MAKE_CODEOBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[247], mod_consts[343], NULL, 2, 0, 0);
    codeobj_cfe8d9f04fb7498dbef2b79113250807 = MAKE_CODEOBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[27], mod_consts[355], NULL, 2, 0, 0);
    codeobj_6e714898b0f8ec2302e9620e3e63a028 = MAKE_CODEOBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[343], NULL, 2, 0, 0);
    codeobj_b5d39ce8c592ae74ace6102193d9e8a3 = MAKE_CODEOBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[250], mod_consts[343], NULL, 2, 0, 0);
    codeobj_149463902e5b9f8c6d369f203dd37a2b = MAKE_CODEOBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[224], mod_consts[356], NULL, 2, 0, 0);
    codeobj_2e684e62d2e4560b8eef24134c51e31e = MAKE_CODEOBJECT(module_filename_obj, 438, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[157], mod_consts[347], NULL, 3, 0, 0);
    codeobj_a86f27bc20e282b659dd54db51d5279a = MAKE_CODEOBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[252], mod_consts[343], NULL, 2, 0, 0);
    codeobj_890daef3892da59cddeac017f0c7f6b9 = MAKE_CODEOBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[254], mod_consts[343], NULL, 2, 0, 0);
    codeobj_d209434123926b9a98520e74fecb8201 = MAKE_CODEOBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[274], mod_consts[357], NULL, 3, 0, 0);
    codeobj_84b3f13ba2f8b89143699e98b1fbaee1 = MAKE_CODEOBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[358], NULL, 3, 0, 0);
    codeobj_d43ae9c04c89d7e8b6b91adcec00b6f9 = MAKE_CODEOBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[237], mod_consts[343], NULL, 2, 0, 0);
    codeobj_f6f63bda9f2baf4bd814ee0ee28a0423 = MAKE_CODEOBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[268], mod_consts[343], NULL, 2, 0, 0);
    codeobj_e6f744dafdefa8e49c79e5d952c53d8d = MAKE_CODEOBJECT(module_filename_obj, 206, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[260], mod_consts[343], NULL, 2, 0, 0);
    codeobj_66b5ad636556b27414b674f28b4a5ddf = MAKE_CODEOBJECT(module_filename_obj, 481, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[320], mod_consts[359], NULL, 3, 0, 0);
    codeobj_cac7723c05df665aa820086392073287 = MAKE_CODEOBJECT(module_filename_obj, 367, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[146], mod_consts[360], NULL, 3, 0, 0);
    codeobj_671542f4e09ce347afa137ad43a2ce8c = MAKE_CODEOBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[361], NULL, 1, 0, 0);
    codeobj_2a2f650c9e91b136a38303051e82d9ca = MAKE_CODEOBJECT(module_filename_obj, 487, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[322], mod_consts[362], NULL, 3, 0, 0);
    codeobj_abfde152eb80e4671a27fbbd2fc93304 = MAKE_CODEOBJECT(module_filename_obj, 391, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[297], mod_consts[363], NULL, 4, 0, 0);
    codeobj_35061fa8c7b70e6755e95141c65a2749 = MAKE_CODEOBJECT(module_filename_obj, 388, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[295], mod_consts[363], NULL, 4, 0, 0);
    codeobj_08c65a48b67c08b96a1860f92a847793 = MAKE_CODEOBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[361], NULL, 1, 0, 0);
    codeobj_38a85b53ed0846efe21a3d12c8dc1618 = MAKE_CODEOBJECT(module_filename_obj, 505, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[326], mod_consts[351], NULL, 3, 0, 0);
    codeobj_e87bd88670ea9b1e6e9e018129d7469d = MAKE_CODEOBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[364], NULL, 1, 0, 0);
    codeobj_0f9357d518d4e813e599d447c080ff05 = MAKE_CODEOBJECT(module_filename_obj, 494, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[324], mod_consts[351], NULL, 3, 0, 0);
    codeobj_c74b0040d0dc847e909bdf993a4ccb8f = MAKE_CODEOBJECT(module_filename_obj, 509, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[328], mod_consts[351], NULL, 3, 0, 0);
    codeobj_bcc8e56885daf2901f4cb87c7311cedc = MAKE_CODEOBJECT(module_filename_obj, 513, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[330], mod_consts[365], NULL, 3, 0, 0);
    codeobj_b1b1b219dd293e8694d8c30f379e1aef = MAKE_CODEOBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[207], mod_consts[335], NULL, 1, 0, 0);
    codeobj_3444c8b9faf62e9a1e46eff43d8419d5 = MAKE_CODEOBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[366], NULL, 1, 0, 0);
    codeobj_9341a4783312edf09ab4cee782e1ef90 = MAKE_CODEOBJECT(module_filename_obj, 394, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[299], mod_consts[367], NULL, 3, 0, 0);
    codeobj_73182bc2580af34bceeb254e77535031 = MAKE_CODEOBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[368], NULL, 2, 0, 0);
    codeobj_f3e5af376b7655b2acc6fc1dbfc86453 = MAKE_CODEOBJECT(module_filename_obj, 473, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[318], mod_consts[369], NULL, 3, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_list(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__2_complex_call_helper_pos_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__10__set();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__11__enum();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__12__number();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__13__double();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__14__bool();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__15__stringlist();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__16__string(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__17__cstring();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__18__color();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__19__point();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__1_int_list();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__20__pointf();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__21__rect();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__22__rectf();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__23__size();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__24__sizef();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__25__pixmap();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__26__iconset();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__27__url();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__28__locale();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__29__date();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__2_float_list();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__30__datetime();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__31__time();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__32__gradient();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__33__palette();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__34__brush();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__35__sizepolicy();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__36_lambda();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__37__font();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__38__cursor();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__39__cursorShape();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__3_lambda();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__40_convert(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__41__getChild(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__42_getProperty(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__43_getAttribute(PyObject *defaults);


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__44_setProperties();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__45__delayed_property();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__46__setViaSetProperty();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__47__ignore();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__48_tabSpacing();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__49_buddy();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__4_qfont_enum();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__50_geometry();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__51_orientation();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__52_isWrapping();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__53_pyuicMargins();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__54_pyuicSpacing();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__5_needsWidget();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__6___init__();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__7_set_base_dir();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__8_reset();


static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__9__pyEnumMember();


// The module function definitions.
static PyObject *impl_PyQt5$uic$properties$$$function__1_int_list(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_prop = python_pars[0];
    PyObject *outline_0_var_child = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_08c65a48b67c08b96a1860f92a847793;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_8bc6cbabc622c93b8b6a0139e3a02883_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_8bc6cbabc622c93b8b6a0139e3a02883_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_08c65a48b67c08b96a1860f92a847793 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_08c65a48b67c08b96a1860f92a847793)) {
        Py_XDECREF(cache_frame_08c65a48b67c08b96a1860f92a847793);

#if _DEBUG_REFCOUNTS
        if (cache_frame_08c65a48b67c08b96a1860f92a847793 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_08c65a48b67c08b96a1860f92a847793 = MAKE_FUNCTION_FRAME(codeobj_08c65a48b67c08b96a1860f92a847793, module_PyQt5$uic$properties, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_08c65a48b67c08b96a1860f92a847793->m_type_description == NULL);
    frame_08c65a48b67c08b96a1860f92a847793 = cache_frame_08c65a48b67c08b96a1860f92a847793;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_08c65a48b67c08b96a1860f92a847793);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_08c65a48b67c08b96a1860f92a847793) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_prop);
        tmp_iter_arg_1 = par_prop;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        assert(tmp_listcomp_1__$0 == NULL);
        tmp_listcomp_1__$0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New(0);
        assert(tmp_listcomp_1__contraction == NULL);
        tmp_listcomp_1__contraction = tmp_assign_source_2;
    }
    if (isFrameUnusable(cache_frame_8bc6cbabc622c93b8b6a0139e3a02883_2)) {
        Py_XDECREF(cache_frame_8bc6cbabc622c93b8b6a0139e3a02883_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8bc6cbabc622c93b8b6a0139e3a02883_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8bc6cbabc622c93b8b6a0139e3a02883_2 = MAKE_FUNCTION_FRAME(codeobj_8bc6cbabc622c93b8b6a0139e3a02883, module_PyQt5$uic$properties, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8bc6cbabc622c93b8b6a0139e3a02883_2->m_type_description == NULL);
    frame_8bc6cbabc622c93b8b6a0139e3a02883_2 = cache_frame_8bc6cbabc622c93b8b6a0139e3a02883_2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8bc6cbabc622c93b8b6a0139e3a02883_2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8bc6cbabc622c93b8b6a0139e3a02883_2) == 2); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        tmp_next_source_1 = tmp_listcomp_1__$0;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "o";
                exception_lineno = 64;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_child;
            outline_0_var_child = tmp_assign_source_4;
            Py_INCREF(outline_0_var_child);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        CHECK_OBJECT(outline_0_var_child);
        tmp_expression_value_1 = outline_0_var_child;
        tmp_int_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        tmp_append_value_1 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_append_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        assert(PyList_Check(tmp_append_list_1));
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 64;
        type_description_2 = "o";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    goto frame_return_exit_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8bc6cbabc622c93b8b6a0139e3a02883_2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8bc6cbabc622c93b8b6a0139e3a02883_2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8bc6cbabc622c93b8b6a0139e3a02883_2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8bc6cbabc622c93b8b6a0139e3a02883_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8bc6cbabc622c93b8b6a0139e3a02883_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8bc6cbabc622c93b8b6a0139e3a02883_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8bc6cbabc622c93b8b6a0139e3a02883_2,
        type_description_2,
        outline_0_var_child
    );


    // Release cached frame if used for exception.
    if (frame_8bc6cbabc622c93b8b6a0139e3a02883_2 == cache_frame_8bc6cbabc622c93b8b6a0139e3a02883_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8bc6cbabc622c93b8b6a0139e3a02883_2);
        cache_frame_8bc6cbabc622c93b8b6a0139e3a02883_2 = NULL;
    }

    assertFrameObject(frame_8bc6cbabc622c93b8b6a0139e3a02883_2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "o";
    goto try_except_handler_1;
    skip_nested_handling_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(outline_0_var_child);
    outline_0_var_child = NULL;
    goto outline_result_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(outline_0_var_child);
    outline_0_var_child = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_1:;
    exception_lineno = 64;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_08c65a48b67c08b96a1860f92a847793);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_08c65a48b67c08b96a1860f92a847793);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_08c65a48b67c08b96a1860f92a847793);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_08c65a48b67c08b96a1860f92a847793, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_08c65a48b67c08b96a1860f92a847793->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_08c65a48b67c08b96a1860f92a847793, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_08c65a48b67c08b96a1860f92a847793,
        type_description_1,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_08c65a48b67c08b96a1860f92a847793 == cache_frame_08c65a48b67c08b96a1860f92a847793) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_08c65a48b67c08b96a1860f92a847793);
        cache_frame_08c65a48b67c08b96a1860f92a847793 = NULL;
    }

    assertFrameObject(frame_08c65a48b67c08b96a1860f92a847793);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_2:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__2_float_list(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_prop = python_pars[0];
    PyObject *outline_0_var_child = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_671542f4e09ce347afa137ad43a2ce8c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_1864f9fc836afd5568f98878101f39ad_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_1864f9fc836afd5568f98878101f39ad_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_671542f4e09ce347afa137ad43a2ce8c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_671542f4e09ce347afa137ad43a2ce8c)) {
        Py_XDECREF(cache_frame_671542f4e09ce347afa137ad43a2ce8c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_671542f4e09ce347afa137ad43a2ce8c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_671542f4e09ce347afa137ad43a2ce8c = MAKE_FUNCTION_FRAME(codeobj_671542f4e09ce347afa137ad43a2ce8c, module_PyQt5$uic$properties, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_671542f4e09ce347afa137ad43a2ce8c->m_type_description == NULL);
    frame_671542f4e09ce347afa137ad43a2ce8c = cache_frame_671542f4e09ce347afa137ad43a2ce8c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_671542f4e09ce347afa137ad43a2ce8c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_671542f4e09ce347afa137ad43a2ce8c) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_prop);
        tmp_iter_arg_1 = par_prop;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        assert(tmp_listcomp_1__$0 == NULL);
        tmp_listcomp_1__$0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New(0);
        assert(tmp_listcomp_1__contraction == NULL);
        tmp_listcomp_1__contraction = tmp_assign_source_2;
    }
    if (isFrameUnusable(cache_frame_1864f9fc836afd5568f98878101f39ad_2)) {
        Py_XDECREF(cache_frame_1864f9fc836afd5568f98878101f39ad_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1864f9fc836afd5568f98878101f39ad_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1864f9fc836afd5568f98878101f39ad_2 = MAKE_FUNCTION_FRAME(codeobj_1864f9fc836afd5568f98878101f39ad, module_PyQt5$uic$properties, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1864f9fc836afd5568f98878101f39ad_2->m_type_description == NULL);
    frame_1864f9fc836afd5568f98878101f39ad_2 = cache_frame_1864f9fc836afd5568f98878101f39ad_2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1864f9fc836afd5568f98878101f39ad_2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1864f9fc836afd5568f98878101f39ad_2) == 2); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        tmp_next_source_1 = tmp_listcomp_1__$0;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "o";
                exception_lineno = 67;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_child;
            outline_0_var_child = tmp_assign_source_4;
            Py_INCREF(outline_0_var_child);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        CHECK_OBJECT(outline_0_var_child);
        tmp_expression_value_1 = outline_0_var_child;
        tmp_float_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_float_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        tmp_append_value_1 = TO_FLOAT(tmp_float_arg_1);
        Py_DECREF(tmp_float_arg_1);
        if (tmp_append_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        assert(PyList_Check(tmp_append_list_1));
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 67;
        type_description_2 = "o";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    goto frame_return_exit_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1864f9fc836afd5568f98878101f39ad_2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1864f9fc836afd5568f98878101f39ad_2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1864f9fc836afd5568f98878101f39ad_2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1864f9fc836afd5568f98878101f39ad_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1864f9fc836afd5568f98878101f39ad_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1864f9fc836afd5568f98878101f39ad_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1864f9fc836afd5568f98878101f39ad_2,
        type_description_2,
        outline_0_var_child
    );


    // Release cached frame if used for exception.
    if (frame_1864f9fc836afd5568f98878101f39ad_2 == cache_frame_1864f9fc836afd5568f98878101f39ad_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1864f9fc836afd5568f98878101f39ad_2);
        cache_frame_1864f9fc836afd5568f98878101f39ad_2 = NULL;
    }

    assertFrameObject(frame_1864f9fc836afd5568f98878101f39ad_2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "o";
    goto try_except_handler_1;
    skip_nested_handling_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(outline_0_var_child);
    outline_0_var_child = NULL;
    goto outline_result_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(outline_0_var_child);
    outline_0_var_child = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_1:;
    exception_lineno = 67;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_671542f4e09ce347afa137ad43a2ce8c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_671542f4e09ce347afa137ad43a2ce8c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_671542f4e09ce347afa137ad43a2ce8c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_671542f4e09ce347afa137ad43a2ce8c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_671542f4e09ce347afa137ad43a2ce8c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_671542f4e09ce347afa137ad43a2ce8c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_671542f4e09ce347afa137ad43a2ce8c,
        type_description_1,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_671542f4e09ce347afa137ad43a2ce8c == cache_frame_671542f4e09ce347afa137ad43a2ce8c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_671542f4e09ce347afa137ad43a2ce8c);
        cache_frame_671542f4e09ce347afa137ad43a2ce8c = NULL;
    }

    assertFrameObject(frame_671542f4e09ce347afa137ad43a2ce8c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_2:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__3_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[0];
    struct Nuitka_FrameObject *frame_88fa0c087e634522eda5db83a0596635;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_88fa0c087e634522eda5db83a0596635 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_88fa0c087e634522eda5db83a0596635)) {
        Py_XDECREF(cache_frame_88fa0c087e634522eda5db83a0596635);

#if _DEBUG_REFCOUNTS
        if (cache_frame_88fa0c087e634522eda5db83a0596635 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_88fa0c087e634522eda5db83a0596635 = MAKE_FUNCTION_FRAME(codeobj_88fa0c087e634522eda5db83a0596635, module_PyQt5$uic$properties, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_88fa0c087e634522eda5db83a0596635->m_type_description == NULL);
    frame_88fa0c087e634522eda5db83a0596635 = cache_frame_88fa0c087e634522eda5db83a0596635;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_88fa0c087e634522eda5db83a0596635);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_88fa0c087e634522eda5db83a0596635) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_v);
        tmp_cmp_expr_left_1 = par_v;
        tmp_cmp_expr_right_1 = mod_consts[1];
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_88fa0c087e634522eda5db83a0596635);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_88fa0c087e634522eda5db83a0596635);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_88fa0c087e634522eda5db83a0596635);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_88fa0c087e634522eda5db83a0596635, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_88fa0c087e634522eda5db83a0596635->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_88fa0c087e634522eda5db83a0596635, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_88fa0c087e634522eda5db83a0596635,
        type_description_1,
        par_v
    );


    // Release cached frame if used for exception.
    if (frame_88fa0c087e634522eda5db83a0596635 == cache_frame_88fa0c087e634522eda5db83a0596635) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_88fa0c087e634522eda5db83a0596635);
        cache_frame_88fa0c087e634522eda5db83a0596635 = NULL;
    }

    assertFrameObject(frame_88fa0c087e634522eda5db83a0596635);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__4_qfont_enum(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[0];
    struct Nuitka_FrameObject *frame_b1b1b219dd293e8694d8c30f379e1aef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b1b1b219dd293e8694d8c30f379e1aef = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b1b1b219dd293e8694d8c30f379e1aef)) {
        Py_XDECREF(cache_frame_b1b1b219dd293e8694d8c30f379e1aef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b1b1b219dd293e8694d8c30f379e1aef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b1b1b219dd293e8694d8c30f379e1aef = MAKE_FUNCTION_FRAME(codeobj_b1b1b219dd293e8694d8c30f379e1aef, module_PyQt5$uic$properties, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b1b1b219dd293e8694d8c30f379e1aef->m_type_description == NULL);
    frame_b1b1b219dd293e8694d8c30f379e1aef = cache_frame_b1b1b219dd293e8694d8c30f379e1aef;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b1b1b219dd293e8694d8c30f379e1aef);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b1b1b219dd293e8694d8c30f379e1aef) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_getattr_attr_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_v);
        tmp_getattr_attr_1 = par_v;
        tmp_return_value = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b1b1b219dd293e8694d8c30f379e1aef);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b1b1b219dd293e8694d8c30f379e1aef);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b1b1b219dd293e8694d8c30f379e1aef);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b1b1b219dd293e8694d8c30f379e1aef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b1b1b219dd293e8694d8c30f379e1aef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b1b1b219dd293e8694d8c30f379e1aef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b1b1b219dd293e8694d8c30f379e1aef,
        type_description_1,
        par_v
    );


    // Release cached frame if used for exception.
    if (frame_b1b1b219dd293e8694d8c30f379e1aef == cache_frame_b1b1b219dd293e8694d8c30f379e1aef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b1b1b219dd293e8694d8c30f379e1aef);
        cache_frame_b1b1b219dd293e8694d8c30f379e1aef = NULL;
    }

    assertFrameObject(frame_b1b1b219dd293e8694d8c30f379e1aef);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__5_needsWidget(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    struct Nuitka_FrameObject *frame_e87bd88670ea9b1e6e9e018129d7469d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e87bd88670ea9b1e6e9e018129d7469d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e87bd88670ea9b1e6e9e018129d7469d)) {
        Py_XDECREF(cache_frame_e87bd88670ea9b1e6e9e018129d7469d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e87bd88670ea9b1e6e9e018129d7469d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e87bd88670ea9b1e6e9e018129d7469d = MAKE_FUNCTION_FRAME(codeobj_e87bd88670ea9b1e6e9e018129d7469d, module_PyQt5$uic$properties, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e87bd88670ea9b1e6e9e018129d7469d->m_type_description == NULL);
    frame_e87bd88670ea9b1e6e9e018129d7469d = cache_frame_e87bd88670ea9b1e6e9e018129d7469d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e87bd88670ea9b1e6e9e018129d7469d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e87bd88670ea9b1e6e9e018129d7469d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_func);
        tmp_assattr_target_1 = par_func;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e87bd88670ea9b1e6e9e018129d7469d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e87bd88670ea9b1e6e9e018129d7469d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e87bd88670ea9b1e6e9e018129d7469d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e87bd88670ea9b1e6e9e018129d7469d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e87bd88670ea9b1e6e9e018129d7469d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e87bd88670ea9b1e6e9e018129d7469d,
        type_description_1,
        par_func
    );


    // Release cached frame if used for exception.
    if (frame_e87bd88670ea9b1e6e9e018129d7469d == cache_frame_e87bd88670ea9b1e6e9e018129d7469d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e87bd88670ea9b1e6e9e018129d7469d);
        cache_frame_e87bd88670ea9b1e6e9e018129d7469d = NULL;
    }

    assertFrameObject(frame_e87bd88670ea9b1e6e9e018129d7469d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT(par_func);
    tmp_return_value = par_func;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__6___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_factory = python_pars[1];
    PyObject *par_qtcore_module = python_pars[2];
    PyObject *par_qtgui_module = python_pars[3];
    PyObject *par_qtwidgets_module = python_pars[4];
    struct Nuitka_FrameObject *frame_7bf84473c69a3d0c4b19e72f43f75c60;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7bf84473c69a3d0c4b19e72f43f75c60 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7bf84473c69a3d0c4b19e72f43f75c60)) {
        Py_XDECREF(cache_frame_7bf84473c69a3d0c4b19e72f43f75c60);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7bf84473c69a3d0c4b19e72f43f75c60 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7bf84473c69a3d0c4b19e72f43f75c60 = MAKE_FUNCTION_FRAME(codeobj_7bf84473c69a3d0c4b19e72f43f75c60, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7bf84473c69a3d0c4b19e72f43f75c60->m_type_description == NULL);
    frame_7bf84473c69a3d0c4b19e72f43f75c60 = cache_frame_7bf84473c69a3d0c4b19e72f43f75c60;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7bf84473c69a3d0c4b19e72f43f75c60);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7bf84473c69a3d0c4b19e72f43f75c60) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_factory);
        tmp_assattr_value_1 = par_factory;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_qtcore_module);
        tmp_assign_source_1 = par_qtcore_module;
        UPDATE_STRING_DICT0(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(par_qtgui_module);
        tmp_assign_source_2 = par_qtgui_module;
        UPDATE_STRING_DICT0(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(par_qtwidgets_module);
        tmp_assign_source_3 = par_qtwidgets_module;
        UPDATE_STRING_DICT0(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[8];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[9], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_7bf84473c69a3d0c4b19e72f43f75c60->m_frame.f_lineno = 90;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[10]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7bf84473c69a3d0c4b19e72f43f75c60);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7bf84473c69a3d0c4b19e72f43f75c60);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7bf84473c69a3d0c4b19e72f43f75c60, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7bf84473c69a3d0c4b19e72f43f75c60->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7bf84473c69a3d0c4b19e72f43f75c60, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7bf84473c69a3d0c4b19e72f43f75c60,
        type_description_1,
        par_self,
        par_factory,
        par_qtcore_module,
        par_qtgui_module,
        par_qtwidgets_module
    );


    // Release cached frame if used for exception.
    if (frame_7bf84473c69a3d0c4b19e72f43f75c60 == cache_frame_7bf84473c69a3d0c4b19e72f43f75c60) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7bf84473c69a3d0c4b19e72f43f75c60);
        cache_frame_7bf84473c69a3d0c4b19e72f43f75c60 = NULL;
    }

    assertFrameObject(frame_7bf84473c69a3d0c4b19e72f43f75c60);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_factory);
    Py_DECREF(par_factory);
    CHECK_OBJECT(par_qtcore_module);
    Py_DECREF(par_qtcore_module);
    CHECK_OBJECT(par_qtgui_module);
    Py_DECREF(par_qtgui_module);
    CHECK_OBJECT(par_qtwidgets_module);
    Py_DECREF(par_qtwidgets_module);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_factory);
    Py_DECREF(par_factory);
    CHECK_OBJECT(par_qtcore_module);
    Py_DECREF(par_qtcore_module);
    CHECK_OBJECT(par_qtgui_module);
    Py_DECREF(par_qtgui_module);
    CHECK_OBJECT(par_qtwidgets_module);
    Py_DECREF(par_qtwidgets_module);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__7_set_base_dir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_base_dir = python_pars[1];
    struct Nuitka_FrameObject *frame_73182bc2580af34bceeb254e77535031;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_73182bc2580af34bceeb254e77535031 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_73182bc2580af34bceeb254e77535031)) {
        Py_XDECREF(cache_frame_73182bc2580af34bceeb254e77535031);

#if _DEBUG_REFCOUNTS
        if (cache_frame_73182bc2580af34bceeb254e77535031 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_73182bc2580af34bceeb254e77535031 = MAKE_FUNCTION_FRAME(codeobj_73182bc2580af34bceeb254e77535031, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_73182bc2580af34bceeb254e77535031->m_type_description == NULL);
    frame_73182bc2580af34bceeb254e77535031 = cache_frame_73182bc2580af34bceeb254e77535031;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_73182bc2580af34bceeb254e77535031);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_73182bc2580af34bceeb254e77535031) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_base_dir);
        tmp_assattr_value_1 = par_base_dir;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[9], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_base_dir);
        tmp_args_element_value_1 = par_base_dir;
        frame_73182bc2580af34bceeb254e77535031->m_frame.f_lineno = 96;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[12], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_73182bc2580af34bceeb254e77535031);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_73182bc2580af34bceeb254e77535031);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_73182bc2580af34bceeb254e77535031, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_73182bc2580af34bceeb254e77535031->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_73182bc2580af34bceeb254e77535031, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_73182bc2580af34bceeb254e77535031,
        type_description_1,
        par_self,
        par_base_dir
    );


    // Release cached frame if used for exception.
    if (frame_73182bc2580af34bceeb254e77535031 == cache_frame_73182bc2580af34bceeb254e77535031) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_73182bc2580af34bceeb254e77535031);
        cache_frame_73182bc2580af34bceeb254e77535031 = NULL;
    }

    assertFrameObject(frame_73182bc2580af34bceeb254e77535031);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_base_dir);
    Py_DECREF(par_base_dir);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_base_dir);
    Py_DECREF(par_base_dir);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__8_reset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3444c8b9faf62e9a1e46eff43d8419d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3444c8b9faf62e9a1e46eff43d8419d5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3444c8b9faf62e9a1e46eff43d8419d5)) {
        Py_XDECREF(cache_frame_3444c8b9faf62e9a1e46eff43d8419d5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3444c8b9faf62e9a1e46eff43d8419d5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3444c8b9faf62e9a1e46eff43d8419d5 = MAKE_FUNCTION_FRAME(codeobj_3444c8b9faf62e9a1e46eff43d8419d5, module_PyQt5$uic$properties, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3444c8b9faf62e9a1e46eff43d8419d5->m_type_description == NULL);
    frame_3444c8b9faf62e9a1e46eff43d8419d5 = cache_frame_3444c8b9faf62e9a1e46eff43d8419d5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3444c8b9faf62e9a1e46eff43d8419d5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3444c8b9faf62e9a1e46eff43d8419d5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[15], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3444c8b9faf62e9a1e46eff43d8419d5->m_frame.f_lineno = 101;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assattr_value_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[11], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3444c8b9faf62e9a1e46eff43d8419d5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3444c8b9faf62e9a1e46eff43d8419d5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3444c8b9faf62e9a1e46eff43d8419d5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3444c8b9faf62e9a1e46eff43d8419d5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3444c8b9faf62e9a1e46eff43d8419d5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3444c8b9faf62e9a1e46eff43d8419d5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3444c8b9faf62e9a1e46eff43d8419d5 == cache_frame_3444c8b9faf62e9a1e46eff43d8419d5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3444c8b9faf62e9a1e46eff43d8419d5);
        cache_frame_3444c8b9faf62e9a1e46eff43d8419d5 = NULL;
    }

    assertFrameObject(frame_3444c8b9faf62e9a1e46eff43d8419d5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__9__pyEnumMember(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cpp_name = python_pars[1];
    PyObject *var_prefix = NULL;
    PyObject *var_membername = NULL;
    PyObject *var_scope = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_cfe8d9f04fb7498dbef2b79113250807;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cfe8d9f04fb7498dbef2b79113250807 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cfe8d9f04fb7498dbef2b79113250807)) {
        Py_XDECREF(cache_frame_cfe8d9f04fb7498dbef2b79113250807);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cfe8d9f04fb7498dbef2b79113250807 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cfe8d9f04fb7498dbef2b79113250807 = MAKE_FUNCTION_FRAME(codeobj_cfe8d9f04fb7498dbef2b79113250807, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cfe8d9f04fb7498dbef2b79113250807->m_type_description == NULL);
    frame_cfe8d9f04fb7498dbef2b79113250807 = cache_frame_cfe8d9f04fb7498dbef2b79113250807;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cfe8d9f04fb7498dbef2b79113250807);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cfe8d9f04fb7498dbef2b79113250807) == 2); // Frame stack

    // Framed code:
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_cpp_name);
        tmp_expression_value_1 = par_cpp_name;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        frame_cfe8d9f04fb7498dbef2b79113250807->m_frame.f_lineno = 105;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[18]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 105;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 105;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooo";
                    exception_lineno = 105;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[19];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 105;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_prefix == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_prefix = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_membername == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_membername = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_cfe8d9f04fb7498dbef2b79113250807, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_cfe8d9f04fb7498dbef2b79113250807, exception_keeper_lineno_3);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_3, exception_keeper_tb_3);
    PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[20];
        assert(var_prefix == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_prefix = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(par_cpp_name);
        tmp_assign_source_7 = par_cpp_name;
        assert(var_membername == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_membername = tmp_assign_source_7;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 104;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_cfe8d9f04fb7498dbef2b79113250807->m_frame) frame_cfe8d9f04fb7498dbef2b79113250807->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_5;
    branch_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (var_prefix == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 110;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = var_prefix;
        tmp_cmp_expr_right_2 = mod_consts[20];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_getattr_attr_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[20]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_membername == NULL) {
            Py_DECREF(tmp_getattr_target_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 111;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_getattr_attr_1 = var_membername;
        tmp_return_value = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[5]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[23]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_prefix == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = var_prefix;
        frame_cfe8d9f04fb7498dbef2b79113250807->m_frame.f_lineno = 113;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_scope == NULL);
        var_scope = tmp_assign_source_8;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_scope);
        tmp_cmp_expr_left_3 = var_scope;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_prefix == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 115;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = var_prefix;
        frame_cfe8d9f04fb7498dbef2b79113250807->m_frame.f_lineno = 115;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 115;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        CHECK_OBJECT(var_scope);
        tmp_getattr_target_2 = var_scope;
        if (var_membername == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_getattr_attr_2 = var_membername;
        tmp_return_value = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, NULL);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cfe8d9f04fb7498dbef2b79113250807);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cfe8d9f04fb7498dbef2b79113250807);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cfe8d9f04fb7498dbef2b79113250807);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cfe8d9f04fb7498dbef2b79113250807, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cfe8d9f04fb7498dbef2b79113250807->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cfe8d9f04fb7498dbef2b79113250807, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cfe8d9f04fb7498dbef2b79113250807,
        type_description_1,
        par_self,
        par_cpp_name,
        var_prefix,
        var_membername,
        var_scope
    );


    // Release cached frame if used for exception.
    if (frame_cfe8d9f04fb7498dbef2b79113250807 == cache_frame_cfe8d9f04fb7498dbef2b79113250807) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_cfe8d9f04fb7498dbef2b79113250807);
        cache_frame_cfe8d9f04fb7498dbef2b79113250807 = NULL;
    }

    assertFrameObject(frame_cfe8d9f04fb7498dbef2b79113250807);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_prefix);
    var_prefix = NULL;
    Py_XDECREF(var_membername);
    var_membername = NULL;
    Py_XDECREF(var_scope);
    var_scope = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_prefix);
    var_prefix = NULL;
    Py_XDECREF(var_membername);
    var_membername = NULL;
    Py_XDECREF(var_scope);
    var_scope = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cpp_name);
    Py_DECREF(par_cpp_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cpp_name);
    Py_DECREF(par_cpp_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__10__set(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    PyObject *var_expr = NULL;
    PyObject *var_value = NULL;
    PyObject *var_v = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_149463902e5b9f8c6d369f203dd37a2b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_84649733920aca3deef177809c4a21ac_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_84649733920aca3deef177809c4a21ac_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_149463902e5b9f8c6d369f203dd37a2b = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_149463902e5b9f8c6d369f203dd37a2b)) {
        Py_XDECREF(cache_frame_149463902e5b9f8c6d369f203dd37a2b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_149463902e5b9f8c6d369f203dd37a2b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_149463902e5b9f8c6d369f203dd37a2b = MAKE_FUNCTION_FRAME(codeobj_149463902e5b9f8c6d369f203dd37a2b, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_149463902e5b9f8c6d369f203dd37a2b->m_type_description == NULL);
    frame_149463902e5b9f8c6d369f203dd37a2b = cache_frame_149463902e5b9f8c6d369f203dd37a2b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_149463902e5b9f8c6d369f203dd37a2b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_149463902e5b9f8c6d369f203dd37a2b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_expression_value_2;
            CHECK_OBJECT(par_prop);
            tmp_expression_value_2 = par_prop;
            tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            frame_149463902e5b9f8c6d369f203dd37a2b->m_frame.f_lineno = 120;
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[25]);

            Py_DECREF(tmp_called_value_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        if (isFrameUnusable(cache_frame_84649733920aca3deef177809c4a21ac_2)) {
            Py_XDECREF(cache_frame_84649733920aca3deef177809c4a21ac_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_84649733920aca3deef177809c4a21ac_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_84649733920aca3deef177809c4a21ac_2 = MAKE_FUNCTION_FRAME(codeobj_84649733920aca3deef177809c4a21ac, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_84649733920aca3deef177809c4a21ac_2->m_type_description == NULL);
        frame_84649733920aca3deef177809c4a21ac_2 = cache_frame_84649733920aca3deef177809c4a21ac_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_84649733920aca3deef177809c4a21ac_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_84649733920aca3deef177809c4a21ac_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 120;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_v;
                outline_0_var_v = tmp_assign_source_5;
                Py_INCREF(outline_0_var_v);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            if (par_self == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[26]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 120;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }

            tmp_called_instance_1 = par_self;
            CHECK_OBJECT(outline_0_var_v);
            tmp_args_element_value_1 = outline_0_var_v;
            frame_84649733920aca3deef177809c4a21ac_2->m_frame.f_lineno = 120;
            tmp_append_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[27], tmp_args_element_value_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_84649733920aca3deef177809c4a21ac_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_84649733920aca3deef177809c4a21ac_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_84649733920aca3deef177809c4a21ac_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_84649733920aca3deef177809c4a21ac_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_84649733920aca3deef177809c4a21ac_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_84649733920aca3deef177809c4a21ac_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_84649733920aca3deef177809c4a21ac_2,
            type_description_2,
            outline_0_var_v,
            par_self
        );


        // Release cached frame if used for exception.
        if (frame_84649733920aca3deef177809c4a21ac_2 == cache_frame_84649733920aca3deef177809c4a21ac_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_84649733920aca3deef177809c4a21ac_2);
            cache_frame_84649733920aca3deef177809c4a21ac_2 = NULL;
        }

        assertFrameObject(frame_84649733920aca3deef177809c4a21ac_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 120;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_expr == NULL);
        var_expr = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_expr);
        tmp_expression_value_3 = var_expr;
        tmp_subscript_value_1 = mod_consts[28];
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_value == NULL);
        var_value = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_expr);
        tmp_expression_value_4 = var_expr;
        tmp_subscript_value_2 = mod_consts[29];
        tmp_iter_arg_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 123;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_9 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_9;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        if (var_value == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 124;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }

        tmp_left_value_1 = var_value;
        CHECK_OBJECT(var_v);
        tmp_right_value_1 = var_v;
        tmp_result = BINARY_OPERATION_BITOR_OBJECT_OBJECT_INPLACE(&tmp_left_value_1, tmp_right_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_10 = tmp_left_value_1;
        var_value = tmp_assign_source_10;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 123;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_value == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 126;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_value;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_149463902e5b9f8c6d369f203dd37a2b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_149463902e5b9f8c6d369f203dd37a2b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_149463902e5b9f8c6d369f203dd37a2b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_149463902e5b9f8c6d369f203dd37a2b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_149463902e5b9f8c6d369f203dd37a2b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_149463902e5b9f8c6d369f203dd37a2b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_149463902e5b9f8c6d369f203dd37a2b,
        type_description_1,
        par_self,
        par_prop,
        var_expr,
        var_value,
        var_v
    );


    // Release cached frame if used for exception.
    if (frame_149463902e5b9f8c6d369f203dd37a2b == cache_frame_149463902e5b9f8c6d369f203dd37a2b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_149463902e5b9f8c6d369f203dd37a2b);
        cache_frame_149463902e5b9f8c6d369f203dd37a2b = NULL;
    }

    assertFrameObject(frame_149463902e5b9f8c6d369f203dd37a2b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_expr);
    Py_DECREF(var_expr);
    var_expr = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_expr);
    var_expr = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__11__enum(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    struct Nuitka_FrameObject *frame_cab2da6e036d4031d263aa85ee55148c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cab2da6e036d4031d263aa85ee55148c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cab2da6e036d4031d263aa85ee55148c)) {
        Py_XDECREF(cache_frame_cab2da6e036d4031d263aa85ee55148c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cab2da6e036d4031d263aa85ee55148c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cab2da6e036d4031d263aa85ee55148c = MAKE_FUNCTION_FRAME(codeobj_cab2da6e036d4031d263aa85ee55148c, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cab2da6e036d4031d263aa85ee55148c->m_type_description == NULL);
    frame_cab2da6e036d4031d263aa85ee55148c = cache_frame_cab2da6e036d4031d263aa85ee55148c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cab2da6e036d4031d263aa85ee55148c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cab2da6e036d4031d263aa85ee55148c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[27]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_expression_value_2 = par_prop;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 129;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_cab2da6e036d4031d263aa85ee55148c->m_frame.f_lineno = 129;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cab2da6e036d4031d263aa85ee55148c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cab2da6e036d4031d263aa85ee55148c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cab2da6e036d4031d263aa85ee55148c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cab2da6e036d4031d263aa85ee55148c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cab2da6e036d4031d263aa85ee55148c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cab2da6e036d4031d263aa85ee55148c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cab2da6e036d4031d263aa85ee55148c,
        type_description_1,
        par_self,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_cab2da6e036d4031d263aa85ee55148c == cache_frame_cab2da6e036d4031d263aa85ee55148c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_cab2da6e036d4031d263aa85ee55148c);
        cache_frame_cab2da6e036d4031d263aa85ee55148c = NULL;
    }

    assertFrameObject(frame_cab2da6e036d4031d263aa85ee55148c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__12__number(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    struct Nuitka_FrameObject *frame_da9b9a719ba8ff0867d365330bca7d8e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_da9b9a719ba8ff0867d365330bca7d8e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_da9b9a719ba8ff0867d365330bca7d8e)) {
        Py_XDECREF(cache_frame_da9b9a719ba8ff0867d365330bca7d8e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da9b9a719ba8ff0867d365330bca7d8e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da9b9a719ba8ff0867d365330bca7d8e = MAKE_FUNCTION_FRAME(codeobj_da9b9a719ba8ff0867d365330bca7d8e, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_da9b9a719ba8ff0867d365330bca7d8e->m_type_description == NULL);
    frame_da9b9a719ba8ff0867d365330bca7d8e = cache_frame_da9b9a719ba8ff0867d365330bca7d8e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_da9b9a719ba8ff0867d365330bca7d8e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_da9b9a719ba8ff0867d365330bca7d8e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_int_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_1 = par_prop;
        tmp_int_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_da9b9a719ba8ff0867d365330bca7d8e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_da9b9a719ba8ff0867d365330bca7d8e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_da9b9a719ba8ff0867d365330bca7d8e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_da9b9a719ba8ff0867d365330bca7d8e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da9b9a719ba8ff0867d365330bca7d8e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da9b9a719ba8ff0867d365330bca7d8e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da9b9a719ba8ff0867d365330bca7d8e,
        type_description_1,
        par_self,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_da9b9a719ba8ff0867d365330bca7d8e == cache_frame_da9b9a719ba8ff0867d365330bca7d8e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_da9b9a719ba8ff0867d365330bca7d8e);
        cache_frame_da9b9a719ba8ff0867d365330bca7d8e = NULL;
    }

    assertFrameObject(frame_da9b9a719ba8ff0867d365330bca7d8e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__13__double(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    struct Nuitka_FrameObject *frame_905d002371fbf8a07c64a45a5bf9169a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_905d002371fbf8a07c64a45a5bf9169a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_905d002371fbf8a07c64a45a5bf9169a)) {
        Py_XDECREF(cache_frame_905d002371fbf8a07c64a45a5bf9169a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_905d002371fbf8a07c64a45a5bf9169a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_905d002371fbf8a07c64a45a5bf9169a = MAKE_FUNCTION_FRAME(codeobj_905d002371fbf8a07c64a45a5bf9169a, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_905d002371fbf8a07c64a45a5bf9169a->m_type_description == NULL);
    frame_905d002371fbf8a07c64a45a5bf9169a = cache_frame_905d002371fbf8a07c64a45a5bf9169a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_905d002371fbf8a07c64a45a5bf9169a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_905d002371fbf8a07c64a45a5bf9169a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_float_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_1 = par_prop;
        tmp_float_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_float_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = TO_FLOAT(tmp_float_arg_1);
        Py_DECREF(tmp_float_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_905d002371fbf8a07c64a45a5bf9169a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_905d002371fbf8a07c64a45a5bf9169a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_905d002371fbf8a07c64a45a5bf9169a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_905d002371fbf8a07c64a45a5bf9169a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_905d002371fbf8a07c64a45a5bf9169a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_905d002371fbf8a07c64a45a5bf9169a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_905d002371fbf8a07c64a45a5bf9169a,
        type_description_1,
        par_self,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_905d002371fbf8a07c64a45a5bf9169a == cache_frame_905d002371fbf8a07c64a45a5bf9169a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_905d002371fbf8a07c64a45a5bf9169a);
        cache_frame_905d002371fbf8a07c64a45a5bf9169a = NULL;
    }

    assertFrameObject(frame_905d002371fbf8a07c64a45a5bf9169a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__14__bool(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    struct Nuitka_FrameObject *frame_e1acac80a81458d76ac0bf29bdecdf35;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e1acac80a81458d76ac0bf29bdecdf35 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e1acac80a81458d76ac0bf29bdecdf35)) {
        Py_XDECREF(cache_frame_e1acac80a81458d76ac0bf29bdecdf35);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e1acac80a81458d76ac0bf29bdecdf35 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e1acac80a81458d76ac0bf29bdecdf35 = MAKE_FUNCTION_FRAME(codeobj_e1acac80a81458d76ac0bf29bdecdf35, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e1acac80a81458d76ac0bf29bdecdf35->m_type_description == NULL);
    frame_e1acac80a81458d76ac0bf29bdecdf35 = cache_frame_e1acac80a81458d76ac0bf29bdecdf35;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e1acac80a81458d76ac0bf29bdecdf35);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e1acac80a81458d76ac0bf29bdecdf35) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_1 = par_prop;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[1];
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e1acac80a81458d76ac0bf29bdecdf35);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e1acac80a81458d76ac0bf29bdecdf35);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e1acac80a81458d76ac0bf29bdecdf35);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e1acac80a81458d76ac0bf29bdecdf35, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e1acac80a81458d76ac0bf29bdecdf35->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e1acac80a81458d76ac0bf29bdecdf35, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e1acac80a81458d76ac0bf29bdecdf35,
        type_description_1,
        par_self,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_e1acac80a81458d76ac0bf29bdecdf35 == cache_frame_e1acac80a81458d76ac0bf29bdecdf35) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e1acac80a81458d76ac0bf29bdecdf35);
        cache_frame_e1acac80a81458d76ac0bf29bdecdf35 = NULL;
    }

    assertFrameObject(frame_e1acac80a81458d76ac0bf29bdecdf35);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__15__stringlist(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    PyObject *outline_0_var_p = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_d43ae9c04c89d7e8b6b91adcec00b6f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_44a9a6121ae1386c16ced158d2ab4dc5_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_44a9a6121ae1386c16ced158d2ab4dc5_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_d43ae9c04c89d7e8b6b91adcec00b6f9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d43ae9c04c89d7e8b6b91adcec00b6f9)) {
        Py_XDECREF(cache_frame_d43ae9c04c89d7e8b6b91adcec00b6f9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d43ae9c04c89d7e8b6b91adcec00b6f9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d43ae9c04c89d7e8b6b91adcec00b6f9 = MAKE_FUNCTION_FRAME(codeobj_d43ae9c04c89d7e8b6b91adcec00b6f9, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d43ae9c04c89d7e8b6b91adcec00b6f9->m_type_description == NULL);
    frame_d43ae9c04c89d7e8b6b91adcec00b6f9 = cache_frame_d43ae9c04c89d7e8b6b91adcec00b6f9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d43ae9c04c89d7e8b6b91adcec00b6f9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d43ae9c04c89d7e8b6b91adcec00b6f9) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_prop);
        tmp_iter_arg_1 = par_prop;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        assert(tmp_listcomp_1__$0 == NULL);
        tmp_listcomp_1__$0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New(0);
        assert(tmp_listcomp_1__contraction == NULL);
        tmp_listcomp_1__contraction = tmp_assign_source_2;
    }
    if (isFrameUnusable(cache_frame_44a9a6121ae1386c16ced158d2ab4dc5_2)) {
        Py_XDECREF(cache_frame_44a9a6121ae1386c16ced158d2ab4dc5_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_44a9a6121ae1386c16ced158d2ab4dc5_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_44a9a6121ae1386c16ced158d2ab4dc5_2 = MAKE_FUNCTION_FRAME(codeobj_44a9a6121ae1386c16ced158d2ab4dc5, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_44a9a6121ae1386c16ced158d2ab4dc5_2->m_type_description == NULL);
    frame_44a9a6121ae1386c16ced158d2ab4dc5_2 = cache_frame_44a9a6121ae1386c16ced158d2ab4dc5_2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_44a9a6121ae1386c16ced158d2ab4dc5_2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_44a9a6121ae1386c16ced158d2ab4dc5_2) == 2); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        tmp_next_source_1 = tmp_listcomp_1__$0;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "oo";
                exception_lineno = 143;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_p;
            outline_0_var_p = tmp_assign_source_4;
            Py_INCREF(outline_0_var_p);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        if (par_self == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 143;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(outline_0_var_p);
        tmp_tuple_element_1 = outline_0_var_p;
        tmp_args_value_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = PyDict_Copy(mod_consts[32]);
        frame_44a9a6121ae1386c16ced158d2ab4dc5_2->m_frame.f_lineno = 143;
        tmp_append_value_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_append_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
        assert(PyList_Check(tmp_append_list_1));
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 143;
        type_description_2 = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    goto frame_return_exit_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_44a9a6121ae1386c16ced158d2ab4dc5_2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_44a9a6121ae1386c16ced158d2ab4dc5_2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_44a9a6121ae1386c16ced158d2ab4dc5_2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_44a9a6121ae1386c16ced158d2ab4dc5_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_44a9a6121ae1386c16ced158d2ab4dc5_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_44a9a6121ae1386c16ced158d2ab4dc5_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_44a9a6121ae1386c16ced158d2ab4dc5_2,
        type_description_2,
        outline_0_var_p,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_44a9a6121ae1386c16ced158d2ab4dc5_2 == cache_frame_44a9a6121ae1386c16ced158d2ab4dc5_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_44a9a6121ae1386c16ced158d2ab4dc5_2);
        cache_frame_44a9a6121ae1386c16ced158d2ab4dc5_2 = NULL;
    }

    assertFrameObject(frame_44a9a6121ae1386c16ced158d2ab4dc5_2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oo";
    goto try_except_handler_1;
    skip_nested_handling_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(outline_0_var_p);
    outline_0_var_p = NULL;
    goto outline_result_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(outline_0_var_p);
    outline_0_var_p = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_1:;
    exception_lineno = 143;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d43ae9c04c89d7e8b6b91adcec00b6f9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d43ae9c04c89d7e8b6b91adcec00b6f9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d43ae9c04c89d7e8b6b91adcec00b6f9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d43ae9c04c89d7e8b6b91adcec00b6f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d43ae9c04c89d7e8b6b91adcec00b6f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d43ae9c04c89d7e8b6b91adcec00b6f9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d43ae9c04c89d7e8b6b91adcec00b6f9,
        type_description_1,
        par_self,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_d43ae9c04c89d7e8b6b91adcec00b6f9 == cache_frame_d43ae9c04c89d7e8b6b91adcec00b6f9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d43ae9c04c89d7e8b6b91adcec00b6f9);
        cache_frame_d43ae9c04c89d7e8b6b91adcec00b6f9 = NULL;
    }

    assertFrameObject(frame_d43ae9c04c89d7e8b6b91adcec00b6f9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_2:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__16__string(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    PyObject *par_notr = python_pars[2];
    PyObject *var_text = NULL;
    PyObject *var_disambig = NULL;
    struct Nuitka_FrameObject *frame_84b3f13ba2f8b89143699e98b1fbaee1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_84b3f13ba2f8b89143699e98b1fbaee1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_84b3f13ba2f8b89143699e98b1fbaee1)) {
        Py_XDECREF(cache_frame_84b3f13ba2f8b89143699e98b1fbaee1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_84b3f13ba2f8b89143699e98b1fbaee1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_84b3f13ba2f8b89143699e98b1fbaee1 = MAKE_FUNCTION_FRAME(codeobj_84b3f13ba2f8b89143699e98b1fbaee1, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_84b3f13ba2f8b89143699e98b1fbaee1->m_type_description == NULL);
    frame_84b3f13ba2f8b89143699e98b1fbaee1 = cache_frame_84b3f13ba2f8b89143699e98b1fbaee1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_84b3f13ba2f8b89143699e98b1fbaee1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_84b3f13ba2f8b89143699e98b1fbaee1) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_1 = par_prop;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_text == NULL);
        var_text = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_text);
        tmp_cmp_expr_left_1 = var_text;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = mod_consts[8];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_2 = par_prop;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[33]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[34];
        CHECK_OBJECT(par_notr);
        tmp_args_element_value_2 = par_notr;
        frame_84b3f13ba2f8b89143699e98b1fbaee1->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[1];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    CHECK_OBJECT(var_text);
    tmp_return_value = var_text;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_3 = par_prop;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[33]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_84b3f13ba2f8b89143699e98b1fbaee1->m_frame.f_lineno = 154;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[35]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_disambig == NULL);
        var_disambig = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[36]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[37]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[38]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 156;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_text);
        tmp_args_element_value_4 = var_text;
        CHECK_OBJECT(var_disambig);
        tmp_args_element_value_5 = var_disambig;
        frame_84b3f13ba2f8b89143699e98b1fbaee1->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_84b3f13ba2f8b89143699e98b1fbaee1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_84b3f13ba2f8b89143699e98b1fbaee1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_84b3f13ba2f8b89143699e98b1fbaee1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_84b3f13ba2f8b89143699e98b1fbaee1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_84b3f13ba2f8b89143699e98b1fbaee1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_84b3f13ba2f8b89143699e98b1fbaee1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_84b3f13ba2f8b89143699e98b1fbaee1,
        type_description_1,
        par_self,
        par_prop,
        par_notr,
        var_text,
        var_disambig
    );


    // Release cached frame if used for exception.
    if (frame_84b3f13ba2f8b89143699e98b1fbaee1 == cache_frame_84b3f13ba2f8b89143699e98b1fbaee1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_84b3f13ba2f8b89143699e98b1fbaee1);
        cache_frame_84b3f13ba2f8b89143699e98b1fbaee1 = NULL;
    }

    assertFrameObject(frame_84b3f13ba2f8b89143699e98b1fbaee1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_text);
    Py_DECREF(var_text);
    var_text = NULL;
    Py_XDECREF(var_disambig);
    var_disambig = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_text);
    var_text = NULL;
    Py_XDECREF(var_disambig);
    var_disambig = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);
    CHECK_OBJECT(par_notr);
    Py_DECREF(par_notr);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);
    CHECK_OBJECT(par_notr);
    Py_DECREF(par_notr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__17__cstring(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    struct Nuitka_FrameObject *frame_5e787ce4efbe320f6e134188a30a79d7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5e787ce4efbe320f6e134188a30a79d7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5e787ce4efbe320f6e134188a30a79d7)) {
        Py_XDECREF(cache_frame_5e787ce4efbe320f6e134188a30a79d7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5e787ce4efbe320f6e134188a30a79d7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5e787ce4efbe320f6e134188a30a79d7 = MAKE_FUNCTION_FRAME(codeobj_5e787ce4efbe320f6e134188a30a79d7, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5e787ce4efbe320f6e134188a30a79d7->m_type_description == NULL);
    frame_5e787ce4efbe320f6e134188a30a79d7 = cache_frame_5e787ce4efbe320f6e134188a30a79d7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5e787ce4efbe320f6e134188a30a79d7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5e787ce4efbe320f6e134188a30a79d7) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_1 = par_prop;
        tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyObject_Unicode(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5e787ce4efbe320f6e134188a30a79d7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5e787ce4efbe320f6e134188a30a79d7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5e787ce4efbe320f6e134188a30a79d7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5e787ce4efbe320f6e134188a30a79d7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5e787ce4efbe320f6e134188a30a79d7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5e787ce4efbe320f6e134188a30a79d7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5e787ce4efbe320f6e134188a30a79d7,
        type_description_1,
        par_self,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_5e787ce4efbe320f6e134188a30a79d7 == cache_frame_5e787ce4efbe320f6e134188a30a79d7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5e787ce4efbe320f6e134188a30a79d7);
        cache_frame_5e787ce4efbe320f6e134188a30a79d7 = NULL;
    }

    assertFrameObject(frame_5e787ce4efbe320f6e134188a30a79d7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__18__color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    PyObject *var_args = NULL;
    PyObject *var_alpha = NULL;
    struct Nuitka_FrameObject *frame_f3cf78ccf5d100bfd524f9c979097b3d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f3cf78ccf5d100bfd524f9c979097b3d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f3cf78ccf5d100bfd524f9c979097b3d)) {
        Py_XDECREF(cache_frame_f3cf78ccf5d100bfd524f9c979097b3d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f3cf78ccf5d100bfd524f9c979097b3d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f3cf78ccf5d100bfd524f9c979097b3d = MAKE_FUNCTION_FRAME(codeobj_f3cf78ccf5d100bfd524f9c979097b3d, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f3cf78ccf5d100bfd524f9c979097b3d->m_type_description == NULL);
    frame_f3cf78ccf5d100bfd524f9c979097b3d = cache_frame_f3cf78ccf5d100bfd524f9c979097b3d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f3cf78ccf5d100bfd524f9c979097b3d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f3cf78ccf5d100bfd524f9c979097b3d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_args_element_value_1 = par_prop;
        frame_f3cf78ccf5d100bfd524f9c979097b3d->m_frame.f_lineno = 164;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_args == NULL);
        var_args = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_1 = par_prop;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_f3cf78ccf5d100bfd524f9c979097b3d->m_frame.f_lineno = 167;
        tmp_int_arg_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[40]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_alpha == NULL);
        var_alpha = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_alpha);
        tmp_cmp_expr_left_1 = var_alpha;
        tmp_cmp_expr_right_1 = mod_consts[41];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_args);
        tmp_called_instance_1 = var_args;
        CHECK_OBJECT(var_alpha);
        tmp_args_element_value_2 = var_alpha;
        frame_f3cf78ccf5d100bfd524f9c979097b3d->m_frame.f_lineno = 170;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[42], tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg2_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[43]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (var_args == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg2_1 = var_args;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f3cf78ccf5d100bfd524f9c979097b3d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f3cf78ccf5d100bfd524f9c979097b3d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f3cf78ccf5d100bfd524f9c979097b3d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f3cf78ccf5d100bfd524f9c979097b3d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f3cf78ccf5d100bfd524f9c979097b3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f3cf78ccf5d100bfd524f9c979097b3d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f3cf78ccf5d100bfd524f9c979097b3d,
        type_description_1,
        par_self,
        par_prop,
        var_args,
        var_alpha
    );


    // Release cached frame if used for exception.
    if (frame_f3cf78ccf5d100bfd524f9c979097b3d == cache_frame_f3cf78ccf5d100bfd524f9c979097b3d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f3cf78ccf5d100bfd524f9c979097b3d);
        cache_frame_f3cf78ccf5d100bfd524f9c979097b3d = NULL;
    }

    assertFrameObject(frame_f3cf78ccf5d100bfd524f9c979097b3d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_args);
    var_args = NULL;
    Py_XDECREF(var_alpha);
    var_alpha = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_args);
    var_args = NULL;
    Py_XDECREF(var_alpha);
    var_alpha = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__19__point(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    struct Nuitka_FrameObject *frame_f615656da651adcd7d0db75582416a1a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f615656da651adcd7d0db75582416a1a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f615656da651adcd7d0db75582416a1a)) {
        Py_XDECREF(cache_frame_f615656da651adcd7d0db75582416a1a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f615656da651adcd7d0db75582416a1a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f615656da651adcd7d0db75582416a1a = MAKE_FUNCTION_FRAME(codeobj_f615656da651adcd7d0db75582416a1a, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f615656da651adcd7d0db75582416a1a->m_type_description == NULL);
    frame_f615656da651adcd7d0db75582416a1a = cache_frame_f615656da651adcd7d0db75582416a1a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f615656da651adcd7d0db75582416a1a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f615656da651adcd7d0db75582416a1a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[45]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 175;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_args_element_value_1 = par_prop;
        frame_f615656da651adcd7d0db75582416a1a->m_frame.f_lineno = 175;
        tmp_dircall_arg2_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 175;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f615656da651adcd7d0db75582416a1a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f615656da651adcd7d0db75582416a1a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f615656da651adcd7d0db75582416a1a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f615656da651adcd7d0db75582416a1a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f615656da651adcd7d0db75582416a1a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f615656da651adcd7d0db75582416a1a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f615656da651adcd7d0db75582416a1a,
        type_description_1,
        par_self,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_f615656da651adcd7d0db75582416a1a == cache_frame_f615656da651adcd7d0db75582416a1a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f615656da651adcd7d0db75582416a1a);
        cache_frame_f615656da651adcd7d0db75582416a1a = NULL;
    }

    assertFrameObject(frame_f615656da651adcd7d0db75582416a1a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__20__pointf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    struct Nuitka_FrameObject *frame_139f933b149090a76fa8111ee1e17f2c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_139f933b149090a76fa8111ee1e17f2c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_139f933b149090a76fa8111ee1e17f2c)) {
        Py_XDECREF(cache_frame_139f933b149090a76fa8111ee1e17f2c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_139f933b149090a76fa8111ee1e17f2c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_139f933b149090a76fa8111ee1e17f2c = MAKE_FUNCTION_FRAME(codeobj_139f933b149090a76fa8111ee1e17f2c, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_139f933b149090a76fa8111ee1e17f2c->m_type_description == NULL);
    frame_139f933b149090a76fa8111ee1e17f2c = cache_frame_139f933b149090a76fa8111ee1e17f2c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_139f933b149090a76fa8111ee1e17f2c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_139f933b149090a76fa8111ee1e17f2c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 178;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_args_element_value_1 = par_prop;
        frame_139f933b149090a76fa8111ee1e17f2c->m_frame.f_lineno = 178;
        tmp_dircall_arg2_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 178;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_139f933b149090a76fa8111ee1e17f2c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_139f933b149090a76fa8111ee1e17f2c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_139f933b149090a76fa8111ee1e17f2c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_139f933b149090a76fa8111ee1e17f2c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_139f933b149090a76fa8111ee1e17f2c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_139f933b149090a76fa8111ee1e17f2c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_139f933b149090a76fa8111ee1e17f2c,
        type_description_1,
        par_self,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_139f933b149090a76fa8111ee1e17f2c == cache_frame_139f933b149090a76fa8111ee1e17f2c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_139f933b149090a76fa8111ee1e17f2c);
        cache_frame_139f933b149090a76fa8111ee1e17f2c = NULL;
    }

    assertFrameObject(frame_139f933b149090a76fa8111ee1e17f2c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__21__rect(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    struct Nuitka_FrameObject *frame_6e714898b0f8ec2302e9620e3e63a028;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6e714898b0f8ec2302e9620e3e63a028 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6e714898b0f8ec2302e9620e3e63a028)) {
        Py_XDECREF(cache_frame_6e714898b0f8ec2302e9620e3e63a028);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e714898b0f8ec2302e9620e3e63a028 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e714898b0f8ec2302e9620e3e63a028 = MAKE_FUNCTION_FRAME(codeobj_6e714898b0f8ec2302e9620e3e63a028, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6e714898b0f8ec2302e9620e3e63a028->m_type_description == NULL);
    frame_6e714898b0f8ec2302e9620e3e63a028 = cache_frame_6e714898b0f8ec2302e9620e3e63a028;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6e714898b0f8ec2302e9620e3e63a028);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6e714898b0f8ec2302e9620e3e63a028) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[48]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_args_element_value_1 = par_prop;
        frame_6e714898b0f8ec2302e9620e3e63a028->m_frame.f_lineno = 181;
        tmp_dircall_arg2_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6e714898b0f8ec2302e9620e3e63a028);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6e714898b0f8ec2302e9620e3e63a028);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6e714898b0f8ec2302e9620e3e63a028);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6e714898b0f8ec2302e9620e3e63a028, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e714898b0f8ec2302e9620e3e63a028->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e714898b0f8ec2302e9620e3e63a028, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e714898b0f8ec2302e9620e3e63a028,
        type_description_1,
        par_self,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_6e714898b0f8ec2302e9620e3e63a028 == cache_frame_6e714898b0f8ec2302e9620e3e63a028) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6e714898b0f8ec2302e9620e3e63a028);
        cache_frame_6e714898b0f8ec2302e9620e3e63a028 = NULL;
    }

    assertFrameObject(frame_6e714898b0f8ec2302e9620e3e63a028);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__22__rectf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    struct Nuitka_FrameObject *frame_b5d39ce8c592ae74ace6102193d9e8a3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b5d39ce8c592ae74ace6102193d9e8a3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b5d39ce8c592ae74ace6102193d9e8a3)) {
        Py_XDECREF(cache_frame_b5d39ce8c592ae74ace6102193d9e8a3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b5d39ce8c592ae74ace6102193d9e8a3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b5d39ce8c592ae74ace6102193d9e8a3 = MAKE_FUNCTION_FRAME(codeobj_b5d39ce8c592ae74ace6102193d9e8a3, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b5d39ce8c592ae74ace6102193d9e8a3->m_type_description == NULL);
    frame_b5d39ce8c592ae74ace6102193d9e8a3 = cache_frame_b5d39ce8c592ae74ace6102193d9e8a3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b5d39ce8c592ae74ace6102193d9e8a3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b5d39ce8c592ae74ace6102193d9e8a3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[49]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_args_element_value_1 = par_prop;
        frame_b5d39ce8c592ae74ace6102193d9e8a3->m_frame.f_lineno = 184;
        tmp_dircall_arg2_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b5d39ce8c592ae74ace6102193d9e8a3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b5d39ce8c592ae74ace6102193d9e8a3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b5d39ce8c592ae74ace6102193d9e8a3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b5d39ce8c592ae74ace6102193d9e8a3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b5d39ce8c592ae74ace6102193d9e8a3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b5d39ce8c592ae74ace6102193d9e8a3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b5d39ce8c592ae74ace6102193d9e8a3,
        type_description_1,
        par_self,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_b5d39ce8c592ae74ace6102193d9e8a3 == cache_frame_b5d39ce8c592ae74ace6102193d9e8a3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b5d39ce8c592ae74ace6102193d9e8a3);
        cache_frame_b5d39ce8c592ae74ace6102193d9e8a3 = NULL;
    }

    assertFrameObject(frame_b5d39ce8c592ae74ace6102193d9e8a3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__23__size(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    struct Nuitka_FrameObject *frame_a86f27bc20e282b659dd54db51d5279a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a86f27bc20e282b659dd54db51d5279a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a86f27bc20e282b659dd54db51d5279a)) {
        Py_XDECREF(cache_frame_a86f27bc20e282b659dd54db51d5279a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a86f27bc20e282b659dd54db51d5279a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a86f27bc20e282b659dd54db51d5279a = MAKE_FUNCTION_FRAME(codeobj_a86f27bc20e282b659dd54db51d5279a, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a86f27bc20e282b659dd54db51d5279a->m_type_description == NULL);
    frame_a86f27bc20e282b659dd54db51d5279a = cache_frame_a86f27bc20e282b659dd54db51d5279a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a86f27bc20e282b659dd54db51d5279a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a86f27bc20e282b659dd54db51d5279a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[50]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 187;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_args_element_value_1 = par_prop;
        frame_a86f27bc20e282b659dd54db51d5279a->m_frame.f_lineno = 187;
        tmp_dircall_arg2_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 187;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a86f27bc20e282b659dd54db51d5279a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a86f27bc20e282b659dd54db51d5279a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a86f27bc20e282b659dd54db51d5279a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a86f27bc20e282b659dd54db51d5279a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a86f27bc20e282b659dd54db51d5279a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a86f27bc20e282b659dd54db51d5279a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a86f27bc20e282b659dd54db51d5279a,
        type_description_1,
        par_self,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_a86f27bc20e282b659dd54db51d5279a == cache_frame_a86f27bc20e282b659dd54db51d5279a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a86f27bc20e282b659dd54db51d5279a);
        cache_frame_a86f27bc20e282b659dd54db51d5279a = NULL;
    }

    assertFrameObject(frame_a86f27bc20e282b659dd54db51d5279a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__24__sizef(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    struct Nuitka_FrameObject *frame_890daef3892da59cddeac017f0c7f6b9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_890daef3892da59cddeac017f0c7f6b9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_890daef3892da59cddeac017f0c7f6b9)) {
        Py_XDECREF(cache_frame_890daef3892da59cddeac017f0c7f6b9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_890daef3892da59cddeac017f0c7f6b9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_890daef3892da59cddeac017f0c7f6b9 = MAKE_FUNCTION_FRAME(codeobj_890daef3892da59cddeac017f0c7f6b9, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_890daef3892da59cddeac017f0c7f6b9->m_type_description == NULL);
    frame_890daef3892da59cddeac017f0c7f6b9 = cache_frame_890daef3892da59cddeac017f0c7f6b9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_890daef3892da59cddeac017f0c7f6b9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_890daef3892da59cddeac017f0c7f6b9) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[51]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 190;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_args_element_value_1 = par_prop;
        frame_890daef3892da59cddeac017f0c7f6b9->m_frame.f_lineno = 190;
        tmp_dircall_arg2_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 190;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_890daef3892da59cddeac017f0c7f6b9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_890daef3892da59cddeac017f0c7f6b9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_890daef3892da59cddeac017f0c7f6b9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_890daef3892da59cddeac017f0c7f6b9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_890daef3892da59cddeac017f0c7f6b9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_890daef3892da59cddeac017f0c7f6b9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_890daef3892da59cddeac017f0c7f6b9,
        type_description_1,
        par_self,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_890daef3892da59cddeac017f0c7f6b9 == cache_frame_890daef3892da59cddeac017f0c7f6b9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_890daef3892da59cddeac017f0c7f6b9);
        cache_frame_890daef3892da59cddeac017f0c7f6b9 = NULL;
    }

    assertFrameObject(frame_890daef3892da59cddeac017f0c7f6b9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__25__pixmap(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    PyObject *var_fname = NULL;
    struct Nuitka_FrameObject *frame_038fe9bd98b84c2651a5f5c338fbf42c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_038fe9bd98b84c2651a5f5c338fbf42c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_038fe9bd98b84c2651a5f5c338fbf42c)) {
        Py_XDECREF(cache_frame_038fe9bd98b84c2651a5f5c338fbf42c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_038fe9bd98b84c2651a5f5c338fbf42c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_038fe9bd98b84c2651a5f5c338fbf42c = MAKE_FUNCTION_FRAME(codeobj_038fe9bd98b84c2651a5f5c338fbf42c, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_038fe9bd98b84c2651a5f5c338fbf42c->m_type_description == NULL);
    frame_038fe9bd98b84c2651a5f5c338fbf42c = cache_frame_038fe9bd98b84c2651a5f5c338fbf42c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_038fe9bd98b84c2651a5f5c338fbf42c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_038fe9bd98b84c2651a5f5c338fbf42c) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_1 = par_prop;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 193;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_3 = par_prop;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[0]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[52]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_038fe9bd98b84c2651a5f5c338fbf42c->m_frame.f_lineno = 194;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[53]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_fname == NULL);
        var_fname = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_4;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[9]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[8];
        tmp_and_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 195;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        assert(tmp_and_left_value_1 != NUITKA_BOOL_UNASSIGNED);
        CHECK_OBJECT(var_fname);
        tmp_expression_value_5 = var_fname;
        tmp_subscript_value_1 = mod_consts[28];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_1, 0);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[54];
        tmp_and_left_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_2);

            exception_lineno = 195;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        assert(tmp_and_left_value_2 != NUITKA_BOOL_UNASSIGNED);
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[56]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_fname);
        tmp_args_element_value_1 = var_fname;
        frame_038fe9bd98b84c2651a5f5c338fbf42c->m_frame.f_lineno = 195;
        tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[57], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[56]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[58]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[9]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 196;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (var_fname == NULL) {
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 196;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = var_fname;
        frame_038fe9bd98b84c2651a5f5c338fbf42c->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_fname;
            var_fname = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[60]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (var_fname == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 198;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = var_fname;
        frame_038fe9bd98b84c2651a5f5c338fbf42c->m_frame.f_lineno = 198;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_038fe9bd98b84c2651a5f5c338fbf42c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_038fe9bd98b84c2651a5f5c338fbf42c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_038fe9bd98b84c2651a5f5c338fbf42c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_038fe9bd98b84c2651a5f5c338fbf42c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_038fe9bd98b84c2651a5f5c338fbf42c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_038fe9bd98b84c2651a5f5c338fbf42c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_038fe9bd98b84c2651a5f5c338fbf42c,
        type_description_1,
        par_self,
        par_prop,
        var_fname
    );


    // Release cached frame if used for exception.
    if (frame_038fe9bd98b84c2651a5f5c338fbf42c == cache_frame_038fe9bd98b84c2651a5f5c338fbf42c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_038fe9bd98b84c2651a5f5c338fbf42c);
        cache_frame_038fe9bd98b84c2651a5f5c338fbf42c = NULL;
    }

    assertFrameObject(frame_038fe9bd98b84c2651a5f5c338fbf42c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_fname);
    var_fname = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_fname);
    var_fname = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__26__iconset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    struct Nuitka_FrameObject *frame_6ff57f15d437397b044ae1e85ce8a1a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6ff57f15d437397b044ae1e85ce8a1a6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6ff57f15d437397b044ae1e85ce8a1a6)) {
        Py_XDECREF(cache_frame_6ff57f15d437397b044ae1e85ce8a1a6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6ff57f15d437397b044ae1e85ce8a1a6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6ff57f15d437397b044ae1e85ce8a1a6 = MAKE_FUNCTION_FRAME(codeobj_6ff57f15d437397b044ae1e85ce8a1a6, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6ff57f15d437397b044ae1e85ce8a1a6->m_type_description == NULL);
    frame_6ff57f15d437397b044ae1e85ce8a1a6 = cache_frame_6ff57f15d437397b044ae1e85ce8a1a6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6ff57f15d437397b044ae1e85ce8a1a6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6ff57f15d437397b044ae1e85ce8a1a6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_args_element_value_1 = par_prop;
        frame_6ff57f15d437397b044ae1e85ce8a1a6->m_frame.f_lineno = 204;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[61], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6ff57f15d437397b044ae1e85ce8a1a6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6ff57f15d437397b044ae1e85ce8a1a6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6ff57f15d437397b044ae1e85ce8a1a6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6ff57f15d437397b044ae1e85ce8a1a6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6ff57f15d437397b044ae1e85ce8a1a6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6ff57f15d437397b044ae1e85ce8a1a6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6ff57f15d437397b044ae1e85ce8a1a6,
        type_description_1,
        par_self,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_6ff57f15d437397b044ae1e85ce8a1a6 == cache_frame_6ff57f15d437397b044ae1e85ce8a1a6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6ff57f15d437397b044ae1e85ce8a1a6);
        cache_frame_6ff57f15d437397b044ae1e85ce8a1a6 = NULL;
    }

    assertFrameObject(frame_6ff57f15d437397b044ae1e85ce8a1a6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__27__url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    struct Nuitka_FrameObject *frame_e6f744dafdefa8e49c79e5d952c53d8d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e6f744dafdefa8e49c79e5d952c53d8d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e6f744dafdefa8e49c79e5d952c53d8d)) {
        Py_XDECREF(cache_frame_e6f744dafdefa8e49c79e5d952c53d8d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e6f744dafdefa8e49c79e5d952c53d8d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e6f744dafdefa8e49c79e5d952c53d8d = MAKE_FUNCTION_FRAME(codeobj_e6f744dafdefa8e49c79e5d952c53d8d, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e6f744dafdefa8e49c79e5d952c53d8d->m_type_description == NULL);
    frame_e6f744dafdefa8e49c79e5d952c53d8d = cache_frame_e6f744dafdefa8e49c79e5d952c53d8d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e6f744dafdefa8e49c79e5d952c53d8d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e6f744dafdefa8e49c79e5d952c53d8d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[62]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_expression_value_3 = par_prop;
        tmp_subscript_value_1 = mod_consts[28];
        tmp_expression_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e6f744dafdefa8e49c79e5d952c53d8d->m_frame.f_lineno = 207;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e6f744dafdefa8e49c79e5d952c53d8d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e6f744dafdefa8e49c79e5d952c53d8d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e6f744dafdefa8e49c79e5d952c53d8d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e6f744dafdefa8e49c79e5d952c53d8d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e6f744dafdefa8e49c79e5d952c53d8d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e6f744dafdefa8e49c79e5d952c53d8d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e6f744dafdefa8e49c79e5d952c53d8d,
        type_description_1,
        par_self,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_e6f744dafdefa8e49c79e5d952c53d8d == cache_frame_e6f744dafdefa8e49c79e5d952c53d8d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e6f744dafdefa8e49c79e5d952c53d8d);
        cache_frame_e6f744dafdefa8e49c79e5d952c53d8d = NULL;
    }

    assertFrameObject(frame_e6f744dafdefa8e49c79e5d952c53d8d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__28__locale(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    PyObject *var_lang = NULL;
    PyObject *var_country = NULL;
    struct Nuitka_FrameObject *frame_5d37814c3c1fab85f80c8db481db9902;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5d37814c3c1fab85f80c8db481db9902 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5d37814c3c1fab85f80c8db481db9902)) {
        Py_XDECREF(cache_frame_5d37814c3c1fab85f80c8db481db9902);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5d37814c3c1fab85f80c8db481db9902 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5d37814c3c1fab85f80c8db481db9902 = MAKE_FUNCTION_FRAME(codeobj_5d37814c3c1fab85f80c8db481db9902, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5d37814c3c1fab85f80c8db481db9902->m_type_description == NULL);
    frame_5d37814c3c1fab85f80c8db481db9902 = cache_frame_5d37814c3c1fab85f80c8db481db9902;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5d37814c3c1fab85f80c8db481db9902);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5d37814c3c1fab85f80c8db481db9902) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_expression_value_3 = par_prop;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[64]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_getattr_target_1);

            exception_lineno = 210;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[65];
        tmp_getattr_attr_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_getattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_getattr_target_1);

            exception_lineno = 210;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_target_1);
        Py_DECREF(tmp_getattr_attr_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_lang == NULL);
        var_lang = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_getattr_target_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[63]);
        if (tmp_getattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_expression_value_6 = par_prop;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[64]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_getattr_target_2);

            exception_lineno = 211;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[66];
        tmp_getattr_attr_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_getattr_attr_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_getattr_target_2);

            exception_lineno = 211;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, NULL);
        Py_DECREF(tmp_getattr_target_2);
        Py_DECREF(tmp_getattr_attr_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_country == NULL);
        var_country = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lang);
        tmp_args_element_value_1 = var_lang;
        CHECK_OBJECT(var_country);
        tmp_args_element_value_2 = var_country;
        frame_5d37814c3c1fab85f80c8db481db9902->m_frame.f_lineno = 212;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[63],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5d37814c3c1fab85f80c8db481db9902);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5d37814c3c1fab85f80c8db481db9902);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5d37814c3c1fab85f80c8db481db9902);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5d37814c3c1fab85f80c8db481db9902, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5d37814c3c1fab85f80c8db481db9902->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5d37814c3c1fab85f80c8db481db9902, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5d37814c3c1fab85f80c8db481db9902,
        type_description_1,
        par_self,
        par_prop,
        var_lang,
        var_country
    );


    // Release cached frame if used for exception.
    if (frame_5d37814c3c1fab85f80c8db481db9902 == cache_frame_5d37814c3c1fab85f80c8db481db9902) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5d37814c3c1fab85f80c8db481db9902);
        cache_frame_5d37814c3c1fab85f80c8db481db9902 = NULL;
    }

    assertFrameObject(frame_5d37814c3c1fab85f80c8db481db9902);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_lang);
    Py_DECREF(var_lang);
    var_lang = NULL;
    CHECK_OBJECT(var_country);
    Py_DECREF(var_country);
    var_country = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_lang);
    var_lang = NULL;
    Py_XDECREF(var_country);
    var_country = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__29__date(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    struct Nuitka_FrameObject *frame_8694ea8d00ef88f8a7ea32f74348af31;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8694ea8d00ef88f8a7ea32f74348af31 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8694ea8d00ef88f8a7ea32f74348af31)) {
        Py_XDECREF(cache_frame_8694ea8d00ef88f8a7ea32f74348af31);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8694ea8d00ef88f8a7ea32f74348af31 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8694ea8d00ef88f8a7ea32f74348af31 = MAKE_FUNCTION_FRAME(codeobj_8694ea8d00ef88f8a7ea32f74348af31, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8694ea8d00ef88f8a7ea32f74348af31->m_type_description == NULL);
    frame_8694ea8d00ef88f8a7ea32f74348af31 = cache_frame_8694ea8d00ef88f8a7ea32f74348af31;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8694ea8d00ef88f8a7ea32f74348af31);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8694ea8d00ef88f8a7ea32f74348af31) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[67]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_args_element_value_1 = par_prop;
        frame_8694ea8d00ef88f8a7ea32f74348af31->m_frame.f_lineno = 215;
        tmp_dircall_arg2_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8694ea8d00ef88f8a7ea32f74348af31);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8694ea8d00ef88f8a7ea32f74348af31);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8694ea8d00ef88f8a7ea32f74348af31);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8694ea8d00ef88f8a7ea32f74348af31, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8694ea8d00ef88f8a7ea32f74348af31->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8694ea8d00ef88f8a7ea32f74348af31, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8694ea8d00ef88f8a7ea32f74348af31,
        type_description_1,
        par_self,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_8694ea8d00ef88f8a7ea32f74348af31 == cache_frame_8694ea8d00ef88f8a7ea32f74348af31) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8694ea8d00ef88f8a7ea32f74348af31);
        cache_frame_8694ea8d00ef88f8a7ea32f74348af31 = NULL;
    }

    assertFrameObject(frame_8694ea8d00ef88f8a7ea32f74348af31);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__30__datetime(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    PyObject *var_args = NULL;
    struct Nuitka_FrameObject *frame_d0b67fafc5f57770ef95e016a23c9060;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d0b67fafc5f57770ef95e016a23c9060 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d0b67fafc5f57770ef95e016a23c9060)) {
        Py_XDECREF(cache_frame_d0b67fafc5f57770ef95e016a23c9060);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d0b67fafc5f57770ef95e016a23c9060 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d0b67fafc5f57770ef95e016a23c9060 = MAKE_FUNCTION_FRAME(codeobj_d0b67fafc5f57770ef95e016a23c9060, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d0b67fafc5f57770ef95e016a23c9060->m_type_description == NULL);
    frame_d0b67fafc5f57770ef95e016a23c9060 = cache_frame_d0b67fafc5f57770ef95e016a23c9060;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d0b67fafc5f57770ef95e016a23c9060);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d0b67fafc5f57770ef95e016a23c9060) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_args_element_value_1 = par_prop;
        frame_d0b67fafc5f57770ef95e016a23c9060->m_frame.f_lineno = 218;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_args == NULL);
        var_args = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[68]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[67]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_args);
        tmp_expression_value_3 = var_args;
        tmp_subscript_value_1 = mod_consts[69];
        tmp_dircall_arg2_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_args_element_value_2 = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[70]);
        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_args);
        tmp_expression_value_5 = var_args;
        tmp_subscript_value_2 = mod_consts[71];
        tmp_dircall_arg2_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
        if (tmp_dircall_arg2_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_dircall_arg1_2);

            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_args_element_value_3 = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_d0b67fafc5f57770ef95e016a23c9060->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d0b67fafc5f57770ef95e016a23c9060);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d0b67fafc5f57770ef95e016a23c9060);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d0b67fafc5f57770ef95e016a23c9060);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d0b67fafc5f57770ef95e016a23c9060, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d0b67fafc5f57770ef95e016a23c9060->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d0b67fafc5f57770ef95e016a23c9060, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d0b67fafc5f57770ef95e016a23c9060,
        type_description_1,
        par_self,
        par_prop,
        var_args
    );


    // Release cached frame if used for exception.
    if (frame_d0b67fafc5f57770ef95e016a23c9060 == cache_frame_d0b67fafc5f57770ef95e016a23c9060) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d0b67fafc5f57770ef95e016a23c9060);
        cache_frame_d0b67fafc5f57770ef95e016a23c9060 = NULL;
    }

    assertFrameObject(frame_d0b67fafc5f57770ef95e016a23c9060);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_args);
    Py_DECREF(var_args);
    var_args = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_args);
    var_args = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__31__time(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    struct Nuitka_FrameObject *frame_f6f63bda9f2baf4bd814ee0ee28a0423;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f6f63bda9f2baf4bd814ee0ee28a0423 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f6f63bda9f2baf4bd814ee0ee28a0423)) {
        Py_XDECREF(cache_frame_f6f63bda9f2baf4bd814ee0ee28a0423);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f6f63bda9f2baf4bd814ee0ee28a0423 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f6f63bda9f2baf4bd814ee0ee28a0423 = MAKE_FUNCTION_FRAME(codeobj_f6f63bda9f2baf4bd814ee0ee28a0423, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f6f63bda9f2baf4bd814ee0ee28a0423->m_type_description == NULL);
    frame_f6f63bda9f2baf4bd814ee0ee28a0423 = cache_frame_f6f63bda9f2baf4bd814ee0ee28a0423;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f6f63bda9f2baf4bd814ee0ee28a0423);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f6f63bda9f2baf4bd814ee0ee28a0423) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[70]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_args_element_value_1 = par_prop;
        frame_f6f63bda9f2baf4bd814ee0ee28a0423->m_frame.f_lineno = 222;
        tmp_dircall_arg2_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f6f63bda9f2baf4bd814ee0ee28a0423);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f6f63bda9f2baf4bd814ee0ee28a0423);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f6f63bda9f2baf4bd814ee0ee28a0423);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f6f63bda9f2baf4bd814ee0ee28a0423, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f6f63bda9f2baf4bd814ee0ee28a0423->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f6f63bda9f2baf4bd814ee0ee28a0423, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f6f63bda9f2baf4bd814ee0ee28a0423,
        type_description_1,
        par_self,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_f6f63bda9f2baf4bd814ee0ee28a0423 == cache_frame_f6f63bda9f2baf4bd814ee0ee28a0423) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f6f63bda9f2baf4bd814ee0ee28a0423);
        cache_frame_f6f63bda9f2baf4bd814ee0ee28a0423 = NULL;
    }

    assertFrameObject(frame_f6f63bda9f2baf4bd814ee0ee28a0423);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__32__gradient(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    PyObject *var_gtype = NULL;
    PyObject *var_startx = NULL;
    PyObject *var_starty = NULL;
    PyObject *var_endx = NULL;
    PyObject *var_endy = NULL;
    PyObject *var_gradient = NULL;
    PyObject *var_centralx = NULL;
    PyObject *var_centraly = NULL;
    PyObject *var_angle = NULL;
    PyObject *var_radius = NULL;
    PyObject *var_focalx = NULL;
    PyObject *var_focaly = NULL;
    PyObject *var_spread = NULL;
    PyObject *var_cmode = NULL;
    PyObject *var_gstop = NULL;
    PyObject *var_position = NULL;
    PyObject *var_color = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_bbcab014a6f6c92e10e933e5fb0a975a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bbcab014a6f6c92e10e933e5fb0a975a = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bbcab014a6f6c92e10e933e5fb0a975a)) {
        Py_XDECREF(cache_frame_bbcab014a6f6c92e10e933e5fb0a975a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bbcab014a6f6c92e10e933e5fb0a975a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bbcab014a6f6c92e10e933e5fb0a975a = MAKE_FUNCTION_FRAME(codeobj_bbcab014a6f6c92e10e933e5fb0a975a, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bbcab014a6f6c92e10e933e5fb0a975a->m_type_description == NULL);
    frame_bbcab014a6f6c92e10e933e5fb0a975a = cache_frame_bbcab014a6f6c92e10e933e5fb0a975a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bbcab014a6f6c92e10e933e5fb0a975a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bbcab014a6f6c92e10e933e5fb0a975a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_1 = par_prop;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 228;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[72]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_gtype == NULL);
        var_gtype = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_gtype);
        tmp_cmp_expr_left_1 = var_gtype;
        tmp_cmp_expr_right_1 = mod_consts[73];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_2 = par_prop;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[33]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 231;
        tmp_float_arg_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[74]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_float_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = TO_FLOAT(tmp_float_arg_1);
        Py_DECREF(tmp_float_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_startx == NULL);
        var_startx = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_float_arg_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_3 = par_prop;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[33]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 232;
        tmp_float_arg_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[75]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_float_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = TO_FLOAT(tmp_float_arg_2);
        Py_DECREF(tmp_float_arg_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_starty == NULL);
        var_starty = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_float_arg_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_4 = par_prop;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[33]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 233;
        tmp_float_arg_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[76]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_float_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = TO_FLOAT(tmp_float_arg_3);
        Py_DECREF(tmp_float_arg_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_endx == NULL);
        var_endx = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_float_arg_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_5 = par_prop;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[33]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 234;
        tmp_float_arg_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[77]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_float_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = TO_FLOAT(tmp_float_arg_4);
        Py_DECREF(tmp_float_arg_4);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_endy == NULL);
        var_endy = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[5]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[78]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[79];
        tmp_args_value_1 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_2;
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[80];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_startx);
            tmp_tuple_element_2 = var_startx;
            tmp_tuple_element_1 = PyTuple_New(4);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_starty);
            tmp_tuple_element_2 = var_starty;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
            CHECK_OBJECT(var_endx);
            tmp_tuple_element_2 = var_endx;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 2, tmp_tuple_element_2);
            CHECK_OBJECT(var_endy);
            tmp_tuple_element_2 = var_endy;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 3, tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_args_value_1, 2, tmp_tuple_element_1);
        }
        tmp_kwargs_value_1 = PyDict_Copy(mod_consts[81]);
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 235;
        tmp_assign_source_6 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_gradient == NULL);
        var_gradient = tmp_assign_source_6;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_gtype);
        tmp_cmp_expr_left_2 = var_gtype;
        tmp_cmp_expr_right_2 = mod_consts[82];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_float_arg_5;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_8 = par_prop;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[33]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 239;
        tmp_float_arg_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[83]);

        Py_DECREF(tmp_called_value_7);
        if (tmp_float_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = TO_FLOAT(tmp_float_arg_5);
        Py_DECREF(tmp_float_arg_5);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_centralx == NULL);
        var_centralx = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_float_arg_6;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_9 = par_prop;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[33]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 240;
        tmp_float_arg_6 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[84]);

        Py_DECREF(tmp_called_value_8);
        if (tmp_float_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = TO_FLOAT(tmp_float_arg_6);
        Py_DECREF(tmp_float_arg_6);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_centraly == NULL);
        var_centraly = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_float_arg_7;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_10 = par_prop;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[33]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 241;
        tmp_float_arg_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[85]);

        Py_DECREF(tmp_called_value_9);
        if (tmp_float_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = TO_FLOAT(tmp_float_arg_7);
        Py_DECREF(tmp_float_arg_7);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_angle == NULL);
        var_angle = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[5]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[78]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = mod_consts[86];
        tmp_args_value_2 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_4;
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[80];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            CHECK_OBJECT(var_centralx);
            tmp_tuple_element_4 = var_centralx;
            tmp_tuple_element_3 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_tuple_element_3, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_centraly);
            tmp_tuple_element_4 = var_centraly;
            PyTuple_SET_ITEM0(tmp_tuple_element_3, 1, tmp_tuple_element_4);
            CHECK_OBJECT(var_angle);
            tmp_tuple_element_4 = var_angle;
            PyTuple_SET_ITEM0(tmp_tuple_element_3, 2, tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_value_2, 2, tmp_tuple_element_3);
        }
        tmp_kwargs_value_2 = PyDict_Copy(mod_consts[81]);
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 242;
        tmp_assign_source_10 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_gradient == NULL);
        var_gradient = tmp_assign_source_10;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_gtype);
        tmp_cmp_expr_left_3 = var_gtype;
        tmp_cmp_expr_right_3 = mod_consts[87];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        assert(tmp_condition_result_3 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_float_arg_8;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_13 = par_prop;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[33]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 246;
        tmp_float_arg_8 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_11, mod_consts[83]);

        Py_DECREF(tmp_called_value_11);
        if (tmp_float_arg_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = TO_FLOAT(tmp_float_arg_8);
        Py_DECREF(tmp_float_arg_8);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_centralx == NULL);
        var_centralx = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_float_arg_9;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_14 = par_prop;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[33]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 247;
        tmp_float_arg_9 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_12, mod_consts[84]);

        Py_DECREF(tmp_called_value_12);
        if (tmp_float_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = TO_FLOAT(tmp_float_arg_9);
        Py_DECREF(tmp_float_arg_9);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_centraly == NULL);
        var_centraly = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_float_arg_10;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_15 = par_prop;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[33]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 248;
        tmp_float_arg_10 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_13, mod_consts[88]);

        Py_DECREF(tmp_called_value_13);
        if (tmp_float_arg_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = TO_FLOAT(tmp_float_arg_10);
        Py_DECREF(tmp_float_arg_10);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_radius == NULL);
        var_radius = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_float_arg_11;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_16 = par_prop;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[33]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 249;
        tmp_float_arg_11 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_14, mod_consts[89]);

        Py_DECREF(tmp_called_value_14);
        if (tmp_float_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = TO_FLOAT(tmp_float_arg_11);
        Py_DECREF(tmp_float_arg_11);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_focalx == NULL);
        var_focalx = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_float_arg_12;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_17 = par_prop;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[33]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 250;
        tmp_float_arg_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_15, mod_consts[90]);

        Py_DECREF(tmp_called_value_15);
        if (tmp_float_arg_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = TO_FLOAT(tmp_float_arg_12);
        Py_DECREF(tmp_float_arg_12);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_focaly == NULL);
        var_focaly = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_19 = par_self;
        tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[5]);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[78]);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = mod_consts[91];
        tmp_args_value_3 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_6;
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[80];
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
            CHECK_OBJECT(var_centralx);
            tmp_tuple_element_6 = var_centralx;
            tmp_tuple_element_5 = PyTuple_New(5);
            PyTuple_SET_ITEM0(tmp_tuple_element_5, 0, tmp_tuple_element_6);
            CHECK_OBJECT(var_centraly);
            tmp_tuple_element_6 = var_centraly;
            PyTuple_SET_ITEM0(tmp_tuple_element_5, 1, tmp_tuple_element_6);
            CHECK_OBJECT(var_radius);
            tmp_tuple_element_6 = var_radius;
            PyTuple_SET_ITEM0(tmp_tuple_element_5, 2, tmp_tuple_element_6);
            CHECK_OBJECT(var_focalx);
            tmp_tuple_element_6 = var_focalx;
            PyTuple_SET_ITEM0(tmp_tuple_element_5, 3, tmp_tuple_element_6);
            CHECK_OBJECT(var_focaly);
            tmp_tuple_element_6 = var_focaly;
            PyTuple_SET_ITEM0(tmp_tuple_element_5, 4, tmp_tuple_element_6);
            PyTuple_SET_ITEM(tmp_args_value_3, 2, tmp_tuple_element_5);
        }
        tmp_kwargs_value_3 = PyDict_Copy(mod_consts[81]);
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 251;
        tmp_assign_source_16 = CALL_FUNCTION(tmp_called_value_16, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_gradient == NULL);
        var_gradient = tmp_assign_source_16;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_20;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_expression_value_20 = par_prop;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[93]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 256;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 256;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooNooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_21 = par_prop;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[33]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 259;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_18, mod_consts[94]);

        Py_DECREF(tmp_called_value_18);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_spread == NULL);
        var_spread = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_spread);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_spread);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_getattr_attr_1;
        if (var_gradient == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 261;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_22 = var_gradient;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[95]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 261;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[96]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 261;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_spread);
        tmp_getattr_attr_1 = var_spread;
        tmp_args_element_value_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 261;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 261;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_24 = par_prop;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[33]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 263;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_20, mod_consts[97]);

        Py_DECREF(tmp_called_value_20);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cmode == NULL);
        var_cmode = tmp_assign_source_18;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_cmode);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_cmode);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_getattr_attr_2;
        if (var_gradient == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 265;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_25 = var_gradient;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[98]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 265;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_getattr_target_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[96]);
        if (tmp_getattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 265;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cmode);
        tmp_getattr_attr_2 = var_cmode;
        tmp_args_element_value_3 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, NULL);
        Py_DECREF(tmp_getattr_target_2);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 265;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 265;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_prop);
        tmp_iter_arg_1 = par_prop;
        tmp_assign_source_19 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_19;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_20 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_20 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooNooooooooooooooooo";
                exception_lineno = 268;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_21 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_gstop;
            var_gstop = tmp_assign_source_21;
            Py_INCREF(var_gstop);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(var_gstop);
        tmp_expression_value_27 = var_gstop;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[93]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooNooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_4 = mod_consts[99];
        tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooNooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_28;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooNooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_gstop);
        tmp_expression_value_28 = var_gstop;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[93]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooNooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 270;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooNooooooooooooooooo";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 270;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooNooooooooooooooooo";
        goto try_except_handler_2;
    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_float_arg_13;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(var_gstop);
        tmp_expression_value_29 = var_gstop;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[33]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooNooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 272;
        tmp_float_arg_13 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_23, mod_consts[100]);

        Py_DECREF(tmp_called_value_23);
        if (tmp_float_arg_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooNooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_22 = TO_FLOAT(tmp_float_arg_13);
        Py_DECREF(tmp_float_arg_13);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooNooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_position;
            var_position = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 273;
            type_description_1 = "ooNooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_30 = par_self;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[101]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooNooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_gstop);
        tmp_expression_value_31 = var_gstop;
        tmp_subscript_value_1 = mod_consts[28];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_31, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 273;
            type_description_1 = "ooNooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 273;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooNooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_color;
            var_color = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        if (var_gradient == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 275;
            type_description_1 = "ooNooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = var_gradient;
        CHECK_OBJECT(var_position);
        tmp_args_element_value_6 = var_position;
        CHECK_OBJECT(var_color);
        tmp_args_element_value_7 = var_color;
        frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame.f_lineno = 275;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[102],
                call_args
            );
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooNooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 268;
        type_description_1 = "ooNooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_gradient == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 277;
        type_description_1 = "ooNooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_gradient;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bbcab014a6f6c92e10e933e5fb0a975a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bbcab014a6f6c92e10e933e5fb0a975a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bbcab014a6f6c92e10e933e5fb0a975a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bbcab014a6f6c92e10e933e5fb0a975a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bbcab014a6f6c92e10e933e5fb0a975a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bbcab014a6f6c92e10e933e5fb0a975a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bbcab014a6f6c92e10e933e5fb0a975a,
        type_description_1,
        par_self,
        par_prop,
        NULL,
        var_gtype,
        var_startx,
        var_starty,
        var_endx,
        var_endy,
        var_gradient,
        var_centralx,
        var_centraly,
        var_angle,
        var_radius,
        var_focalx,
        var_focaly,
        var_spread,
        var_cmode,
        var_gstop,
        var_position,
        var_color
    );


    // Release cached frame if used for exception.
    if (frame_bbcab014a6f6c92e10e933e5fb0a975a == cache_frame_bbcab014a6f6c92e10e933e5fb0a975a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bbcab014a6f6c92e10e933e5fb0a975a);
        cache_frame_bbcab014a6f6c92e10e933e5fb0a975a = NULL;
    }

    assertFrameObject(frame_bbcab014a6f6c92e10e933e5fb0a975a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_gtype);
    Py_DECREF(var_gtype);
    var_gtype = NULL;
    Py_XDECREF(var_startx);
    var_startx = NULL;
    Py_XDECREF(var_starty);
    var_starty = NULL;
    Py_XDECREF(var_endx);
    var_endx = NULL;
    Py_XDECREF(var_endy);
    var_endy = NULL;
    Py_XDECREF(var_gradient);
    var_gradient = NULL;
    Py_XDECREF(var_centralx);
    var_centralx = NULL;
    Py_XDECREF(var_centraly);
    var_centraly = NULL;
    Py_XDECREF(var_angle);
    var_angle = NULL;
    Py_XDECREF(var_radius);
    var_radius = NULL;
    Py_XDECREF(var_focalx);
    var_focalx = NULL;
    Py_XDECREF(var_focaly);
    var_focaly = NULL;
    CHECK_OBJECT(var_spread);
    Py_DECREF(var_spread);
    var_spread = NULL;
    CHECK_OBJECT(var_cmode);
    Py_DECREF(var_cmode);
    var_cmode = NULL;
    Py_XDECREF(var_gstop);
    var_gstop = NULL;
    Py_XDECREF(var_position);
    var_position = NULL;
    Py_XDECREF(var_color);
    var_color = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_gtype);
    var_gtype = NULL;
    Py_XDECREF(var_startx);
    var_startx = NULL;
    Py_XDECREF(var_starty);
    var_starty = NULL;
    Py_XDECREF(var_endx);
    var_endx = NULL;
    Py_XDECREF(var_endy);
    var_endy = NULL;
    Py_XDECREF(var_gradient);
    var_gradient = NULL;
    Py_XDECREF(var_centralx);
    var_centralx = NULL;
    Py_XDECREF(var_centraly);
    var_centraly = NULL;
    Py_XDECREF(var_angle);
    var_angle = NULL;
    Py_XDECREF(var_radius);
    var_radius = NULL;
    Py_XDECREF(var_focalx);
    var_focalx = NULL;
    Py_XDECREF(var_focaly);
    var_focaly = NULL;
    Py_XDECREF(var_spread);
    var_spread = NULL;
    Py_XDECREF(var_cmode);
    var_cmode = NULL;
    Py_XDECREF(var_gstop);
    var_gstop = NULL;
    Py_XDECREF(var_position);
    var_position = NULL;
    Py_XDECREF(var_color);
    var_color = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__33__palette(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    PyObject *var_palette = NULL;
    PyObject *var_palette_elem = NULL;
    PyObject *var_sub_palette = NULL;
    PyObject *var_role = NULL;
    PyObject *var_color = NULL;
    PyObject *var_brush = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_95ce0ed7c75908a5e252622162dcdab0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_95ce0ed7c75908a5e252622162dcdab0 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_95ce0ed7c75908a5e252622162dcdab0)) {
        Py_XDECREF(cache_frame_95ce0ed7c75908a5e252622162dcdab0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_95ce0ed7c75908a5e252622162dcdab0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_95ce0ed7c75908a5e252622162dcdab0 = MAKE_FUNCTION_FRAME(codeobj_95ce0ed7c75908a5e252622162dcdab0, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_95ce0ed7c75908a5e252622162dcdab0->m_type_description == NULL);
    frame_95ce0ed7c75908a5e252622162dcdab0 = cache_frame_95ce0ed7c75908a5e252622162dcdab0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_95ce0ed7c75908a5e252622162dcdab0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_95ce0ed7c75908a5e252622162dcdab0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[78]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_95ce0ed7c75908a5e252622162dcdab0->m_frame.f_lineno = 280;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[103], 0), mod_consts[104]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_palette == NULL);
        var_palette = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_prop);
        tmp_iter_arg_1 = par_prop;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 283;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_palette_elem;
            var_palette_elem = tmp_assign_source_4;
            Py_INCREF(var_palette_elem);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[105]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_palette_elem);
        tmp_expression_value_5 = var_palette_elem;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[93]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_getattr_target_1);

            exception_lineno = 284;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[106]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_getattr_target_1);

            exception_lineno = 284;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_95ce0ed7c75908a5e252622162dcdab0->m_frame.f_lineno = 284;
        tmp_getattr_attr_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_getattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_getattr_target_1);

            exception_lineno = 284;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_target_1);
        Py_DECREF(tmp_getattr_attr_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_sub_palette;
            var_sub_palette = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_3 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(var_palette_elem);
        tmp_args_element_value_1 = var_palette_elem;
        frame_95ce0ed7c75908a5e252622162dcdab0->m_frame.f_lineno = 285;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 285;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 285;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 285;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooo";
                    exception_lineno = 285;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[19];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooo";
            exception_lineno = 285;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_role;
            var_role = tmp_assign_source_11;
            Py_INCREF(var_role);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_color;
            var_color = tmp_assign_source_12;
            Py_INCREF(var_color);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_color);
        tmp_expression_value_6 = var_color;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[93]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_1 = mod_consts[107];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_6;
        if (var_palette == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 289;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_7 = var_palette;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[109]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        if (var_sub_palette == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 289;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_2 = var_sub_palette;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 290;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[105]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 290;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_role);
        tmp_args_element_value_4 = var_role;
        frame_95ce0ed7c75908a5e252622162dcdab0->m_frame.f_lineno = 290;
        tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[111], tmp_args_element_value_4);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 290;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 290;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_color);
        tmp_args_element_value_6 = var_color;
        frame_95ce0ed7c75908a5e252622162dcdab0->m_frame.f_lineno = 290;
        tmp_args_element_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[101], tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 290;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        frame_95ce0ed7c75908a5e252622162dcdab0->m_frame.f_lineno = 289;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(var_color);
        tmp_expression_value_9 = var_color;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[93]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_2 = mod_consts[112];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_11;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_getattr_target_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[105]);
        if (tmp_getattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_color);
        tmp_expression_value_11 = var_color;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[33]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_getattr_target_2);

            exception_lineno = 292;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        frame_95ce0ed7c75908a5e252622162dcdab0->m_frame.f_lineno = 292;
        tmp_getattr_attr_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[113]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_getattr_attr_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_getattr_target_2);

            exception_lineno = 292;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_13 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, NULL);
        Py_DECREF(tmp_getattr_target_2);
        Py_DECREF(tmp_getattr_attr_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_role;
            assert(old != NULL);
            var_role = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 293;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_12 = par_self;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[114]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_color);
        tmp_expression_value_13 = var_color;
        tmp_subscript_value_1 = mod_consts[28];
        tmp_args_element_value_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 293;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        frame_95ce0ed7c75908a5e252622162dcdab0->m_frame.f_lineno = 293;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_brush;
            var_brush = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        if (var_palette == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 294;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_14 = var_palette;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[115]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        if (var_sub_palette == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 294;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_8 = var_sub_palette;
        CHECK_OBJECT(var_role);
        tmp_args_element_value_9 = var_role;
        CHECK_OBJECT(var_brush);
        tmp_args_element_value_10 = var_brush;
        frame_95ce0ed7c75908a5e252622162dcdab0->m_frame.f_lineno = 294;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_15;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_color);
        tmp_expression_value_15 = var_color;
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[93]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        frame_95ce0ed7c75908a5e252622162dcdab0->m_frame.f_lineno = 296;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 296;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }
    branch_end_2:;
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 285;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 283;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_palette == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 298;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_palette;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_95ce0ed7c75908a5e252622162dcdab0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_95ce0ed7c75908a5e252622162dcdab0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_95ce0ed7c75908a5e252622162dcdab0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_95ce0ed7c75908a5e252622162dcdab0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_95ce0ed7c75908a5e252622162dcdab0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_95ce0ed7c75908a5e252622162dcdab0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_95ce0ed7c75908a5e252622162dcdab0,
        type_description_1,
        par_self,
        par_prop,
        var_palette,
        var_palette_elem,
        var_sub_palette,
        var_role,
        var_color,
        var_brush
    );


    // Release cached frame if used for exception.
    if (frame_95ce0ed7c75908a5e252622162dcdab0 == cache_frame_95ce0ed7c75908a5e252622162dcdab0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_95ce0ed7c75908a5e252622162dcdab0);
        cache_frame_95ce0ed7c75908a5e252622162dcdab0 = NULL;
    }

    assertFrameObject(frame_95ce0ed7c75908a5e252622162dcdab0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_palette);
    var_palette = NULL;
    Py_XDECREF(var_palette_elem);
    var_palette_elem = NULL;
    Py_XDECREF(var_sub_palette);
    var_sub_palette = NULL;
    Py_XDECREF(var_role);
    var_role = NULL;
    Py_XDECREF(var_color);
    var_color = NULL;
    Py_XDECREF(var_brush);
    var_brush = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_palette);
    var_palette = NULL;
    Py_XDECREF(var_palette_elem);
    var_palette_elem = NULL;
    Py_XDECREF(var_sub_palette);
    var_sub_palette = NULL;
    Py_XDECREF(var_role);
    var_role = NULL;
    Py_XDECREF(var_color);
    var_color = NULL;
    Py_XDECREF(var_brush);
    var_brush = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__34__brush(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    PyObject *var_brushstyle = NULL;
    PyObject *var_gradient = NULL;
    PyObject *var_brush = NULL;
    PyObject *var_color = NULL;
    struct Nuitka_FrameObject *frame_996f2a057396ed92baebb8388a6143c4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_996f2a057396ed92baebb8388a6143c4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_996f2a057396ed92baebb8388a6143c4)) {
        Py_XDECREF(cache_frame_996f2a057396ed92baebb8388a6143c4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_996f2a057396ed92baebb8388a6143c4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_996f2a057396ed92baebb8388a6143c4 = MAKE_FUNCTION_FRAME(codeobj_996f2a057396ed92baebb8388a6143c4, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_996f2a057396ed92baebb8388a6143c4->m_type_description == NULL);
    frame_996f2a057396ed92baebb8388a6143c4 = cache_frame_996f2a057396ed92baebb8388a6143c4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_996f2a057396ed92baebb8388a6143c4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_996f2a057396ed92baebb8388a6143c4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_1 = par_prop;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_996f2a057396ed92baebb8388a6143c4->m_frame.f_lineno = 301;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[116]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_brushstyle == NULL);
        var_brushstyle = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_brushstyle);
        tmp_cmp_expr_left_1 = var_brushstyle;
        tmp_cmp_expr_right_1 = mod_consts[117];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[118]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_expression_value_3 = par_prop;
        tmp_subscript_value_1 = mod_consts[28];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 304;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_996f2a057396ed92baebb8388a6143c4->m_frame.f_lineno = 304;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_gradient == NULL);
        var_gradient = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[5]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[78]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[119];
        tmp_args_value_1 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_2;
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[120];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_gradient);
            tmp_tuple_element_2 = var_gradient;
            tmp_tuple_element_1 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_args_value_1, 2, tmp_tuple_element_1);
        }
        tmp_kwargs_value_1 = PyDict_Copy(mod_consts[81]);
        frame_996f2a057396ed92baebb8388a6143c4->m_frame.f_lineno = 305;
        tmp_assign_source_3 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_brush == NULL);
        var_brush = tmp_assign_source_3;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[101]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_expression_value_7 = par_prop;
        tmp_subscript_value_2 = mod_consts[28];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_2, 0);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 308;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_996f2a057396ed92baebb8388a6143c4->m_frame.f_lineno = 308;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_color == NULL);
        var_color = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[5]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[78]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = mod_consts[119];
        tmp_args_value_2 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_4;
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[120];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            CHECK_OBJECT(var_color);
            tmp_tuple_element_4 = var_color;
            tmp_tuple_element_3 = PyTuple_New(1);
            PyTuple_SET_ITEM0(tmp_tuple_element_3, 0, tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_value_2, 2, tmp_tuple_element_3);
        }
        tmp_kwargs_value_2 = PyDict_Copy(mod_consts[81]);
        frame_996f2a057396ed92baebb8388a6143c4->m_frame.f_lineno = 309;
        tmp_assign_source_5 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_brush == NULL);
        var_brush = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_getattr_attr_1;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[20]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_brushstyle);
        tmp_getattr_attr_1 = var_brushstyle;
        tmp_assign_source_6 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_brushstyle;
            assert(old != NULL);
            var_brushstyle = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_brush);
        tmp_called_instance_1 = var_brush;
        CHECK_OBJECT(var_brushstyle);
        tmp_args_element_value_3 = var_brushstyle;
        frame_996f2a057396ed92baebb8388a6143c4->m_frame.f_lineno = 313;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[121], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_end_1:;
    if (var_brush == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[120]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 315;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_brush;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_996f2a057396ed92baebb8388a6143c4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_996f2a057396ed92baebb8388a6143c4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_996f2a057396ed92baebb8388a6143c4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_996f2a057396ed92baebb8388a6143c4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_996f2a057396ed92baebb8388a6143c4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_996f2a057396ed92baebb8388a6143c4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_996f2a057396ed92baebb8388a6143c4,
        type_description_1,
        par_self,
        par_prop,
        var_brushstyle,
        var_gradient,
        var_brush,
        var_color
    );


    // Release cached frame if used for exception.
    if (frame_996f2a057396ed92baebb8388a6143c4 == cache_frame_996f2a057396ed92baebb8388a6143c4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_996f2a057396ed92baebb8388a6143c4);
        cache_frame_996f2a057396ed92baebb8388a6143c4 = NULL;
    }

    assertFrameObject(frame_996f2a057396ed92baebb8388a6143c4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_brushstyle);
    var_brushstyle = NULL;
    Py_XDECREF(var_gradient);
    var_gradient = NULL;
    Py_XDECREF(var_brush);
    var_brush = NULL;
    Py_XDECREF(var_color);
    var_color = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_brushstyle);
    var_brushstyle = NULL;
    Py_XDECREF(var_gradient);
    var_gradient = NULL;
    Py_XDECREF(var_brush);
    var_brush = NULL;
    Py_XDECREF(var_color);
    var_color = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__35__sizepolicy(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    PyObject *par_widget = python_pars[2];
    PyObject *var_values = NULL;
    PyObject *var_horstretch = NULL;
    PyObject *var_verstretch = NULL;
    PyObject *var_hsizetype = NULL;
    PyObject *var_vsizetype = NULL;
    PyObject *var_sizePolicy = NULL;
    PyObject *outline_0_var_child = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d209434123926b9a98520e74fecb8201;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_5772021e875fe423b4dcdaabb12d2acd_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_5772021e875fe423b4dcdaabb12d2acd_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d209434123926b9a98520e74fecb8201 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d209434123926b9a98520e74fecb8201)) {
        Py_XDECREF(cache_frame_d209434123926b9a98520e74fecb8201);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d209434123926b9a98520e74fecb8201 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d209434123926b9a98520e74fecb8201 = MAKE_FUNCTION_FRAME(codeobj_d209434123926b9a98520e74fecb8201, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d209434123926b9a98520e74fecb8201->m_type_description == NULL);
    frame_d209434123926b9a98520e74fecb8201 = cache_frame_d209434123926b9a98520e74fecb8201;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d209434123926b9a98520e74fecb8201);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d209434123926b9a98520e74fecb8201) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_prop);
            tmp_iter_arg_1 = par_prop;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        if (isFrameUnusable(cache_frame_5772021e875fe423b4dcdaabb12d2acd_2)) {
            Py_XDECREF(cache_frame_5772021e875fe423b4dcdaabb12d2acd_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_5772021e875fe423b4dcdaabb12d2acd_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_5772021e875fe423b4dcdaabb12d2acd_2 = MAKE_FUNCTION_FRAME(codeobj_5772021e875fe423b4dcdaabb12d2acd, module_PyQt5$uic$properties, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_5772021e875fe423b4dcdaabb12d2acd_2->m_type_description == NULL);
        frame_5772021e875fe423b4dcdaabb12d2acd_2 = cache_frame_5772021e875fe423b4dcdaabb12d2acd_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_5772021e875fe423b4dcdaabb12d2acd_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_5772021e875fe423b4dcdaabb12d2acd_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 319;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_child;
                outline_0_var_child = tmp_assign_source_5;
                Py_INCREF(outline_0_var_child);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_int_arg_1;
            PyObject *tmp_expression_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_child);
            tmp_expression_value_1 = outline_0_var_child;
            tmp_int_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
            if (tmp_int_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_append_value_1 = PyNumber_Int(tmp_int_arg_1);
            Py_DECREF(tmp_int_arg_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5772021e875fe423b4dcdaabb12d2acd_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_5772021e875fe423b4dcdaabb12d2acd_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5772021e875fe423b4dcdaabb12d2acd_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5772021e875fe423b4dcdaabb12d2acd_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5772021e875fe423b4dcdaabb12d2acd_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5772021e875fe423b4dcdaabb12d2acd_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5772021e875fe423b4dcdaabb12d2acd_2,
            type_description_2,
            outline_0_var_child
        );


        // Release cached frame if used for exception.
        if (frame_5772021e875fe423b4dcdaabb12d2acd_2 == cache_frame_5772021e875fe423b4dcdaabb12d2acd_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_5772021e875fe423b4dcdaabb12d2acd_2);
            cache_frame_5772021e875fe423b4dcdaabb12d2acd_2 = NULL;
        }

        assertFrameObject(frame_5772021e875fe423b4dcdaabb12d2acd_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_child);
        outline_0_var_child = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_child);
        outline_0_var_child = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 319;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_values == NULL);
        var_values = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_values);
        tmp_len_arg_1 = var_values;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[122];
        tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_values);
        tmp_iter_arg_2 = var_values;
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 323;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 323;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooo";
                    exception_lineno = 323;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[19];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 323;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        assert(var_horstretch == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_horstretch = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        assert(var_verstretch == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_verstretch = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[123]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_expression_value_3 = par_prop;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[33]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_getattr_target_1);

            exception_lineno = 324;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d209434123926b9a98520e74fecb8201->m_frame.f_lineno = 324;
        tmp_getattr_attr_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[124]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_getattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_getattr_target_1);

            exception_lineno = 324;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_target_1);
        Py_DECREF(tmp_getattr_attr_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hsizetype == NULL);
        var_hsizetype = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_getattr_target_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[123]);
        if (tmp_getattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_expression_value_5 = par_prop;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[33]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_getattr_target_2);

            exception_lineno = 325;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d209434123926b9a98520e74fecb8201->m_frame.f_lineno = 325;
        tmp_getattr_attr_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[125]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_getattr_attr_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_getattr_target_2);

            exception_lineno = 325;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, NULL);
        Py_DECREF(tmp_getattr_target_2);
        Py_DECREF(tmp_getattr_attr_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vsizetype == NULL);
        var_vsizetype = tmp_assign_source_12;
    }
    goto branch_end_1;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(var_values);
        tmp_iter_arg_3 = var_values;
        tmp_assign_source_13 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_3, 0, 4);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 327;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_4, 1, 4);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 327;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tmp_unpack_5, 2, 4);
        if (tmp_assign_source_16 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 327;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_2__element_3 == NULL);
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tmp_unpack_6, 3, 4);
        if (tmp_assign_source_17 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 327;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_2__element_4 == NULL);
        tmp_tuple_unpack_2__element_4 = tmp_assign_source_17;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooo";
                    exception_lineno = 327;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[126];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 327;
            goto try_except_handler_7;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_4);
    tmp_tuple_unpack_2__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_18 = tmp_tuple_unpack_2__element_1;
        assert(var_hsizetype == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_hsizetype = tmp_assign_source_18;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_19 = tmp_tuple_unpack_2__element_2;
        assert(var_vsizetype == NULL);
        Py_INCREF(tmp_assign_source_19);
        var_vsizetype = tmp_assign_source_19;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_20 = tmp_tuple_unpack_2__element_3;
        assert(var_horstretch == NULL);
        Py_INCREF(tmp_assign_source_20);
        var_horstretch = tmp_assign_source_20;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_4);
        tmp_assign_source_21 = tmp_tuple_unpack_2__element_4;
        assert(var_verstretch == NULL);
        Py_INCREF(tmp_assign_source_21);
        var_verstretch = tmp_assign_source_21;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_4);
    tmp_tuple_unpack_2__element_4 = NULL;

    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[123]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hsizetype);
        tmp_args_element_value_1 = var_hsizetype;
        frame_d209434123926b9a98520e74fecb8201->m_frame.f_lineno = 328;
        tmp_assign_source_22 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[127], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_hsizetype;
            assert(old != NULL);
            var_hsizetype = tmp_assign_source_22;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[123]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vsizetype);
        tmp_args_element_value_2 = var_vsizetype;
        frame_d209434123926b9a98520e74fecb8201->m_frame.f_lineno = 329;
        tmp_assign_source_23 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[127], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_vsizetype;
            assert(old != NULL);
            var_vsizetype = tmp_assign_source_23;
            Py_DECREF(old);
        }

    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[5]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[78]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[123];
        tmp_args_value_1 = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_2;
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[128];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_hsizetype);
            tmp_tuple_element_2 = var_hsizetype;
            tmp_tuple_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_vsizetype);
            tmp_tuple_element_2 = var_vsizetype;
            PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_args_value_1, 2, tmp_tuple_element_1);
        }
        tmp_kwargs_value_1 = PyDict_Copy(mod_consts[81]);
        frame_d209434123926b9a98520e74fecb8201->m_frame.f_lineno = 331;
        tmp_assign_source_24 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sizePolicy == NULL);
        var_sizePolicy = tmp_assign_source_24;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_3 = var_sizePolicy;
        CHECK_OBJECT(var_horstretch);
        tmp_args_element_value_3 = var_horstretch;
        frame_d209434123926b9a98520e74fecb8201->m_frame.f_lineno = 333;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[129], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_sizePolicy);
        tmp_called_instance_4 = var_sizePolicy;
        CHECK_OBJECT(var_verstretch);
        tmp_args_element_value_4 = var_verstretch;
        frame_d209434123926b9a98520e74fecb8201->m_frame.f_lineno = 334;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[130], tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(var_sizePolicy);
        tmp_expression_value_10 = var_sizePolicy;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[131]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_widget);
        tmp_called_instance_6 = par_widget;
        frame_d209434123926b9a98520e74fecb8201->m_frame.f_lineno = 335;
        tmp_called_instance_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[128]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 335;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d209434123926b9a98520e74fecb8201->m_frame.f_lineno = 335;
        tmp_args_element_value_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[132]);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 335;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d209434123926b9a98520e74fecb8201->m_frame.f_lineno = 335;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d209434123926b9a98520e74fecb8201);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d209434123926b9a98520e74fecb8201);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d209434123926b9a98520e74fecb8201, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d209434123926b9a98520e74fecb8201->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d209434123926b9a98520e74fecb8201, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d209434123926b9a98520e74fecb8201,
        type_description_1,
        par_self,
        par_prop,
        par_widget,
        var_values,
        var_horstretch,
        var_verstretch,
        var_hsizetype,
        var_vsizetype,
        var_sizePolicy
    );


    // Release cached frame if used for exception.
    if (frame_d209434123926b9a98520e74fecb8201 == cache_frame_d209434123926b9a98520e74fecb8201) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d209434123926b9a98520e74fecb8201);
        cache_frame_d209434123926b9a98520e74fecb8201 = NULL;
    }

    assertFrameObject(frame_d209434123926b9a98520e74fecb8201);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    CHECK_OBJECT(var_sizePolicy);
    tmp_return_value = var_sizePolicy;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_values);
    Py_DECREF(var_values);
    var_values = NULL;
    CHECK_OBJECT(var_horstretch);
    Py_DECREF(var_horstretch);
    var_horstretch = NULL;
    CHECK_OBJECT(var_verstretch);
    Py_DECREF(var_verstretch);
    var_verstretch = NULL;
    CHECK_OBJECT(var_hsizetype);
    Py_DECREF(var_hsizetype);
    var_hsizetype = NULL;
    CHECK_OBJECT(var_vsizetype);
    Py_DECREF(var_vsizetype);
    var_vsizetype = NULL;
    CHECK_OBJECT(var_sizePolicy);
    Py_DECREF(var_sizePolicy);
    var_sizePolicy = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_values);
    var_values = NULL;
    Py_XDECREF(var_horstretch);
    var_horstretch = NULL;
    Py_XDECREF(var_verstretch);
    var_verstretch = NULL;
    Py_XDECREF(var_hsizetype);
    var_hsizetype = NULL;
    Py_XDECREF(var_vsizetype);
    var_vsizetype = NULL;
    Py_XDECREF(var_sizePolicy);
    var_sizePolicy = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__36_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_s);
    tmp_return_value = par_s;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__37__font(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    PyObject *var_newfont = NULL;
    PyObject *var_attr = NULL;
    PyObject *var_converter = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_8e0c5b63f752f34f68fb10f8a0e7d4e0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_8e0c5b63f752f34f68fb10f8a0e7d4e0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8e0c5b63f752f34f68fb10f8a0e7d4e0)) {
        Py_XDECREF(cache_frame_8e0c5b63f752f34f68fb10f8a0e7d4e0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8e0c5b63f752f34f68fb10f8a0e7d4e0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8e0c5b63f752f34f68fb10f8a0e7d4e0 = MAKE_FUNCTION_FRAME(codeobj_8e0c5b63f752f34f68fb10f8a0e7d4e0, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8e0c5b63f752f34f68fb10f8a0e7d4e0->m_type_description == NULL);
    frame_8e0c5b63f752f34f68fb10f8a0e7d4e0 = cache_frame_8e0c5b63f752f34f68fb10f8a0e7d4e0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8e0c5b63f752f34f68fb10f8a0e7d4e0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8e0c5b63f752f34f68fb10f8a0e7d4e0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[78]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_8e0c5b63f752f34f68fb10f8a0e7d4e0->m_frame.f_lineno = 351;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[133], 0), mod_consts[104]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_newfont == NULL);
        var_newfont = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[134]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 353;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 353;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 353;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooo";
                    exception_lineno = 353;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[19];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 353;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_attr;
            var_attr = tmp_assign_source_7;
            Py_INCREF(var_attr);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_converter;
            var_converter = tmp_assign_source_8;
            Py_INCREF(var_converter);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        if (par_prop == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[135]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 354;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = par_prop;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[136]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_left_value_1 = mod_consts[137];
        CHECK_OBJECT(var_attr);
        tmp_expression_value_5 = var_attr;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[138]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 354;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_8e0c5b63f752f34f68fb10f8a0e7d4e0->m_frame.f_lineno = 354;
        tmp_tuple_element_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 354;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_right_value_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_right_value_1, 0, tmp_tuple_element_1);
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 354;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_8e0c5b63f752f34f68fb10f8a0e7d4e0->m_frame.f_lineno = 354;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_v);
        tmp_cmp_expr_left_1 = var_v;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_start_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_newfont);
        tmp_getattr_target_1 = var_newfont;
        tmp_left_value_2 = mod_consts[139];
        CHECK_OBJECT(var_attr);
        tmp_tuple_element_2 = var_attr;
        tmp_right_value_2 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_right_value_2, 0, tmp_tuple_element_2);
        tmp_getattr_attr_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_right_value_2);
        if (tmp_getattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_attr_1);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_converter);
        tmp_called_value_5 = var_converter;
        CHECK_OBJECT(var_v);
        tmp_args_element_value_3 = var_v;
        frame_8e0c5b63f752f34f68fb10f8a0e7d4e0->m_frame.f_lineno = 358;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 358;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_8e0c5b63f752f34f68fb10f8a0e7d4e0->m_frame.f_lineno = 358;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 353;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8e0c5b63f752f34f68fb10f8a0e7d4e0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8e0c5b63f752f34f68fb10f8a0e7d4e0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8e0c5b63f752f34f68fb10f8a0e7d4e0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8e0c5b63f752f34f68fb10f8a0e7d4e0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8e0c5b63f752f34f68fb10f8a0e7d4e0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8e0c5b63f752f34f68fb10f8a0e7d4e0,
        type_description_1,
        par_self,
        par_prop,
        var_newfont,
        var_attr,
        var_converter,
        var_v
    );


    // Release cached frame if used for exception.
    if (frame_8e0c5b63f752f34f68fb10f8a0e7d4e0 == cache_frame_8e0c5b63f752f34f68fb10f8a0e7d4e0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8e0c5b63f752f34f68fb10f8a0e7d4e0);
        cache_frame_8e0c5b63f752f34f68fb10f8a0e7d4e0 = NULL;
    }

    assertFrameObject(frame_8e0c5b63f752f34f68fb10f8a0e7d4e0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    CHECK_OBJECT(var_newfont);
    tmp_return_value = var_newfont;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_newfont);
    Py_DECREF(var_newfont);
    var_newfont = NULL;
    Py_XDECREF(var_attr);
    var_attr = NULL;
    Py_XDECREF(var_converter);
    var_converter = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_newfont);
    var_newfont = NULL;
    Py_XDECREF(var_attr);
    var_attr = NULL;
    Py_XDECREF(var_converter);
    var_converter = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__38__cursor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    struct Nuitka_FrameObject *frame_0c56f34a4387b376b3c5bb160a542b72;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0c56f34a4387b376b3c5bb160a542b72 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0c56f34a4387b376b3c5bb160a542b72)) {
        Py_XDECREF(cache_frame_0c56f34a4387b376b3c5bb160a542b72);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0c56f34a4387b376b3c5bb160a542b72 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0c56f34a4387b376b3c5bb160a542b72 = MAKE_FUNCTION_FRAME(codeobj_0c56f34a4387b376b3c5bb160a542b72, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0c56f34a4387b376b3c5bb160a542b72->m_type_description == NULL);
    frame_0c56f34a4387b376b3c5bb160a542b72 = cache_frame_0c56f34a4387b376b3c5bb160a542b72;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0c56f34a4387b376b3c5bb160a542b72);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0c56f34a4387b376b3c5bb160a542b72) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[140]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[20]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[141]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_expression_value_4 = par_prop;
        tmp_int_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[0]);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_0c56f34a4387b376b3c5bb160a542b72->m_frame.f_lineno = 362;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_0c56f34a4387b376b3c5bb160a542b72->m_frame.f_lineno = 362;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0c56f34a4387b376b3c5bb160a542b72);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0c56f34a4387b376b3c5bb160a542b72);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0c56f34a4387b376b3c5bb160a542b72);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0c56f34a4387b376b3c5bb160a542b72, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0c56f34a4387b376b3c5bb160a542b72->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0c56f34a4387b376b3c5bb160a542b72, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0c56f34a4387b376b3c5bb160a542b72,
        type_description_1,
        par_self,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_0c56f34a4387b376b3c5bb160a542b72 == cache_frame_0c56f34a4387b376b3c5bb160a542b72) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0c56f34a4387b376b3c5bb160a542b72);
        cache_frame_0c56f34a4387b376b3c5bb160a542b72 = NULL;
    }

    assertFrameObject(frame_0c56f34a4387b376b3c5bb160a542b72);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__39__cursorShape(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    struct Nuitka_FrameObject *frame_e9771d95f7d088bbca10776bde0a55b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e9771d95f7d088bbca10776bde0a55b5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e9771d95f7d088bbca10776bde0a55b5)) {
        Py_XDECREF(cache_frame_e9771d95f7d088bbca10776bde0a55b5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e9771d95f7d088bbca10776bde0a55b5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e9771d95f7d088bbca10776bde0a55b5 = MAKE_FUNCTION_FRAME(codeobj_e9771d95f7d088bbca10776bde0a55b5, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e9771d95f7d088bbca10776bde0a55b5->m_type_description == NULL);
    frame_e9771d95f7d088bbca10776bde0a55b5 = cache_frame_e9771d95f7d088bbca10776bde0a55b5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e9771d95f7d088bbca10776bde0a55b5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e9771d95f7d088bbca10776bde0a55b5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[140]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 365;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[20]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 365;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_expression_value_3 = par_prop;
        tmp_getattr_attr_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[0]);
        if (tmp_getattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_getattr_target_1);

            exception_lineno = 365;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_target_1);
        Py_DECREF(tmp_getattr_attr_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 365;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e9771d95f7d088bbca10776bde0a55b5->m_frame.f_lineno = 365;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e9771d95f7d088bbca10776bde0a55b5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e9771d95f7d088bbca10776bde0a55b5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e9771d95f7d088bbca10776bde0a55b5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e9771d95f7d088bbca10776bde0a55b5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e9771d95f7d088bbca10776bde0a55b5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e9771d95f7d088bbca10776bde0a55b5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e9771d95f7d088bbca10776bde0a55b5,
        type_description_1,
        par_self,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_e9771d95f7d088bbca10776bde0a55b5 == cache_frame_e9771d95f7d088bbca10776bde0a55b5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e9771d95f7d088bbca10776bde0a55b5);
        cache_frame_e9771d95f7d088bbca10776bde0a55b5 = NULL;
    }

    assertFrameObject(frame_e9771d95f7d088bbca10776bde0a55b5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__40_convert(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_prop = python_pars[1];
    PyObject *par_widget = python_pars[2];
    PyObject *var_func = NULL;
    PyObject *var_args = NULL;
    struct Nuitka_FrameObject *frame_cac7723c05df665aa820086392073287;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cac7723c05df665aa820086392073287 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cac7723c05df665aa820086392073287)) {
        Py_XDECREF(cache_frame_cac7723c05df665aa820086392073287);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cac7723c05df665aa820086392073287 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cac7723c05df665aa820086392073287 = MAKE_FUNCTION_FRAME(codeobj_cac7723c05df665aa820086392073287, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cac7723c05df665aa820086392073287->m_type_description == NULL);
    frame_cac7723c05df665aa820086392073287 = cache_frame_cac7723c05df665aa820086392073287;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cac7723c05df665aa820086392073287);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cac7723c05df665aa820086392073287) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_getattr_target_1 = par_self;
        tmp_left_value_1 = mod_consts[142];
        CHECK_OBJECT(par_prop);
        tmp_expression_value_2 = par_prop;
        tmp_subscript_value_1 = mod_consts[28];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[93]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_getattr_attr_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_getattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_attr_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_func == NULL);
        var_func = tmp_assign_source_1;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_cac7723c05df665aa820086392073287, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_cac7723c05df665aa820086392073287, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_prop);
        tmp_expression_value_4 = par_prop;
        tmp_subscript_value_2 = mod_consts[28];
        tmp_expression_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_2, 0);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[93]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        frame_cac7723c05df665aa820086392073287->m_frame.f_lineno = 371;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 371;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 368;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_cac7723c05df665aa820086392073287->m_frame) frame_cac7723c05df665aa820086392073287->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyDict_New();
        assert(var_args == NULL);
        var_args = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_capi_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_func);
        tmp_getattr_target_2 = var_func;
        tmp_getattr_attr_2 = mod_consts[4];
        tmp_getattr_default_1 = Py_False;
        tmp_capi_result_1 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_capi_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_capi_result_1);

            exception_lineno = 374;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_capi_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_widget);
        tmp_cmp_expr_left_2 = par_widget;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_lineno = 375;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    CHECK_OBJECT(par_widget);
    tmp_dictset_value = par_widget;
    CHECK_OBJECT(var_args);
    tmp_dictset_dict = var_args;
    tmp_dictset_key = mod_consts[143];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    branch_no_2:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(var_func);
        tmp_dircall_arg1_1 = var_func;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_5 = par_prop;
        tmp_subscript_value_3 = mod_consts[28];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_3, 0);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        if (var_args == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 378;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = var_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__2_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cac7723c05df665aa820086392073287);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cac7723c05df665aa820086392073287);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cac7723c05df665aa820086392073287);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cac7723c05df665aa820086392073287, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cac7723c05df665aa820086392073287->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cac7723c05df665aa820086392073287, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cac7723c05df665aa820086392073287,
        type_description_1,
        par_self,
        par_prop,
        par_widget,
        var_func,
        var_args
    );


    // Release cached frame if used for exception.
    if (frame_cac7723c05df665aa820086392073287 == cache_frame_cac7723c05df665aa820086392073287) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_cac7723c05df665aa820086392073287);
        cache_frame_cac7723c05df665aa820086392073287 = NULL;
    }

    assertFrameObject(frame_cac7723c05df665aa820086392073287);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
    Py_XDECREF(var_args);
    var_args = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_func);
    var_func = NULL;
    Py_XDECREF(var_args);
    var_args = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__41__getChild(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_elem_tag = python_pars[1];
    PyObject *par_elem = python_pars[2];
    PyObject *par_name = python_pars[3];
    PyObject *par_default = python_pars[4];
    PyObject *var_prop = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_70808b353ca0a80498a697a319892983;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_70808b353ca0a80498a697a319892983 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_70808b353ca0a80498a697a319892983)) {
        Py_XDECREF(cache_frame_70808b353ca0a80498a697a319892983);

#if _DEBUG_REFCOUNTS
        if (cache_frame_70808b353ca0a80498a697a319892983 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_70808b353ca0a80498a697a319892983 = MAKE_FUNCTION_FRAME(codeobj_70808b353ca0a80498a697a319892983, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_70808b353ca0a80498a697a319892983->m_type_description == NULL);
    frame_70808b353ca0a80498a697a319892983 = cache_frame_70808b353ca0a80498a697a319892983;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_70808b353ca0a80498a697a319892983);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_70808b353ca0a80498a697a319892983) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_elem);
        tmp_called_instance_1 = par_elem;
        CHECK_OBJECT(par_elem_tag);
        tmp_args_element_value_1 = par_elem_tag;
        frame_70808b353ca0a80498a697a319892983->m_frame.f_lineno = 382;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[144], tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 382;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_prop;
            var_prop = tmp_assign_source_3;
            Py_INCREF(var_prop);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_prop);
        tmp_expression_value_2 = var_prop;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[64]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = mod_consts[145];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_name);
        tmp_cmp_expr_right_1 = par_name;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_prop);
        tmp_args_element_value_2 = var_prop;
        frame_70808b353ca0a80498a697a319892983->m_frame.f_lineno = 384;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[146], tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        goto try_return_handler_2;
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 382;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_for_loop_1__iter_value);
    Py_DECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_70808b353ca0a80498a697a319892983);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_70808b353ca0a80498a697a319892983);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_70808b353ca0a80498a697a319892983);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_70808b353ca0a80498a697a319892983, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_70808b353ca0a80498a697a319892983->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_70808b353ca0a80498a697a319892983, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_70808b353ca0a80498a697a319892983,
        type_description_1,
        par_self,
        par_elem_tag,
        par_elem,
        par_name,
        par_default,
        var_prop
    );


    // Release cached frame if used for exception.
    if (frame_70808b353ca0a80498a697a319892983 == cache_frame_70808b353ca0a80498a697a319892983) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_70808b353ca0a80498a697a319892983);
        cache_frame_70808b353ca0a80498a697a319892983 = NULL;
    }

    assertFrameObject(frame_70808b353ca0a80498a697a319892983);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    CHECK_OBJECT(par_default);
    tmp_return_value = par_default;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_prop);
    var_prop = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_prop);
    var_prop = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_elem_tag);
    Py_DECREF(par_elem_tag);
    CHECK_OBJECT(par_elem);
    Py_DECREF(par_elem);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_elem_tag);
    Py_DECREF(par_elem_tag);
    CHECK_OBJECT(par_elem);
    Py_DECREF(par_elem);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__42_getProperty(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_elem = python_pars[1];
    PyObject *par_name = python_pars[2];
    PyObject *par_default = python_pars[3];
    struct Nuitka_FrameObject *frame_35061fa8c7b70e6755e95141c65a2749;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_35061fa8c7b70e6755e95141c65a2749 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_35061fa8c7b70e6755e95141c65a2749)) {
        Py_XDECREF(cache_frame_35061fa8c7b70e6755e95141c65a2749);

#if _DEBUG_REFCOUNTS
        if (cache_frame_35061fa8c7b70e6755e95141c65a2749 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_35061fa8c7b70e6755e95141c65a2749 = MAKE_FUNCTION_FRAME(codeobj_35061fa8c7b70e6755e95141c65a2749, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_35061fa8c7b70e6755e95141c65a2749->m_type_description == NULL);
    frame_35061fa8c7b70e6755e95141c65a2749 = cache_frame_35061fa8c7b70e6755e95141c65a2749;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_35061fa8c7b70e6755e95141c65a2749);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_35061fa8c7b70e6755e95141c65a2749) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[148];
        CHECK_OBJECT(par_elem);
        tmp_args_element_value_2 = par_elem;
        CHECK_OBJECT(par_name);
        tmp_args_element_value_3 = par_name;
        CHECK_OBJECT(par_default);
        tmp_args_element_value_4 = par_default;
        frame_35061fa8c7b70e6755e95141c65a2749->m_frame.f_lineno = 389;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_1,
                mod_consts[147],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_35061fa8c7b70e6755e95141c65a2749);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_35061fa8c7b70e6755e95141c65a2749);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_35061fa8c7b70e6755e95141c65a2749);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_35061fa8c7b70e6755e95141c65a2749, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_35061fa8c7b70e6755e95141c65a2749->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_35061fa8c7b70e6755e95141c65a2749, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_35061fa8c7b70e6755e95141c65a2749,
        type_description_1,
        par_self,
        par_elem,
        par_name,
        par_default
    );


    // Release cached frame if used for exception.
    if (frame_35061fa8c7b70e6755e95141c65a2749 == cache_frame_35061fa8c7b70e6755e95141c65a2749) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_35061fa8c7b70e6755e95141c65a2749);
        cache_frame_35061fa8c7b70e6755e95141c65a2749 = NULL;
    }

    assertFrameObject(frame_35061fa8c7b70e6755e95141c65a2749);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_elem);
    Py_DECREF(par_elem);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_elem);
    Py_DECREF(par_elem);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__43_getAttribute(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_elem = python_pars[1];
    PyObject *par_name = python_pars[2];
    PyObject *par_default = python_pars[3];
    struct Nuitka_FrameObject *frame_abfde152eb80e4671a27fbbd2fc93304;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_abfde152eb80e4671a27fbbd2fc93304 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_abfde152eb80e4671a27fbbd2fc93304)) {
        Py_XDECREF(cache_frame_abfde152eb80e4671a27fbbd2fc93304);

#if _DEBUG_REFCOUNTS
        if (cache_frame_abfde152eb80e4671a27fbbd2fc93304 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_abfde152eb80e4671a27fbbd2fc93304 = MAKE_FUNCTION_FRAME(codeobj_abfde152eb80e4671a27fbbd2fc93304, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_abfde152eb80e4671a27fbbd2fc93304->m_type_description == NULL);
    frame_abfde152eb80e4671a27fbbd2fc93304 = cache_frame_abfde152eb80e4671a27fbbd2fc93304;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_abfde152eb80e4671a27fbbd2fc93304);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_abfde152eb80e4671a27fbbd2fc93304) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[149];
        CHECK_OBJECT(par_elem);
        tmp_args_element_value_2 = par_elem;
        CHECK_OBJECT(par_name);
        tmp_args_element_value_3 = par_name;
        CHECK_OBJECT(par_default);
        tmp_args_element_value_4 = par_default;
        frame_abfde152eb80e4671a27fbbd2fc93304->m_frame.f_lineno = 392;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_METHOD_WITH_ARGS4(
                tmp_called_instance_1,
                mod_consts[147],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_abfde152eb80e4671a27fbbd2fc93304);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_abfde152eb80e4671a27fbbd2fc93304);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_abfde152eb80e4671a27fbbd2fc93304);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_abfde152eb80e4671a27fbbd2fc93304, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_abfde152eb80e4671a27fbbd2fc93304->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_abfde152eb80e4671a27fbbd2fc93304, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_abfde152eb80e4671a27fbbd2fc93304,
        type_description_1,
        par_self,
        par_elem,
        par_name,
        par_default
    );


    // Release cached frame if used for exception.
    if (frame_abfde152eb80e4671a27fbbd2fc93304 == cache_frame_abfde152eb80e4671a27fbbd2fc93304) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_abfde152eb80e4671a27fbbd2fc93304);
        cache_frame_abfde152eb80e4671a27fbbd2fc93304 = NULL;
    }

    assertFrameObject(frame_abfde152eb80e4671a27fbbd2fc93304);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_elem);
    Py_DECREF(par_elem);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_elem);
    Py_DECREF(par_elem);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__44_setProperties(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_widget = python_pars[1];
    PyObject *par_elem = python_pars[2];
    PyObject *var_set_sunken = NULL;
    PyObject *var_prop = NULL;
    PyObject *var_prop_name = NULL;
    PyObject *var_stdset = NULL;
    PyObject *var_prop_value = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_9341a4783312edf09ab4cee782e1ef90;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_9341a4783312edf09ab4cee782e1ef90 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9341a4783312edf09ab4cee782e1ef90)) {
        Py_XDECREF(cache_frame_9341a4783312edf09ab4cee782e1ef90);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9341a4783312edf09ab4cee782e1ef90 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9341a4783312edf09ab4cee782e1ef90 = MAKE_FUNCTION_FRAME(codeobj_9341a4783312edf09ab4cee782e1ef90, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9341a4783312edf09ab4cee782e1ef90->m_type_description == NULL);
    frame_9341a4783312edf09ab4cee782e1ef90 = cache_frame_9341a4783312edf09ab4cee782e1ef90;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9341a4783312edf09ab4cee782e1ef90);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9341a4783312edf09ab4cee782e1ef90) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_elem);
        tmp_expression_value_2 = par_elem;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[64]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_9341a4783312edf09ab4cee782e1ef90->m_frame.f_lineno = 396;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[150]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[151];
        tmp_assign_source_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_set_sunken == NULL);
        var_set_sunken = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_elem);
        tmp_called_instance_1 = par_elem;
        frame_9341a4783312edf09ab4cee782e1ef90->m_frame.f_lineno = 398;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[144],
            PyTuple_GET_ITEM(mod_consts[152], 0)
        );

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 398;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_prop;
            var_prop = tmp_assign_source_4;
            Py_INCREF(var_prop);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_prop);
        tmp_expression_value_4 = var_prop;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[64]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = mod_consts[145];
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_prop_name;
            var_prop_name = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[153]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_left_value_1 = mod_consts[154];
        CHECK_OBJECT(var_prop_name);
        tmp_tuple_element_1 = var_prop_name;
        tmp_right_value_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_right_value_1, 0, tmp_tuple_element_1);
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_9341a4783312edf09ab4cee782e1ef90->m_frame.f_lineno = 400;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_prop_name);
        tmp_cmp_expr_left_2 = var_prop_name;
        tmp_cmp_expr_right_2 = mod_consts[155];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_False;
        {
            PyObject *old = var_set_sunken;
            var_set_sunken = tmp_assign_source_6;
            Py_INCREF(var_set_sunken);
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_value_value_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_prop);
        tmp_expression_value_6 = var_prop;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[64]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_2 = mod_consts[156];
        tmp_int_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_value_value_1 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_value_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_7 = (tmp_res != 0) ? Py_True : Py_False;
        {
            PyObject *old = var_stdset;
            var_stdset = tmp_assign_source_7;
            Py_INCREF(var_stdset);
            Py_XDECREF(old);
        }

    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_9341a4783312edf09ab4cee782e1ef90, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_9341a4783312edf09ab4cee782e1ef90, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_True;
        {
            PyObject *old = var_stdset;
            var_stdset = tmp_assign_source_8;
            Py_INCREF(var_stdset);
            Py_XDECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 405;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9341a4783312edf09ab4cee782e1ef90->m_frame) frame_9341a4783312edf09ab4cee782e1ef90->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooo";
    goto try_except_handler_4;
    branch_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        if (var_stdset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[156]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 410;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_operand_value_1 = var_stdset;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 411;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[157]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        if (par_widget == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[143]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 411;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = par_widget;
        CHECK_OBJECT(var_prop);
        tmp_args_element_value_3 = var_prop;
        frame_9341a4783312edf09ab4cee782e1ef90->m_frame.f_lineno = 411;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_attribute_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 412;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_8 = par_self;
        CHECK_OBJECT(var_prop_name);
        tmp_attribute_value_1 = var_prop_name;
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_8, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 413;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_getattr_target_1 = par_self;
        CHECK_OBJECT(var_prop_name);
        tmp_getattr_attr_1 = var_prop_name;
        tmp_called_value_4 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        if (par_widget == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[143]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 413;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_4 = par_widget;
        CHECK_OBJECT(var_prop);
        tmp_args_element_value_5 = var_prop;
        frame_9341a4783312edf09ab4cee782e1ef90->m_frame.f_lineno = 413;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 415;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_9 = par_self;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[146]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_prop);
        tmp_args_element_value_6 = var_prop;
        if (par_widget == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[143]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 415;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_7 = par_widget;
        frame_9341a4783312edf09ab4cee782e1ef90->m_frame.f_lineno = 415;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_prop_value;
            var_prop_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_prop_value);
        tmp_cmp_expr_left_4 = var_prop_value;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_9;
        if (par_widget == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[143]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 417;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_getattr_target_2 = par_widget;
        tmp_left_value_2 = mod_consts[158];
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[159]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_prop_name);
        tmp_expression_value_10 = var_prop_name;
        tmp_subscript_value_3 = mod_consts[28];
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_3, 0);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_9341a4783312edf09ab4cee782e1ef90->m_frame.f_lineno = 417;
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_right_value_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_4;
            PyTuple_SET_ITEM(tmp_right_value_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_prop_name);
            tmp_expression_value_11 = var_prop_name;
            tmp_subscript_value_4 = mod_consts[29];
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_4);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_value_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_value_2);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_getattr_attr_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_right_value_2);
        if (tmp_getattr_attr_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_6 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, NULL);
        Py_DECREF(tmp_getattr_attr_2);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_prop_value);
        tmp_args_element_value_9 = var_prop_value;
        frame_9341a4783312edf09ab4cee782e1ef90->m_frame.f_lineno = 417;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_5:;
    branch_end_4:;
    branch_end_3:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 398;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_1;
        if (var_set_sunken == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[160]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 419;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(var_set_sunken);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        if (par_widget == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[143]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 420;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = par_widget;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[161]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 420;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[162]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 420;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[163]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 420;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_9341a4783312edf09ab4cee782e1ef90->m_frame.f_lineno = 420;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_6:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9341a4783312edf09ab4cee782e1ef90);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9341a4783312edf09ab4cee782e1ef90);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9341a4783312edf09ab4cee782e1ef90, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9341a4783312edf09ab4cee782e1ef90->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9341a4783312edf09ab4cee782e1ef90, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9341a4783312edf09ab4cee782e1ef90,
        type_description_1,
        par_self,
        par_widget,
        par_elem,
        var_set_sunken,
        var_prop,
        var_prop_name,
        var_stdset,
        var_prop_value
    );


    // Release cached frame if used for exception.
    if (frame_9341a4783312edf09ab4cee782e1ef90 == cache_frame_9341a4783312edf09ab4cee782e1ef90) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9341a4783312edf09ab4cee782e1ef90);
        cache_frame_9341a4783312edf09ab4cee782e1ef90 = NULL;
    }

    assertFrameObject(frame_9341a4783312edf09ab4cee782e1ef90);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_set_sunken);
    var_set_sunken = NULL;
    Py_XDECREF(var_prop);
    var_prop = NULL;
    Py_XDECREF(var_prop_name);
    var_prop_name = NULL;
    Py_XDECREF(var_stdset);
    var_stdset = NULL;
    Py_XDECREF(var_prop_value);
    var_prop_value = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_set_sunken);
    var_set_sunken = NULL;
    Py_XDECREF(var_prop);
    var_prop = NULL;
    Py_XDECREF(var_prop_name);
    var_prop_name = NULL;
    Py_XDECREF(var_stdset);
    var_stdset = NULL;
    Py_XDECREF(var_prop_value);
    var_prop_value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_elem);
    Py_DECREF(par_elem);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_elem);
    Py_DECREF(par_elem);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__45__delayed_property(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_widget = python_pars[1];
    PyObject *par_prop = python_pars[2];
    PyObject *var_prop_value = NULL;
    PyObject *var_prop_name = NULL;
    struct Nuitka_FrameObject *frame_be133bfffed819c7d45e47c289868f60;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_be133bfffed819c7d45e47c289868f60 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_be133bfffed819c7d45e47c289868f60)) {
        Py_XDECREF(cache_frame_be133bfffed819c7d45e47c289868f60);

#if _DEBUG_REFCOUNTS
        if (cache_frame_be133bfffed819c7d45e47c289868f60 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_be133bfffed819c7d45e47c289868f60 = MAKE_FUNCTION_FRAME(codeobj_be133bfffed819c7d45e47c289868f60, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_be133bfffed819c7d45e47c289868f60->m_type_description == NULL);
    frame_be133bfffed819c7d45e47c289868f60 = cache_frame_be133bfffed819c7d45e47c289868f60;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_be133bfffed819c7d45e47c289868f60);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_be133bfffed819c7d45e47c289868f60) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_prop);
        tmp_args_element_value_1 = par_prop;
        frame_be133bfffed819c7d45e47c289868f60->m_frame.f_lineno = 429;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[146], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prop_value == NULL);
        var_prop_value = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_prop_value);
        tmp_cmp_expr_left_1 = var_prop_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_2 = par_prop;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[64]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[145];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prop_name == NULL);
        var_prop_name = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[15]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[42]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_widget);
        tmp_tuple_element_1 = par_widget;
        tmp_args_element_value_2 = PyTuple_New(4);
        {
            PyObject *tmp_left_value_1;
            PyObject *tmp_right_value_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_2;
            PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_False;
            PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_1);
            tmp_left_value_1 = mod_consts[158];
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[159]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var_prop_name);
            tmp_expression_value_5 = var_prop_name;
            tmp_subscript_value_2 = mod_consts[28];
            tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_2, 0);
            if (tmp_args_element_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            frame_be133bfffed819c7d45e47c289868f60->m_frame.f_lineno = 433;
            tmp_tuple_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            tmp_right_value_1 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_6;
                PyObject *tmp_subscript_value_3;
                PyTuple_SET_ITEM(tmp_right_value_1, 0, tmp_tuple_element_2);
                CHECK_OBJECT(var_prop_name);
                tmp_expression_value_6 = var_prop_name;
                tmp_subscript_value_3 = mod_consts[29];
                tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_3);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 433;
                    type_description_1 = "ooooo";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_right_value_1, 1, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_right_value_1);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_tuple_element_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_1, tmp_right_value_1);
            Py_DECREF(tmp_right_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_2, 2, tmp_tuple_element_1);
            CHECK_OBJECT(var_prop_value);
            tmp_tuple_element_1 = var_prop_value;
            PyTuple_SET_ITEM0(tmp_args_element_value_2, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        frame_be133bfffed819c7d45e47c289868f60->m_frame.f_lineno = 432;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_be133bfffed819c7d45e47c289868f60);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_be133bfffed819c7d45e47c289868f60);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_be133bfffed819c7d45e47c289868f60, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_be133bfffed819c7d45e47c289868f60->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_be133bfffed819c7d45e47c289868f60, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_be133bfffed819c7d45e47c289868f60,
        type_description_1,
        par_self,
        par_widget,
        par_prop,
        var_prop_value,
        var_prop_name
    );


    // Release cached frame if used for exception.
    if (frame_be133bfffed819c7d45e47c289868f60 == cache_frame_be133bfffed819c7d45e47c289868f60) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_be133bfffed819c7d45e47c289868f60);
        cache_frame_be133bfffed819c7d45e47c289868f60 = NULL;
    }

    assertFrameObject(frame_be133bfffed819c7d45e47c289868f60);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_prop_value);
    var_prop_value = NULL;
    Py_XDECREF(var_prop_name);
    var_prop_name = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_prop_value);
    var_prop_value = NULL;
    Py_XDECREF(var_prop_name);
    var_prop_name = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__46__setViaSetProperty(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_widget = python_pars[1];
    PyObject *par_prop = python_pars[2];
    PyObject *var_prop_value = NULL;
    PyObject *var_prop_name = NULL;
    struct Nuitka_FrameObject *frame_2e684e62d2e4560b8eef24134c51e31e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2e684e62d2e4560b8eef24134c51e31e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2e684e62d2e4560b8eef24134c51e31e)) {
        Py_XDECREF(cache_frame_2e684e62d2e4560b8eef24134c51e31e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2e684e62d2e4560b8eef24134c51e31e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2e684e62d2e4560b8eef24134c51e31e = MAKE_FUNCTION_FRAME(codeobj_2e684e62d2e4560b8eef24134c51e31e, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2e684e62d2e4560b8eef24134c51e31e->m_type_description == NULL);
    frame_2e684e62d2e4560b8eef24134c51e31e = cache_frame_2e684e62d2e4560b8eef24134c51e31e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2e684e62d2e4560b8eef24134c51e31e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2e684e62d2e4560b8eef24134c51e31e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_prop);
        tmp_args_element_value_1 = par_prop;
        CHECK_OBJECT(par_widget);
        tmp_args_element_value_2 = par_widget;
        frame_2e684e62d2e4560b8eef24134c51e31e->m_frame.f_lineno = 439;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[146],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prop_value == NULL);
        var_prop_value = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_prop_value);
        tmp_cmp_expr_left_1 = var_prop_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_2 = par_prop;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[64]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[145];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prop_name == NULL);
        var_prop_name = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_4 = par_prop;
        tmp_subscript_value_2 = mod_consts[28];
        tmp_expression_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_2, 0);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[93]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[164];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_widget);
        tmp_called_instance_3 = par_widget;
        frame_2e684e62d2e4560b8eef24134c51e31e->m_frame.f_lineno = 446;
        tmp_called_instance_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[165]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_prop_name);
        tmp_args_element_value_3 = var_prop_name;
        CHECK_OBJECT(var_prop_value);
        tmp_args_element_value_4 = var_prop_value;
        frame_2e684e62d2e4560b8eef24134c51e31e->m_frame.f_lineno = 446;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[166],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_widget);
        tmp_called_instance_4 = par_widget;
        CHECK_OBJECT(var_prop_name);
        tmp_args_element_value_5 = var_prop_name;
        CHECK_OBJECT(var_prop_value);
        tmp_args_element_value_6 = var_prop_value;
        frame_2e684e62d2e4560b8eef24134c51e31e->m_frame.f_lineno = 448;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[166],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_2:;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2e684e62d2e4560b8eef24134c51e31e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2e684e62d2e4560b8eef24134c51e31e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2e684e62d2e4560b8eef24134c51e31e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2e684e62d2e4560b8eef24134c51e31e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2e684e62d2e4560b8eef24134c51e31e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2e684e62d2e4560b8eef24134c51e31e,
        type_description_1,
        par_self,
        par_widget,
        par_prop,
        var_prop_value,
        var_prop_name
    );


    // Release cached frame if used for exception.
    if (frame_2e684e62d2e4560b8eef24134c51e31e == cache_frame_2e684e62d2e4560b8eef24134c51e31e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2e684e62d2e4560b8eef24134c51e31e);
        cache_frame_2e684e62d2e4560b8eef24134c51e31e = NULL;
    }

    assertFrameObject(frame_2e684e62d2e4560b8eef24134c51e31e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_prop_value);
    var_prop_value = NULL;
    Py_XDECREF(var_prop_name);
    var_prop_name = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_prop_value);
    var_prop_value = NULL;
    Py_XDECREF(var_prop_name);
    var_prop_name = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__48_tabSpacing(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_widget = python_pars[1];
    PyObject *par_prop = python_pars[2];
    PyObject *var_prop_value = NULL;
    struct Nuitka_FrameObject *frame_f3e5af376b7655b2acc6fc1dbfc86453;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f3e5af376b7655b2acc6fc1dbfc86453 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f3e5af376b7655b2acc6fc1dbfc86453)) {
        Py_XDECREF(cache_frame_f3e5af376b7655b2acc6fc1dbfc86453);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f3e5af376b7655b2acc6fc1dbfc86453 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f3e5af376b7655b2acc6fc1dbfc86453 = MAKE_FUNCTION_FRAME(codeobj_f3e5af376b7655b2acc6fc1dbfc86453, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f3e5af376b7655b2acc6fc1dbfc86453->m_type_description == NULL);
    frame_f3e5af376b7655b2acc6fc1dbfc86453 = cache_frame_f3e5af376b7655b2acc6fc1dbfc86453;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f3e5af376b7655b2acc6fc1dbfc86453);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f3e5af376b7655b2acc6fc1dbfc86453) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_prop);
        tmp_args_element_value_1 = par_prop;
        frame_f3e5af376b7655b2acc6fc1dbfc86453->m_frame.f_lineno = 474;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[146], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_prop_value == NULL);
        var_prop_value = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_prop_value);
        tmp_cmp_expr_left_1 = var_prop_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_widget);
        tmp_tuple_element_1 = par_widget;
        tmp_args_element_value_2 = PyTuple_New(4);
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_True;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[167];
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(var_prop_value);
        tmp_tuple_element_1 = var_prop_value;
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 3, tmp_tuple_element_1);
        frame_f3e5af376b7655b2acc6fc1dbfc86453->m_frame.f_lineno = 476;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[42], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f3e5af376b7655b2acc6fc1dbfc86453);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f3e5af376b7655b2acc6fc1dbfc86453);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f3e5af376b7655b2acc6fc1dbfc86453, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f3e5af376b7655b2acc6fc1dbfc86453->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f3e5af376b7655b2acc6fc1dbfc86453, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f3e5af376b7655b2acc6fc1dbfc86453,
        type_description_1,
        par_self,
        par_widget,
        par_prop,
        var_prop_value
    );


    // Release cached frame if used for exception.
    if (frame_f3e5af376b7655b2acc6fc1dbfc86453 == cache_frame_f3e5af376b7655b2acc6fc1dbfc86453) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f3e5af376b7655b2acc6fc1dbfc86453);
        cache_frame_f3e5af376b7655b2acc6fc1dbfc86453 = NULL;
    }

    assertFrameObject(frame_f3e5af376b7655b2acc6fc1dbfc86453);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_prop_value);
    var_prop_value = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_prop_value);
    var_prop_value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__49_buddy(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_widget = python_pars[1];
    PyObject *par_prop = python_pars[2];
    PyObject *var_buddy_name = NULL;
    struct Nuitka_FrameObject *frame_66b5ad636556b27414b674f28b4a5ddf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_66b5ad636556b27414b674f28b4a5ddf = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_66b5ad636556b27414b674f28b4a5ddf)) {
        Py_XDECREF(cache_frame_66b5ad636556b27414b674f28b4a5ddf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_66b5ad636556b27414b674f28b4a5ddf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_66b5ad636556b27414b674f28b4a5ddf = MAKE_FUNCTION_FRAME(codeobj_66b5ad636556b27414b674f28b4a5ddf, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_66b5ad636556b27414b674f28b4a5ddf->m_type_description == NULL);
    frame_66b5ad636556b27414b674f28b4a5ddf = cache_frame_66b5ad636556b27414b674f28b4a5ddf;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_66b5ad636556b27414b674f28b4a5ddf);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_66b5ad636556b27414b674f28b4a5ddf) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_2 = par_prop;
        tmp_subscript_value_1 = mod_consts[28];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_buddy_name == NULL);
        var_buddy_name = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_buddy_name);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_buddy_name);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_widget);
        tmp_tuple_element_1 = par_widget;
        tmp_args_element_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_buddy_name);
        tmp_tuple_element_1 = var_buddy_name;
        PyTuple_SET_ITEM0(tmp_args_element_value_1, 1, tmp_tuple_element_1);
        frame_66b5ad636556b27414b674f28b4a5ddf->m_frame.f_lineno = 484;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[42], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_66b5ad636556b27414b674f28b4a5ddf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_66b5ad636556b27414b674f28b4a5ddf);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_66b5ad636556b27414b674f28b4a5ddf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_66b5ad636556b27414b674f28b4a5ddf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_66b5ad636556b27414b674f28b4a5ddf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_66b5ad636556b27414b674f28b4a5ddf,
        type_description_1,
        par_self,
        par_widget,
        par_prop,
        var_buddy_name
    );


    // Release cached frame if used for exception.
    if (frame_66b5ad636556b27414b674f28b4a5ddf == cache_frame_66b5ad636556b27414b674f28b4a5ddf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_66b5ad636556b27414b674f28b4a5ddf);
        cache_frame_66b5ad636556b27414b674f28b4a5ddf = NULL;
    }

    assertFrameObject(frame_66b5ad636556b27414b674f28b4a5ddf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_buddy_name);
    var_buddy_name = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_buddy_name);
    var_buddy_name = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__50_geometry(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_widget = python_pars[1];
    PyObject *par_prop = python_pars[2];
    PyObject *var_geom = NULL;
    struct Nuitka_FrameObject *frame_2a2f650c9e91b136a38303051e82d9ca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2a2f650c9e91b136a38303051e82d9ca = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2a2f650c9e91b136a38303051e82d9ca)) {
        Py_XDECREF(cache_frame_2a2f650c9e91b136a38303051e82d9ca);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2a2f650c9e91b136a38303051e82d9ca == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2a2f650c9e91b136a38303051e82d9ca = MAKE_FUNCTION_FRAME(codeobj_2a2f650c9e91b136a38303051e82d9ca, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2a2f650c9e91b136a38303051e82d9ca->m_type_description == NULL);
    frame_2a2f650c9e91b136a38303051e82d9ca = cache_frame_2a2f650c9e91b136a38303051e82d9ca;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2a2f650c9e91b136a38303051e82d9ca);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2a2f650c9e91b136a38303051e82d9ca) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_widget);
        tmp_called_instance_1 = par_widget;
        frame_2a2f650c9e91b136a38303051e82d9ca->m_frame.f_lineno = 488;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[168]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 488;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_expression_value_2 = par_prop;
        tmp_subscript_value_1 = mod_consts[28];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2a2f650c9e91b136a38303051e82d9ca->m_frame.f_lineno = 489;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_geom == NULL);
        var_geom = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_widget);
        tmp_expression_value_3 = par_widget;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[169]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_geom);
        tmp_expression_value_4 = var_geom;
        tmp_subscript_value_2 = mod_consts[122];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_2, 2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 490;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_geom);
        tmp_expression_value_5 = var_geom;
        tmp_subscript_value_3 = mod_consts[170];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_3, 3);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 490;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2a2f650c9e91b136a38303051e82d9ca->m_frame.f_lineno = 490;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_widget);
        tmp_expression_value_6 = par_widget;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[171]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[172]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 492;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_expression_value_8 = par_prop;
        tmp_subscript_value_4 = mod_consts[28];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_4, 0);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 492;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2a2f650c9e91b136a38303051e82d9ca->m_frame.f_lineno = 492;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 492;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2a2f650c9e91b136a38303051e82d9ca->m_frame.f_lineno = 492;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2a2f650c9e91b136a38303051e82d9ca);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2a2f650c9e91b136a38303051e82d9ca);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2a2f650c9e91b136a38303051e82d9ca, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2a2f650c9e91b136a38303051e82d9ca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2a2f650c9e91b136a38303051e82d9ca, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2a2f650c9e91b136a38303051e82d9ca,
        type_description_1,
        par_self,
        par_widget,
        par_prop,
        var_geom
    );


    // Release cached frame if used for exception.
    if (frame_2a2f650c9e91b136a38303051e82d9ca == cache_frame_2a2f650c9e91b136a38303051e82d9ca) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2a2f650c9e91b136a38303051e82d9ca);
        cache_frame_2a2f650c9e91b136a38303051e82d9ca = NULL;
    }

    assertFrameObject(frame_2a2f650c9e91b136a38303051e82d9ca);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_geom);
    var_geom = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_geom);
    var_geom = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__51_orientation(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_widget = python_pars[1];
    PyObject *par_prop = python_pars[2];
    struct Nuitka_FrameObject *frame_0f9357d518d4e813e599d447c080ff05;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0f9357d518d4e813e599d447c080ff05 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0f9357d518d4e813e599d447c080ff05)) {
        Py_XDECREF(cache_frame_0f9357d518d4e813e599d447c080ff05);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0f9357d518d4e813e599d447c080ff05 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0f9357d518d4e813e599d447c080ff05 = MAKE_FUNCTION_FRAME(codeobj_0f9357d518d4e813e599d447c080ff05, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0f9357d518d4e813e599d447c080ff05->m_type_description == NULL);
    frame_0f9357d518d4e813e599d447c080ff05 = cache_frame_0f9357d518d4e813e599d447c080ff05;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0f9357d518d4e813e599d447c080ff05);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0f9357d518d4e813e599d447c080ff05) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_widget);
        tmp_called_instance_2 = par_widget;
        frame_0f9357d518d4e813e599d447c080ff05->m_frame.f_lineno = 496;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[173]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_0f9357d518d4e813e599d447c080ff05->m_frame.f_lineno = 496;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[174]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[162];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_widget);
        tmp_expression_value_1 = par_widget;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[175]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[176];
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 498;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[162]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 498;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[177]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 498;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            tmp_res = PyDict_SetItem(tmp_expression_value_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[178];
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 499;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[162]);
            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 499;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[179]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 499;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_expression_value_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_expression_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        CHECK_OBJECT(par_prop);
        tmp_expression_value_8 = par_prop;
        tmp_subscript_value_2 = mod_consts[28];
        tmp_expression_value_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_2, 0);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_expression_value_2);

            exception_lineno = 499;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[0]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_expression_value_2);

            exception_lineno = 499;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 499;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_0f9357d518d4e813e599d447c080ff05->m_frame.f_lineno = 497;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_widget);
        tmp_expression_value_9 = par_widget;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[180]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[181]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 501;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_expression_value_11 = par_prop;
        tmp_subscript_value_3 = mod_consts[28];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_3, 0);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 501;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_0f9357d518d4e813e599d447c080ff05->m_frame.f_lineno = 501;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 501;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_0f9357d518d4e813e599d447c080ff05->m_frame.f_lineno = 501;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0f9357d518d4e813e599d447c080ff05);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0f9357d518d4e813e599d447c080ff05);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0f9357d518d4e813e599d447c080ff05, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0f9357d518d4e813e599d447c080ff05->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0f9357d518d4e813e599d447c080ff05, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0f9357d518d4e813e599d447c080ff05,
        type_description_1,
        par_self,
        par_widget,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_0f9357d518d4e813e599d447c080ff05 == cache_frame_0f9357d518d4e813e599d447c080ff05) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0f9357d518d4e813e599d447c080ff05);
        cache_frame_0f9357d518d4e813e599d447c080ff05 = NULL;
    }

    assertFrameObject(frame_0f9357d518d4e813e599d447c080ff05);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__52_isWrapping(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_widget = python_pars[1];
    PyObject *par_prop = python_pars[2];
    struct Nuitka_FrameObject *frame_38a85b53ed0846efe21a3d12c8dc1618;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_38a85b53ed0846efe21a3d12c8dc1618 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_38a85b53ed0846efe21a3d12c8dc1618)) {
        Py_XDECREF(cache_frame_38a85b53ed0846efe21a3d12c8dc1618);

#if _DEBUG_REFCOUNTS
        if (cache_frame_38a85b53ed0846efe21a3d12c8dc1618 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_38a85b53ed0846efe21a3d12c8dc1618 = MAKE_FUNCTION_FRAME(codeobj_38a85b53ed0846efe21a3d12c8dc1618, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_38a85b53ed0846efe21a3d12c8dc1618->m_type_description == NULL);
    frame_38a85b53ed0846efe21a3d12c8dc1618 = cache_frame_38a85b53ed0846efe21a3d12c8dc1618;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_38a85b53ed0846efe21a3d12c8dc1618);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_38a85b53ed0846efe21a3d12c8dc1618) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_widget);
        tmp_expression_value_1 = par_widget;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[182]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_prop);
        tmp_args_element_value_2 = par_prop;
        frame_38a85b53ed0846efe21a3d12c8dc1618->m_frame.f_lineno = 506;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[146], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 506;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_38a85b53ed0846efe21a3d12c8dc1618->m_frame.f_lineno = 506;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_38a85b53ed0846efe21a3d12c8dc1618);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_38a85b53ed0846efe21a3d12c8dc1618);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_38a85b53ed0846efe21a3d12c8dc1618, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_38a85b53ed0846efe21a3d12c8dc1618->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_38a85b53ed0846efe21a3d12c8dc1618, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_38a85b53ed0846efe21a3d12c8dc1618,
        type_description_1,
        par_self,
        par_widget,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_38a85b53ed0846efe21a3d12c8dc1618 == cache_frame_38a85b53ed0846efe21a3d12c8dc1618) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_38a85b53ed0846efe21a3d12c8dc1618);
        cache_frame_38a85b53ed0846efe21a3d12c8dc1618 = NULL;
    }

    assertFrameObject(frame_38a85b53ed0846efe21a3d12c8dc1618);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__53_pyuicMargins(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_widget = python_pars[1];
    PyObject *par_prop = python_pars[2];
    struct Nuitka_FrameObject *frame_c74b0040d0dc847e909bdf993a4ccb8f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c74b0040d0dc847e909bdf993a4ccb8f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c74b0040d0dc847e909bdf993a4ccb8f)) {
        Py_XDECREF(cache_frame_c74b0040d0dc847e909bdf993a4ccb8f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c74b0040d0dc847e909bdf993a4ccb8f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c74b0040d0dc847e909bdf993a4ccb8f = MAKE_FUNCTION_FRAME(codeobj_c74b0040d0dc847e909bdf993a4ccb8f, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c74b0040d0dc847e909bdf993a4ccb8f->m_type_description == NULL);
    frame_c74b0040d0dc847e909bdf993a4ccb8f = cache_frame_c74b0040d0dc847e909bdf993a4ccb8f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c74b0040d0dc847e909bdf993a4ccb8f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c74b0040d0dc847e909bdf993a4ccb8f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_widget);
        tmp_expression_value_1 = par_widget;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[183]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 510;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prop);
        tmp_args_element_value_1 = par_prop;
        frame_c74b0040d0dc847e909bdf993a4ccb8f->m_frame.f_lineno = 510;
        tmp_dircall_arg2_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 510;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_call_result_1 = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c74b0040d0dc847e909bdf993a4ccb8f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c74b0040d0dc847e909bdf993a4ccb8f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c74b0040d0dc847e909bdf993a4ccb8f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c74b0040d0dc847e909bdf993a4ccb8f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c74b0040d0dc847e909bdf993a4ccb8f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c74b0040d0dc847e909bdf993a4ccb8f,
        type_description_1,
        par_self,
        par_widget,
        par_prop
    );


    // Release cached frame if used for exception.
    if (frame_c74b0040d0dc847e909bdf993a4ccb8f == cache_frame_c74b0040d0dc847e909bdf993a4ccb8f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c74b0040d0dc847e909bdf993a4ccb8f);
        cache_frame_c74b0040d0dc847e909bdf993a4ccb8f = NULL;
    }

    assertFrameObject(frame_c74b0040d0dc847e909bdf993a4ccb8f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_PyQt5$uic$properties$$$function__54_pyuicSpacing(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_widget = python_pars[1];
    PyObject *par_prop = python_pars[2];
    PyObject *var_horiz = NULL;
    PyObject *var_vert = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_bcc8e56885daf2901f4cb87c7311cedc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_bcc8e56885daf2901f4cb87c7311cedc = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bcc8e56885daf2901f4cb87c7311cedc)) {
        Py_XDECREF(cache_frame_bcc8e56885daf2901f4cb87c7311cedc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bcc8e56885daf2901f4cb87c7311cedc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bcc8e56885daf2901f4cb87c7311cedc = MAKE_FUNCTION_FRAME(codeobj_bcc8e56885daf2901f4cb87c7311cedc, module_PyQt5$uic$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bcc8e56885daf2901f4cb87c7311cedc->m_type_description == NULL);
    frame_bcc8e56885daf2901f4cb87c7311cedc = cache_frame_bcc8e56885daf2901f4cb87c7311cedc;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bcc8e56885daf2901f4cb87c7311cedc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bcc8e56885daf2901f4cb87c7311cedc) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_prop);
        tmp_args_element_value_1 = par_prop;
        frame_bcc8e56885daf2901f4cb87c7311cedc->m_frame.f_lineno = 514;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 514;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 514;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooo";
                    exception_lineno = 514;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[19];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 514;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_horiz == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_horiz = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_vert == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_vert = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_horiz);
        tmp_cmp_expr_left_1 = var_horiz;
        CHECK_OBJECT(var_vert);
        tmp_cmp_expr_right_1 = var_vert;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_widget);
        tmp_called_instance_1 = par_widget;
        CHECK_OBJECT(var_horiz);
        tmp_args_element_value_2 = var_horiz;
        frame_bcc8e56885daf2901f4cb87c7311cedc->m_frame.f_lineno = 517;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[167], tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_horiz);
        tmp_cmp_expr_left_2 = var_horiz;
        tmp_cmp_expr_right_2 = mod_consts[28];
        tmp_condition_result_2 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_widget);
        tmp_called_instance_2 = par_widget;
        CHECK_OBJECT(var_horiz);
        tmp_args_element_value_3 = var_horiz;
        frame_bcc8e56885daf2901f4cb87c7311cedc->m_frame.f_lineno = 520;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[184], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_vert);
        tmp_cmp_expr_left_3 = var_vert;
        tmp_cmp_expr_right_3 = mod_consts[28];
        tmp_condition_result_3 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        assert(tmp_condition_result_3 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        if (par_widget == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[143]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 523;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_widget;
        CHECK_OBJECT(var_vert);
        tmp_args_element_value_4 = var_vert;
        frame_bcc8e56885daf2901f4cb87c7311cedc->m_frame.f_lineno = 523;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[185], tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_3:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bcc8e56885daf2901f4cb87c7311cedc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bcc8e56885daf2901f4cb87c7311cedc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bcc8e56885daf2901f4cb87c7311cedc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bcc8e56885daf2901f4cb87c7311cedc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bcc8e56885daf2901f4cb87c7311cedc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bcc8e56885daf2901f4cb87c7311cedc,
        type_description_1,
        par_self,
        par_widget,
        par_prop,
        var_horiz,
        var_vert
    );


    // Release cached frame if used for exception.
    if (frame_bcc8e56885daf2901f4cb87c7311cedc == cache_frame_bcc8e56885daf2901f4cb87c7311cedc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bcc8e56885daf2901f4cb87c7311cedc);
        cache_frame_bcc8e56885daf2901f4cb87c7311cedc = NULL;
    }

    assertFrameObject(frame_bcc8e56885daf2901f4cb87c7311cedc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_horiz);
    var_horiz = NULL;
    Py_XDECREF(var_vert);
    var_vert = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_horiz);
    var_horiz = NULL;
    Py_XDECREF(var_vert);
    var_vert = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_prop);
    Py_DECREF(par_prop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__10__set() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__10__set,
        mod_consts[224],
#if PYTHON_VERSION >= 0x300
        mod_consts[225],
#endif
        codeobj_149463902e5b9f8c6d369f203dd37a2b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__11__enum() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__11__enum,
        mod_consts[181],
#if PYTHON_VERSION >= 0x300
        mod_consts[226],
#endif
        codeobj_cab2da6e036d4031d263aa85ee55148c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__12__number() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__12__number,
        mod_consts[227],
#if PYTHON_VERSION >= 0x300
        mod_consts[228],
#endif
        codeobj_da9b9a719ba8ff0867d365330bca7d8e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__13__double() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__13__double,
        mod_consts[233],
#if PYTHON_VERSION >= 0x300
        mod_consts[234],
#endif
        codeobj_905d002371fbf8a07c64a45a5bf9169a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__14__bool() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__14__bool,
        mod_consts[235],
#if PYTHON_VERSION >= 0x300
        mod_consts[236],
#endif
        codeobj_e1acac80a81458d76ac0bf29bdecdf35,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__15__stringlist() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__15__stringlist,
        mod_consts[237],
#if PYTHON_VERSION >= 0x300
        mod_consts[238],
#endif
        codeobj_d43ae9c04c89d7e8b6b91adcec00b6f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__16__string(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__16__string,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[240],
#endif
        codeobj_84b3f13ba2f8b89143699e98b1fbaee1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__17__cstring() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__17__cstring,
        mod_consts[242],
#if PYTHON_VERSION >= 0x300
        mod_consts[243],
#endif
        codeobj_5e787ce4efbe320f6e134188a30a79d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__18__color() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__18__color,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        mod_consts[244],
#endif
        codeobj_f3cf78ccf5d100bfd524f9c979097b3d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__19__point() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__19__point,
        mod_consts[245],
#if PYTHON_VERSION >= 0x300
        mod_consts[246],
#endif
        codeobj_f615656da651adcd7d0db75582416a1a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__1_int_list() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__1_int_list,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_08c65a48b67c08b96a1860f92a847793,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__20__pointf() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__20__pointf,
        mod_consts[247],
#if PYTHON_VERSION >= 0x300
        mod_consts[248],
#endif
        codeobj_139f933b149090a76fa8111ee1e17f2c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__21__rect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__21__rect,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[249],
#endif
        codeobj_6e714898b0f8ec2302e9620e3e63a028,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__22__rectf() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__22__rectf,
        mod_consts[250],
#if PYTHON_VERSION >= 0x300
        mod_consts[251],
#endif
        codeobj_b5d39ce8c592ae74ace6102193d9e8a3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__23__size() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__23__size,
        mod_consts[252],
#if PYTHON_VERSION >= 0x300
        mod_consts[253],
#endif
        codeobj_a86f27bc20e282b659dd54db51d5279a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__24__sizef() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__24__sizef,
        mod_consts[254],
#if PYTHON_VERSION >= 0x300
        mod_consts[255],
#endif
        codeobj_890daef3892da59cddeac017f0c7f6b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__25__pixmap() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__25__pixmap,
        mod_consts[256],
#if PYTHON_VERSION >= 0x300
        mod_consts[257],
#endif
        codeobj_038fe9bd98b84c2651a5f5c338fbf42c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__26__iconset() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__26__iconset,
        mod_consts[258],
#if PYTHON_VERSION >= 0x300
        mod_consts[259],
#endif
        codeobj_6ff57f15d437397b044ae1e85ce8a1a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__27__url() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__27__url,
        mod_consts[260],
#if PYTHON_VERSION >= 0x300
        mod_consts[261],
#endif
        codeobj_e6f744dafdefa8e49c79e5d952c53d8d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__28__locale() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__28__locale,
        mod_consts[262],
#if PYTHON_VERSION >= 0x300
        mod_consts[263],
#endif
        codeobj_5d37814c3c1fab85f80c8db481db9902,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__29__date() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__29__date,
        mod_consts[264],
#if PYTHON_VERSION >= 0x300
        mod_consts[265],
#endif
        codeobj_8694ea8d00ef88f8a7ea32f74348af31,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__2_float_list() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__2_float_list,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_671542f4e09ce347afa137ad43a2ce8c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__30__datetime() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__30__datetime,
        mod_consts[266],
#if PYTHON_VERSION >= 0x300
        mod_consts[267],
#endif
        codeobj_d0b67fafc5f57770ef95e016a23c9060,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__31__time() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__31__time,
        mod_consts[268],
#if PYTHON_VERSION >= 0x300
        mod_consts[269],
#endif
        codeobj_f6f63bda9f2baf4bd814ee0ee28a0423,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__32__gradient() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__32__gradient,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        mod_consts[270],
#endif
        codeobj_bbcab014a6f6c92e10e933e5fb0a975a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__33__palette() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__33__palette,
        mod_consts[271],
#if PYTHON_VERSION >= 0x300
        mod_consts[272],
#endif
        codeobj_95ce0ed7c75908a5e252622162dcdab0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__34__brush() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__34__brush,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        mod_consts[273],
#endif
        codeobj_996f2a057396ed92baebb8388a6143c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__35__sizepolicy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__35__sizepolicy,
        mod_consts[274],
#if PYTHON_VERSION >= 0x300
        mod_consts[275],
#endif
        codeobj_d209434123926b9a98520e74fecb8201,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__36_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__36_lambda,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        mod_consts[277],
#endif
        codeobj_3f50f7fc2c57b8429321432c377f7c48,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__37__font() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__37__font,
        mod_consts[287],
#if PYTHON_VERSION >= 0x300
        mod_consts[288],
#endif
        codeobj_8e0c5b63f752f34f68fb10f8a0e7d4e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__38__cursor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__38__cursor,
        mod_consts[289],
#if PYTHON_VERSION >= 0x300
        mod_consts[290],
#endif
        codeobj_0c56f34a4387b376b3c5bb160a542b72,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__39__cursorShape() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__39__cursorShape,
        mod_consts[291],
#if PYTHON_VERSION >= 0x300
        mod_consts[292],
#endif
        codeobj_e9771d95f7d088bbca10776bde0a55b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__3_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__3_lambda,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_88fa0c087e634522eda5db83a0596635,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__40_convert(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__40_convert,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        mod_consts[293],
#endif
        codeobj_cac7723c05df665aa820086392073287,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__41__getChild(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__41__getChild,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        mod_consts[294],
#endif
        codeobj_70808b353ca0a80498a697a319892983,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__42_getProperty(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__42_getProperty,
        mod_consts[295],
#if PYTHON_VERSION >= 0x300
        mod_consts[296],
#endif
        codeobj_35061fa8c7b70e6755e95141c65a2749,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__43_getAttribute(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__43_getAttribute,
        mod_consts[297],
#if PYTHON_VERSION >= 0x300
        mod_consts[298],
#endif
        codeobj_abfde152eb80e4671a27fbbd2fc93304,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__44_setProperties() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__44_setProperties,
        mod_consts[299],
#if PYTHON_VERSION >= 0x300
        mod_consts[300],
#endif
        codeobj_9341a4783312edf09ab4cee782e1ef90,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__45__delayed_property() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__45__delayed_property,
        mod_consts[301],
#if PYTHON_VERSION >= 0x300
        mod_consts[302],
#endif
        codeobj_be133bfffed819c7d45e47c289868f60,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__46__setViaSetProperty() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__46__setViaSetProperty,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        mod_consts[303],
#endif
        codeobj_2e684e62d2e4560b8eef24134c51e31e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__47__ignore() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[304],
#if PYTHON_VERSION >= 0x300
        mod_consts[305],
#endif
        codeobj_fc7b94138e7cfd7c04fbe71a73c59a31,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__48_tabSpacing() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__48_tabSpacing,
        mod_consts[318],
#if PYTHON_VERSION >= 0x300
        mod_consts[319],
#endif
        codeobj_f3e5af376b7655b2acc6fc1dbfc86453,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__49_buddy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__49_buddy,
        mod_consts[320],
#if PYTHON_VERSION >= 0x300
        mod_consts[321],
#endif
        codeobj_66b5ad636556b27414b674f28b4a5ddf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__4_qfont_enum() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__4_qfont_enum,
        mod_consts[207],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b1b1b219dd293e8694d8c30f379e1aef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__50_geometry() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__50_geometry,
        mod_consts[322],
#if PYTHON_VERSION >= 0x300
        mod_consts[323],
#endif
        codeobj_2a2f650c9e91b136a38303051e82d9ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__51_orientation() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__51_orientation,
        mod_consts[324],
#if PYTHON_VERSION >= 0x300
        mod_consts[325],
#endif
        codeobj_0f9357d518d4e813e599d447c080ff05,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__52_isWrapping() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__52_isWrapping,
        mod_consts[326],
#if PYTHON_VERSION >= 0x300
        mod_consts[327],
#endif
        codeobj_38a85b53ed0846efe21a3d12c8dc1618,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__53_pyuicMargins() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__53_pyuicMargins,
        mod_consts[328],
#if PYTHON_VERSION >= 0x300
        mod_consts[329],
#endif
        codeobj_c74b0040d0dc847e909bdf993a4ccb8f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__54_pyuicSpacing() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__54_pyuicSpacing,
        mod_consts[330],
#if PYTHON_VERSION >= 0x300
        mod_consts[331],
#endif
        codeobj_bcc8e56885daf2901f4cb87c7311cedc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__5_needsWidget() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__5_needsWidget,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e87bd88670ea9b1e6e9e018129d7469d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__6___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__6___init__,
        mod_consts[219],
#if PYTHON_VERSION >= 0x300
        mod_consts[220],
#endif
        codeobj_7bf84473c69a3d0c4b19e72f43f75c60,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__7_set_base_dir() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__7_set_base_dir,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[221],
#endif
        codeobj_73182bc2580af34bceeb254e77535031,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__8_reset() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__8_reset,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[222],
#endif
        codeobj_3444c8b9faf62e9a1e46eff43d8419d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PyQt5$uic$properties$$$function__9__pyEnumMember() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PyQt5$uic$properties$$$function__9__pyEnumMember,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[223],
#endif
        codeobj_cfe8d9f04fb7498dbef2b79113250807,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PyQt5$uic$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_PyQt5$uic$properties[] = {
    impl_PyQt5$uic$properties$$$function__1_int_list,
    impl_PyQt5$uic$properties$$$function__2_float_list,
    impl_PyQt5$uic$properties$$$function__3_lambda,
    impl_PyQt5$uic$properties$$$function__4_qfont_enum,
    impl_PyQt5$uic$properties$$$function__5_needsWidget,
    impl_PyQt5$uic$properties$$$function__6___init__,
    impl_PyQt5$uic$properties$$$function__7_set_base_dir,
    impl_PyQt5$uic$properties$$$function__8_reset,
    impl_PyQt5$uic$properties$$$function__9__pyEnumMember,
    impl_PyQt5$uic$properties$$$function__10__set,
    impl_PyQt5$uic$properties$$$function__11__enum,
    impl_PyQt5$uic$properties$$$function__12__number,
    impl_PyQt5$uic$properties$$$function__13__double,
    impl_PyQt5$uic$properties$$$function__14__bool,
    impl_PyQt5$uic$properties$$$function__15__stringlist,
    impl_PyQt5$uic$properties$$$function__16__string,
    impl_PyQt5$uic$properties$$$function__17__cstring,
    impl_PyQt5$uic$properties$$$function__18__color,
    impl_PyQt5$uic$properties$$$function__19__point,
    impl_PyQt5$uic$properties$$$function__20__pointf,
    impl_PyQt5$uic$properties$$$function__21__rect,
    impl_PyQt5$uic$properties$$$function__22__rectf,
    impl_PyQt5$uic$properties$$$function__23__size,
    impl_PyQt5$uic$properties$$$function__24__sizef,
    impl_PyQt5$uic$properties$$$function__25__pixmap,
    impl_PyQt5$uic$properties$$$function__26__iconset,
    impl_PyQt5$uic$properties$$$function__27__url,
    impl_PyQt5$uic$properties$$$function__28__locale,
    impl_PyQt5$uic$properties$$$function__29__date,
    impl_PyQt5$uic$properties$$$function__30__datetime,
    impl_PyQt5$uic$properties$$$function__31__time,
    impl_PyQt5$uic$properties$$$function__32__gradient,
    impl_PyQt5$uic$properties$$$function__33__palette,
    impl_PyQt5$uic$properties$$$function__34__brush,
    impl_PyQt5$uic$properties$$$function__35__sizepolicy,
    impl_PyQt5$uic$properties$$$function__36_lambda,
    impl_PyQt5$uic$properties$$$function__37__font,
    impl_PyQt5$uic$properties$$$function__38__cursor,
    impl_PyQt5$uic$properties$$$function__39__cursorShape,
    impl_PyQt5$uic$properties$$$function__40_convert,
    impl_PyQt5$uic$properties$$$function__41__getChild,
    impl_PyQt5$uic$properties$$$function__42_getProperty,
    impl_PyQt5$uic$properties$$$function__43_getAttribute,
    impl_PyQt5$uic$properties$$$function__44_setProperties,
    impl_PyQt5$uic$properties$$$function__45__delayed_property,
    impl_PyQt5$uic$properties$$$function__46__setViaSetProperty,
    NULL,
    impl_PyQt5$uic$properties$$$function__48_tabSpacing,
    impl_PyQt5$uic$properties$$$function__49_buddy,
    impl_PyQt5$uic$properties$$$function__50_geometry,
    impl_PyQt5$uic$properties$$$function__51_orientation,
    impl_PyQt5$uic$properties$$$function__52_isWrapping,
    impl_PyQt5$uic$properties$$$function__53_pyuicMargins,
    impl_PyQt5$uic$properties$$$function__54_pyuicSpacing,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_PyQt5$uic$properties;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_PyQt5$uic$properties) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_PyQt5$uic$properties[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_PyQt5$uic$properties,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_PyQt5$uic$properties(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PyQt5.uic.properties");

    // Store the module for future use.
    module_PyQt5$uic$properties = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIternext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("PyQt5.uic.properties: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("PyQt5.uic.properties: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("PyQt5.uic.properties: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initPyQt5$uic$properties\n");

    moduledict_PyQt5$uic$properties = MODULE_DICT(module_PyQt5$uic$properties);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_PyQt5$uic$properties,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PyQt5$uic$properties,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[8]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PyQt5$uic$properties,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PyQt5$uic$properties,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PyQt5$uic$properties,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PyQt5$uic$properties);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_PyQt5$uic$properties);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_Properties$assign_unpack_1__assign_source = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_c778cb831ce022a271809015478d7462;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_PyQt5$uic$properties$$$class__1_Properties_79 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_c778cb831ce022a271809015478d7462 = MAKE_MODULE_FRAME(codeobj_c778cb831ce022a271809015478d7462, module_PyQt5$uic$properties);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_c778cb831ce022a271809015478d7462);
    assert(Py_REFCNT(frame_c778cb831ce022a271809015478d7462) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[188]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[188]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[189], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[188]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[188]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[190], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[192];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_PyQt5$uic$properties;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[28];
        frame_c778cb831ce022a271809015478d7462->m_frame.f_lineno = 41;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[193];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_PyQt5$uic$properties;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[28];
        frame_c778cb831ce022a271809015478d7462->m_frame.f_lineno = 42;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[195];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_PyQt5$uic$properties;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[196];
        tmp_level_value_3 = mod_consts[197];
        frame_c778cb831ce022a271809015478d7462->m_frame.f_lineno = 45;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_PyQt5$uic$properties,
                mod_consts[24],
                mod_consts[28]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[24]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_PyQt5$uic$properties,
                mod_consts[92],
                mod_consts[28]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[92]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_9);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[11];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_PyQt5$uic$properties;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[198];
        tmp_level_value_4 = mod_consts[197];
        frame_c778cb831ce022a271809015478d7462->m_frame.f_lineno = 46;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_PyQt5$uic$properties,
                mod_consts[16],
                mod_consts[28]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[16]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[199];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_PyQt5$uic$properties;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[200];
        tmp_level_value_5 = mod_consts[197];
        frame_c778cb831ce022a271809015478d7462->m_frame.f_lineno = 49;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_PyQt5$uic$properties,
                mod_consts[159],
                mod_consts[28]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[159]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[192]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[192]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        frame_c778cb831ce022a271809015478d7462->m_frame.f_lineno = 54;
        tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[201],
            PyTuple_GET_ITEM(mod_consts[202], 0)
        );

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[203]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[203]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[204]);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = Py_None;
        UPDATE_STRING_DICT0(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = Py_None;
        UPDATE_STRING_DICT0(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = Py_None;
        UPDATE_STRING_DICT0(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_PyQt5$uic$properties$$$function__1_int_list();

        UPDATE_STRING_DICT1(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_PyQt5$uic$properties$$$function__2_float_list();

        UPDATE_STRING_DICT1(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_PyQt5$uic$properties$$$function__3_lambda();

        UPDATE_STRING_DICT1(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_PyQt5$uic$properties$$$function__4_qfont_enum();

        UPDATE_STRING_DICT1(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_PyQt5$uic$properties$$$function__5_needsWidget();

        UPDATE_STRING_DICT1(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_21);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[208];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_22 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        tmp_key_value_1 = mod_consts[209];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_value_2 = mod_consts[209];
        tmp_metaclass_value_1 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_metaclass_value_1 == NULL) {
            tmp_metaclass_value_1 = Py_None;
        }
        assert(!(tmp_metaclass_value_1 == NULL));
        Py_INCREF(tmp_metaclass_value_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_2 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[28];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_2;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_24 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[209];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[209];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 79;

        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[210]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[210]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = mod_consts[211];
        tmp_args_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_c778cb831ce022a271809015478d7462->m_frame.f_lineno = 79;
        tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[212]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_2;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_value_1 = mod_consts[213];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[214];
        tmp_getattr_default_1 = mod_consts[215];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_2;
        }
        tmp_right_value_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_value_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[214]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_value_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_value_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 79;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_26;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_PyQt5$uic$properties$$$class__1_Properties_79 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[216];
        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[217], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[211];
        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[218], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2)) {
            Py_XDECREF(cache_frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2 = MAKE_FUNCTION_FRAME(codeobj_7112fc4cbe9cc21b0cfcd38008c8bf28, module_PyQt5$uic$properties, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2->m_type_description == NULL);
        frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2 = cache_frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__6___init__();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[219], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__7_set_base_dir();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[12], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__8_reset();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[10], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__9__pyEnumMember();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[27], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__10__set();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[224], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__11__enum();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[181], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__12__number();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[227], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_assign_source_28;
            tmp_assign_source_28 = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[227]);

            if (unlikely(tmp_assign_source_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[227]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            assert(tmp_Properties$assign_unpack_1__assign_source == NULL);
            tmp_Properties$assign_unpack_1__assign_source = tmp_assign_source_28;
        }
        // Tried code:
        CHECK_OBJECT(tmp_Properties$assign_unpack_1__assign_source);
        tmp_dictset_value = tmp_Properties$assign_unpack_1__assign_source;
        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[229], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(tmp_Properties$assign_unpack_1__assign_source);
        tmp_dictset_value = tmp_Properties$assign_unpack_1__assign_source;
        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[230], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(tmp_Properties$assign_unpack_1__assign_source);
        tmp_dictset_value = tmp_Properties$assign_unpack_1__assign_source;
        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[231], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(tmp_Properties$assign_unpack_1__assign_source);
        tmp_dictset_value = tmp_Properties$assign_unpack_1__assign_source;
        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[232], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        goto try_end_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_Properties$assign_unpack_1__assign_source);
        Py_DECREF(tmp_Properties$assign_unpack_1__assign_source);
        tmp_Properties$assign_unpack_1__assign_source = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_2;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_Properties$assign_unpack_1__assign_source);
        Py_DECREF(tmp_Properties$assign_unpack_1__assign_source);
        tmp_Properties$assign_unpack_1__assign_source = NULL;


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__13__double();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[233], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__14__bool();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[235], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__15__stringlist();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[237], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[239];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__16__string(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[31], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[31]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[31]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 158;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[241], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__17__cstring();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[242], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__18__color();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[101], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__19__point();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[245], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__20__pointf();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[247], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__21__rect();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[172], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__22__rectf();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[250], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__23__size();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[252], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__24__sizef();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[254], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__25__pixmap();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[256], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__26__iconset();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[258], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__27__url();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[260], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__28__locale();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[262], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__29__date();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[264], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__30__datetime();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[266], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__31__time();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[268], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__32__gradient();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[118], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__33__palette();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[271], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__34__brush();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[114], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__35__sizepolicy();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[274], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            tmp_called_value_2 = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[4]);

            if (tmp_called_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[4]);

                    if (unlikely(tmp_called_value_2 == NULL)) {
                        tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
                    }

                    if (tmp_called_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 337;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_1 = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[274]);

            if (unlikely(tmp_args_element_value_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_called_value_2);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[274]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 337;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 337;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2->m_frame.f_lineno = 337;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[274], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            tmp_tuple_element_4 = mod_consts[276];
            tmp_tuple_element_3 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_3, 0, tmp_tuple_element_4);


            tmp_tuple_element_4 = MAKE_FUNCTION_PyQt5$uic$properties$$$function__36_lambda();

            PyTuple_SET_ITEM(tmp_tuple_element_3, 1, tmp_tuple_element_4);
            tmp_dictset_value = PyTuple_New(9);
            {
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_tuple_element_10;
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_tuple_element_12;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_3);
                tmp_tuple_element_5 = mod_consts[278];
                tmp_tuple_element_3 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_3, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[279]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_5 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_3, 1, tmp_tuple_element_5);
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_3);
                tmp_tuple_element_6 = mod_consts[280];
                tmp_tuple_element_3 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_3, 0, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[206]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[206]);

                        if (unlikely(tmp_tuple_element_6 == NULL)) {
                            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[206]);
                        }

                        if (tmp_tuple_element_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 342;
                            type_description_2 = "o";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_3, 1, tmp_tuple_element_6);
                goto tuple_build_noexception_2;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_tuple_element_3);
                goto tuple_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_2:;
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_3);
                tmp_tuple_element_7 = mod_consts[281];
                tmp_tuple_element_3 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_3, 0, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[206]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[206]);

                        if (unlikely(tmp_tuple_element_7 == NULL)) {
                            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[206]);
                        }

                        if (tmp_tuple_element_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 343;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_3, 1, tmp_tuple_element_7);
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_tuple_element_3);
                goto tuple_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_3);
                tmp_tuple_element_8 = mod_consts[282];
                tmp_tuple_element_3 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_3, 0, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[206]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[206]);

                        if (unlikely(tmp_tuple_element_8 == NULL)) {
                            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[206]);
                        }

                        if (tmp_tuple_element_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 344;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_3, 1, tmp_tuple_element_8);
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_tuple_element_3);
                goto tuple_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                PyTuple_SET_ITEM(tmp_dictset_value, 4, tmp_tuple_element_3);
                tmp_tuple_element_9 = mod_consts[283];
                tmp_tuple_element_3 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_3, 0, tmp_tuple_element_9);
                tmp_tuple_element_9 = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[279]);

                if (tmp_tuple_element_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_9 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_tuple_element_9);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_3, 1, tmp_tuple_element_9);
                PyTuple_SET_ITEM(tmp_dictset_value, 5, tmp_tuple_element_3);
                tmp_tuple_element_10 = mod_consts[284];
                tmp_tuple_element_3 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_3, 0, tmp_tuple_element_10);
                tmp_tuple_element_10 = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[206]);

                if (tmp_tuple_element_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[206]);

                        if (unlikely(tmp_tuple_element_10 == NULL)) {
                            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[206]);
                        }

                        if (tmp_tuple_element_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 346;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_10);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_3, 1, tmp_tuple_element_10);
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_tuple_element_3);
                goto tuple_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                PyTuple_SET_ITEM(tmp_dictset_value, 6, tmp_tuple_element_3);
                tmp_tuple_element_11 = mod_consts[285];
                tmp_tuple_element_3 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_3, 0, tmp_tuple_element_11);
                tmp_tuple_element_11 = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[206]);

                if (tmp_tuple_element_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[206]);

                        if (unlikely(tmp_tuple_element_11 == NULL)) {
                            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[206]);
                        }

                        if (tmp_tuple_element_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 347;
                            type_description_2 = "o";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_tuple_element_11);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_3, 1, tmp_tuple_element_11);
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_tuple_element_3);
                goto tuple_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                PyTuple_SET_ITEM(tmp_dictset_value, 7, tmp_tuple_element_3);
                tmp_tuple_element_12 = mod_consts[286];
                tmp_tuple_element_3 = PyTuple_New(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_3, 0, tmp_tuple_element_12);
                tmp_tuple_element_12 = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[207]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[207]);

                        if (unlikely(tmp_tuple_element_12 == NULL)) {
                            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[207]);
                        }

                        if (tmp_tuple_element_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 348;
                            type_description_2 = "o";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_3, 1, tmp_tuple_element_12);
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_tuple_element_3);
                goto tuple_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                PyTuple_SET_ITEM(tmp_dictset_value, 8, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[134], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__37__font();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[287], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__38__cursor();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[289], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__39__cursorShape();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[291], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[239];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__40_convert(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[146], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[239];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__41__getChild(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[147], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[239];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__42_getProperty(tmp_defaults_4);

            tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[295], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 388;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = mod_consts[239];
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__43_getAttribute(tmp_defaults_5);

            tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[297], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__44_setProperties();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[299], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__45__delayed_property();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[301], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__46__setViaSetProperty();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[157], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__47__ignore();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[304], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[301]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[301]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 455;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[306], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[301]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[301]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 456;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[307], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[157]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[157]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 458;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[308], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[157]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[157]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 459;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[309], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[157]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[157]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 460;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[30], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[304]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[304]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 462;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[168], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[304]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[304]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 463;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[310], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[304]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[304]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 464;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[311], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[304]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[304]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 465;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[312], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[304]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[304]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 466;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[313], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[304]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[304]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 467;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[314], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[304]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[304]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 468;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[315], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[304]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[304]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 469;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[316], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[304]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[304]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 470;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[317], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__48_tabSpacing();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[318], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__49_buddy();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[320], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__50_geometry();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[322], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__51_orientation();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[324], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__52_isWrapping();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[326], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__53_pyuicMargins();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[328], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_PyQt5$uic$properties$$$function__54_pyuicSpacing();

        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[330], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2 == cache_frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2);
            cache_frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2 = NULL;
        }

        assertFrameObject(frame_7112fc4cbe9cc21b0cfcd38008c8bf28_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_1 = mod_consts[208];
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        tmp_dictset_value = mod_consts[208];
        tmp_res = PyObject_SetItem(locals_PyQt5$uic$properties$$$class__1_Properties_79, mod_consts[332], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_13 = mod_consts[211];
            tmp_args_value_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_13 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = locals_PyQt5$uic$properties$$$class__1_Properties_79;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_c778cb831ce022a271809015478d7462->m_frame.f_lineno = 79;
            tmp_assign_source_29 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_29;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_27 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_PyQt5$uic$properties$$$class__1_Properties_79);
        locals_PyQt5$uic$properties$$$class__1_Properties_79 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_PyQt5$uic$properties$$$class__1_Properties_79);
        locals_PyQt5$uic$properties$$$class__1_Properties_79 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 79;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_27);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c778cb831ce022a271809015478d7462);
#endif
    popFrameStack();

    assertFrameObject(frame_c778cb831ce022a271809015478d7462);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c778cb831ce022a271809015478d7462);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c778cb831ce022a271809015478d7462, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c778cb831ce022a271809015478d7462->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c778cb831ce022a271809015478d7462, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PyQt5.uic.properties", false);

    return module_PyQt5$uic$properties;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PyQt5$uic$properties, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("PyQt5$uic$properties", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
