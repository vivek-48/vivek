import {RETRIVE_ALL_USERS} from '../Action/types.jsx'
const initialState={}
const usersReducer = (users=initialstate,action) =>{
    const {type,payload} =action
    switch(action.type){
        case RETRIVE_ALL_USERS:
            return {...payload}
        default:
            return users
    }
}
export const selectUser = (state) =>state.users
export default usersReducer