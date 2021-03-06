/*
 * Copyright © 2012-2020 Wickr Inc.  All rights reserved.
 *
 * This code is being released for EDUCATIONAL, ACADEMIC, AND CODE REVIEW PURPOSES
 * ONLY.  COMMERCIAL USE OF THE CODE IS EXPRESSLY PROHIBITED.  For additional details,
 * please see LICENSE
 *
 * THE CODE IS MADE AVAILABLE "AS-IS" AND WITHOUT ANY EXPRESS OR
 * IMPLIED GUARANTEES AS TO FITNESS, MERCHANTABILITY, NON-
 * INFRINGEMENT OR OTHERWISE. IT IS NOT BEING PROVIDED IN TRADE BUT ON
 * A VOLUNTARY BASIS ON BEHALF OF THE AUTHOR’S PART FOR THE BENEFIT
 * OF THE LICENSEE AND IS NOT MADE AVAILABLE FOR CONSUMER USE OR ANY
 * OTHER USE OUTSIDE THE TERMS OF THIS LICENSE. ANYONE ACCESSING THE
 * CODE SHOULD HAVE THE REQUISITE EXPERTISE TO SECURE THEIR SYSTEM
 * AND DEVICES AND TO ACCESS AND USE THE CODE FOR REVIEW PURPOSES
 * ONLY. LICENSEE BEARS THE RISK OF ACCESSING AND USING THE CODE. IN
 * PARTICULAR, AUTHOR BEARS NO LIABILITY FOR ANY INTERFERENCE WITH OR
 * ADVERSE EFFECT THAT MAY OCCUR AS A RESULT OF THE LICENSEE
 * ACCESSING AND/OR USING THE CODE ON LICENSEE’S SYSTEM.
*/

#ifndef node_priv_h
#define node_priv_h

#include "node.h"
#include "node.pb-c.h"

void wickr_node_proto_free(Wickr__Proto__Node *proto_node);

Wickr__Proto__Node *wickr_node_to_proto(const wickr_node_t *node);

wickr_node_t *wickr_node_create_from_proto(const Wickr__Proto__Node *proto, const wickr_crypto_engine_t *engine);

wickr_buffer_t *wickr_node_make_status_cache(const wickr_node_t *node,
                                             const wickr_crypto_engine_t *engine);

bool wickr_node_has_valid_cache(const wickr_node_t *node,
                                const wickr_crypto_engine_t *engine);

void wickr_node_update_status_cache(wickr_node_t *node, const wickr_crypto_engine_t *engine);
#endif /* node_priv_h */
