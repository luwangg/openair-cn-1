/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under 
 * the Apache License, Version 2.0  (the "License"); you may not use this file
 * except in compliance with the License.  
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

#ifndef FILE_SCTP_ITTI_MESSAGING_SEEN
#define FILE_SCTP_ITTI_MESSAGING_SEEN

int sctp_itti_send_new_association(const sctp_assoc_id_t assoc_id,
        const sctp_stream_id_t instreams,
        const sctp_stream_id_t outstreams);

int sctp_itti_send_new_message_ind(const size_t size,
        const uint8_t * const buffer,
        const sctp_assoc_id_t assoc_id,
        const sctp_stream_id_t stream,
        const sctp_stream_id_t instreams,
        const sctp_stream_id_t outstreams);

int sctp_itti_send_com_down_ind(const sctp_assoc_id_t assoc_id);

#endif /* FILE_SCTP_ITTI_MESSAGING_SEEN */
