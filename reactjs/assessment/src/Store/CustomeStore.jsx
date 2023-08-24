import { applyMiddleware, createStore } from "redux";
import {composeWithDevTools} from 'redux-devtools-extension';
import rootReducer from './../Reducer/index.jsx';
import thunk from "redux-thunk";

const initialState={}; 
const middleware=[thunk];
const CustomeStore = createStore(
    rootReducer,
    initialState,
    composeWithDevTools(applyMiddleware(...middleware))
)

export default CustomeStore;                                       